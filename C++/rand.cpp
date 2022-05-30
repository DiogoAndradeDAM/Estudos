#include <iostream>
#include <stdlib.h> //rand() e srand()
#include <time.h>

using namespace std;

int main()
{
    int num;
    srand(time(NULL));
    num = rand() % 10 + 1;
    cout << num << endl;

    return 0;
}