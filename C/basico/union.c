#include <stdio.h>
#include <string.h>

struct records
{
    double price;

    union
    {
        struct 
        {
            int engineSize;
            int mileage;
        } motorcycle;

        struct
        {
            char colour[25];
        } bicycle;

    } item;
};

int main()
{
    struct records r;
    strcpy(r.item.bicycle.colour, "Blue");
    r.item.motorcycle.engineSize = 200;
    r.price = 2.500;

    printf("%d\n%s\n%1.3f",r.item.motorcycle.engineSize, r.item.bicycle.colour, r.price);
    
    return 0;
}