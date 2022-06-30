#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

struct person{
    char name[30];
    uint8_t age;
    float height;
    char state[2];
    void(*show)(struct person *);
};

void show2(struct person *this){
    printf("\tName: %s\n\tAge: %d\n\tHeight: %4.2f\n\tState: %s\n", this->name, this->age, this->height, this->state);
}

void show(struct person *this){
    printf("Name: %s\nAge: %d\nHeight: %4.2f\nState: %s\n", this->name, this->age, this->height, this->state);
}

struct person * new_person(char _n[], uint8_t _a, float _h, char _s[]){
    struct person *this = (struct person*) malloc(sizeof(struct person));
    strcpy(this->name, _n);
    this->age = _a;
    this->height = _h;
    strcpy(this->state, _s);
    this->show = &show;
    return this;
}

struct person * new_person2(char _n[], uint8_t _a, float _h, char _s[], void(*print)(struct person *)){
        struct person *this = (struct person*) malloc(sizeof(struct person));
    strcpy(this->name, _n);
    this->age = _a;
    this->height = _h;
    strcpy(this->state, _s);
    this->show = print;
    return this;
}


int main()
{
    struct person *p1 = new_person2("Diogo Andrade de Moura", 16, 1.69, "SP", &show);
    p1->show(p1);

    return 0;
}

