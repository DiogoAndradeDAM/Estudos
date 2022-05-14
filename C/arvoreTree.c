#include <stdio.h>

void draw_tree(int height, int width)
{   
    char mat[height][width];
    int half_w = width/2;

    for(int i=0; i<height; i++){
        printf("\n");
        for(int c=0; c<width; c++){
            mat[i][c] = " ";

            if(c >= half_w-i && c <= half_w+i)
                mat[i][c] = "*";
            if(i == height-1 && c != half_w)
                mat[i][c] = " ";

            printf("%c", mat[i][c]);
        }
    } 
}

int main()
{
    int height=7, width=13;

    draw_tree(height, width);

    return 0;
}