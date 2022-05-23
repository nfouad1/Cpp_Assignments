#include <stdio.h>
#include <iostream>

using namespace std;


void swap(int x, int *yPtr){

        int temp;
        temp = x;
        x = *yPtr;
        *yPtr = temp;
    }

int main(){
    int x = 5;
    int y = 2;

    swap(x,&y);
    cout <<x<<" "<<y<<endl;

    return 0;
}