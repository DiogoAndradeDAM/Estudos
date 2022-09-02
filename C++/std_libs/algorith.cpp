#include <iostream>
#include <algorithm>
#include <vector>


int main(void){
    int arr[5] {1,2,3,4,5};

    auto t = std::find(arr, arr+5, 7);
    if(t!=arr+5){
        std::cout << *t;
    }else{
        std::cout << *t;
    }
}