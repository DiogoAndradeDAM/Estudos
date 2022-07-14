#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_vog(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
}

char src_vog(char c){
	char vog1=c, vog2=c;
	while(1){
		vog1--;
		vog2++;
		if(is_vog(vog1)) return vog1;
		if(is_vog(vog2)) return vog2;
	}
}

char src_cons(char c){
	if(c != 'z'){
		return (is_vog(c++)) ? c+=2 : c++;
	}else return c;
}

int main()
{
	short int i;
	char text[30];
	scanf("%s", &text);
	char *ctext = calloc(strlen(text)*3, sizeof(char));
	char *aux = ctext;

	for(i=0; text[i]!='\0'; i++){
		if(!is_vog(text[i])){
			*ctext = text[i];
			printf("%c", *ctext);
			ctext++;
			*ctext = src_vog(text[i]);
			printf("%c", *ctext);
			ctext++;
			*ctext = src_cons(text[i]);
			printf("%c", *ctext);
			ctext++;
		}else{
			*ctext = text[i];
			printf("%c", *ctext);
			ctext++;
		}
		
	}
	*ctext = '\0';
	printf("\n");
	for(; *aux!='\0'; aux++) printf("%c", *aux);
	return 0;
}
