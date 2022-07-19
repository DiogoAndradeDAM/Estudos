#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fwrite_html(FILE *file, char text[]){
  if(file){
	fputs(text, file);
	fputc('\n', file);
  }else{printf("\n\tERROR for write in file\n");}
}

int main()
{
  char fname[30];
  printf("Name and path of file$ ");
  scanf("%30[^\n]", fname);
  getchar();
  char name[] = strcat(fname, ".html");

  char text[200];
  FILE *file = fopen(name, "w");
  printf("\n\t:OPEN HTML EDITOR:\n");
  scanf("%200[^\n]", text);
  fwrite_html(file, text);

  printf("\n\t:CLOSING THE EDITOR:...\n");

  return 0;
}
