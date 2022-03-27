#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

/*
Write a program that removes the repeated number of an input sorted array and return a new array without
the repeated numbers. The function shall return error if the size of the input array is ZERO. The function takes
four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} arr2 = {1,2,3,4,5}*/

// global variables
int size_new = 0;
int* size_new_ptr = &size_new;

//Sort the array
void Sort(int arr_old[], int size){
    cout << "The sorted array: " <<endl;
    bool sorted = false; // default the array is unsorted
    int m = size; // keeps track of unsorted parts
    do
    {
        sorted = true;
        for (int j = 1; j < m ; j++)
        {
             if (arr_old[j-1] > arr_old[j]) {
                sorted = false;
                int temp = arr_old[j-1];
                arr_old[j-1] = arr_old[j];
                arr_old[j] = temp;
             }   
        } m--;
    } while (!sorted);
}
//Print out sorted array
void PrintOutOld(int arr_old[], int n){
    for (int i = 0; i<n; i++){
            std::cout << arr_old[i] << " ";
    }   std::cout << std::endl;
}

//Function to remove dublicates
int RemoveDuplicates(int arr_old[], int size_old, int arr_new[], int *size_new){
    //std::cout << *size_new << " ";
    int temp[size_old];
    int j = 0;
    int i;
    if (size_old == 0 || size_old == 1){
        return size_old;
    }
  
    for (i = 0; i < size_old - 1; i++)
        if (arr_old[i] != arr_old[i + 1])
            temp[j++] = arr_old[i];
            temp[j++] = arr_old[size_old - 1];
    
    for (i = 0; i < j; i++)
        arr_new[i] = temp[i];
    
    return j;
    
}

//Print out the new array without dublicates
void PrintOutNew(int arr_new[], int n){
    for (int i = 0; i<n; i++){
            std::cout << arr_new[i] << " ";
           // std::cout << std::endl;
        }
}

int main(){
    int n;
    int arr_old[] = {3,5,3,1,2,4,2,5,4,3};
    int size_old = sizeof(arr_old)/sizeof(arr_old[0]);
    cout << "size of the old array: "<< size_old << endl;
    int arr_new[size_old] = {};
    Sort(arr_old, size_old);
    PrintOutOld(arr_old, size_old);
   n = RemoveDuplicates (arr_old, size_old, arr_new, size_new_ptr);
    int size_new = sizeof(arr_new)/sizeof(arr_new[0]);
    cout << "size of the new array: "<< size_new << endl;

    PrintOutNew(arr_new, size_old);

}

