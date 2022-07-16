#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n = time(NULL);
	printf("%d\n", 1+(n%2));
	return 0;
}
