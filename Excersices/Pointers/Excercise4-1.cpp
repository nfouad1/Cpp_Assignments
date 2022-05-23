/*
Program to compute sum of the array elements using pointers.
*/
#include <iostream>

#define arr_size 5
using namespace std;

//instead of passing the whole array arr[], pass ony the pointer to it, which point to the first element in arr[].
int sum(int size, int *arr){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];

    }
    return sum;
}

int main (){

    int arr[arr_size];
    int *array = arr;
    int totalsum = 0;
    cout << "Enter  array elements: \n";
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    totalsum = sum(arr_size, arr);
    cout << "The sum of the array is: " << totalsum << endl;
    
    return 0;
}