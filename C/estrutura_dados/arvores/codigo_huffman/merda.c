#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criar o código de Huffman

#define SIZET1 256

typedef struct node{
    int fre;
    char c;
    struct node *right;
    struct node *left;
    struct node *next;
}Node;

typedef struct list{
    struct node *start;
    unsigned short int tam;
}List;

void new_list(List *list){
    list->start = NULL;
    list->tam = 0;
}

void init_table_ref(unsigned int table[]){
    unsigned short int i;
    for(i=0; i<SIZET1; i++) table[i]=0;
}

void add_fre(unsigned int table[], unsigned char *text){
    for(; *text != '\0'; text++) table[*text]++;
}

void imp_tablefre(unsigned int table[], int c){
    unsigned short int i;
    printf("\nCHAR\tFREQUENCY\n");
    if(c==0){
        for(i=0; i<SIZET1; i++) printf("%c\t%d\n", i, table[i]);
    }else{
        for(i=0; i<SIZET1; i++){
            if(table[i] != 0) printf("%c\t%d\n", i, table[i]);
        }
    }
}

void pushord_list(List *list, Node *node){
    Node *aux;
    if(list->start == NULL){
        list->start = node;
    }else if(list->start->next == NULL){
        if(node->fre < list->start->fre){
           node->next = list->start;
            list->start = node;
        }else{
            node->next = NULL;
            list->start->next = node;
        }
    }else{
        aux = list->start;
        while(aux->next && aux->next->fre <= node->fre) aux = aux->next;
        node->next = aux->next;
        aux->next = node;
    }
    list->tam++;

}

struct node * rmvi_list(List *list){
    Node *aux = list->start;
    list->start = list->start->next;
    list->tam--;
    return aux;
}

void fill_list(unsigned int table[], List *list){
    Node *new;
    unsigned short int i;
    if(new){
        for(i=0; i<SIZET1; i++){
            if(table[i] > 0){
                new = (struct node*) malloc(sizeof(Node));
                new->c = i;
                new->fre = table[i];
                new->next = NULL;
                new->right = NULL;
                new->left = NULL;

                pushord_list(list, new);
            }
        }
    }
}

void imp_list(List list){
    printf("\nINICIO DA LISTA\n");
    printf("CHAR\tFREQUENCY\t\tTAM: %d\n", list.tam);
    while(list.start){
        printf("%c\t%d\n", list.start->c, list.start->fre);
        list.start = list.start->next;
    }
    printf("\nFIM DA LISTA\n");
}

void create_node_tree(List *list){
    Node *el1, *el2, *new = (struct node*) malloc(sizeof(Node));
    if(new){
        el1 = rmvi_list(list);
        el2 = rmvi_list(list);
        new->c = '+';
        new->fre = el1->fre + el2->fre;
        new->next = NULL;
        new->left = el1;
        new->right = el2;

        pushord_list(list, new);
    }
}

struct node * create_tree(List *list){
    while(list->tam > 1){
        create_node_tree(list);
    }
    return list->start;
}

void imp_tree_leaf(Node *raiz, short int tam){
    if(raiz->left == NULL && raiz->right == NULL) printf("CHAR: %c \tFREQUENCY: %d\t HEIGHT: %d\n", raiz->c, raiz->fre, tam);
    else{
        imp_tree_leaf(raiz->left, tam++);
        imp_tree_leaf(raiz->right, tam++);
    }
}

char** aloc_dict(short int cols){
    char **dict;
    unsigned short int i;
    dict = malloc(sizeof(char*) * SIZET1);

    for(i=0; i<SIZET1; i++) dict[i] = calloc(cols, sizeof(char));
    
    return dict;
}

void gnrt_dict(char **dict, Node *raiz, char *path, short int cols){
    char left[cols], right[cols];

    if(raiz->left == NULL && raiz->right == NULL){
        strcpy(dict[raiz->c], path);
    }else{
        strcpy(left, path);
        strcpy(right, path);

        strcat(left, "0");
        strcat(right, "1");

        gnrt_dict(dict, raiz->left, left, cols);
        gnrt_dict(dict, raiz->right, right, cols);
    }
}

void imp_dict(char **dict){
    unsigned short int i;
    for(i=0; i<SIZET1; i++){
        printf("\t%3d: %s\n", i, dict[i]);
    }
}

int calcula_tam_str(char **dict, unsigned char *text){
    int i=0, tam=0;
    while(text[i] != '\0'){
        tam += strlen(dict[text[i]]);
        i++;
    }
    return tam+1;
}

char * codificar(char **dict, unsigned char *text){
    int i=0, tam = calcula_tam_str(dict, text);
    char *code = calloc(tam, sizeof(char));
    
    while(text[i] != '\0'){
        strcat(code, dict[text[i]]);
        i++;
    }
    return code;
}

char * decodificar(char *text, Node *raiz){
    unsigned short int i=0;
    Node *aux = raiz;
    char temp[2];
    char *decode = calloc(strlen(text), sizeof(char));

    while(text[i] != '\0'){
        if(text[i] == '0') aux = aux->left;
        else aux = aux->right;

        if(aux->left == NULL && aux->right == NULL){
            temp[0] = aux->c;
            temp[1] = '\0';
            strcat(decode, temp);
            aux = raiz;
        }

        i++;
    }

    return decode;
}

int main()
{
    unsigned int tablefre[SIZET1];
    unsigned char text[] = {"Vamos aprender a programar"};
    char **table_dict;
    List list;
    Node *arv;
    char *codificado, *decodificado;

    init_table_ref(tablefre);
    add_fre(tablefre, text);

    new_list(&list);
    fill_list(tablefre, &list);
    
    arv = create_tree(&list);
    //imp_tree_leaf(arv, 0); 

    table_dict = aloc_dict(5);
    gnrt_dict(table_dict, arv, "", 5);
    // imp_dict(table_dict);

    codificado = codificar(table_dict, text);
    printf("\n%s\n", codificado);

    //decodificado = decodificar(codificado, arv);
    //printf("\n%s\n", decodificado);

}