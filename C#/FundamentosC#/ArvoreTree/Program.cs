using System;

namespace ArvoreTree
{
    class Program
    {
        static void Main()
        {
            DrawTree(9, 17);
        }

        static void DrawTree(int height, int width)
        {
            string[,] mat = new string[height,width];
            int metade = width/2;
            for(int i=0; i<height; i++){
                for(int c=0; c<width; c++){
                    mat[i,c] = " ";
                    if(i != height-1){
                        if(c >= metade-i && c <= metade+i)
                            mat[i,c] = "*";
                    }
                    if(i == height-1 && c == metade)
                        mat[i,c] = "*";

                    Console.Write(mat[i,c]);
                }
                Console.WriteLine();
            }
        }
    }
}
