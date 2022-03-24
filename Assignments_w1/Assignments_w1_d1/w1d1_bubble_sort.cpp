#include <iostream>

// Function that uses bubble sort algorithm to sort an integer.
//Create a Swap function taking pointer as arguments
// Then print out the new sorted array.


void Swap(int *X, int *Y)
{
    int temp = *X;
    *X = *Y;
    *Y = temp;
}
void BubbleSort(int arr[], int n)
{
    int i, j, MinValue;
    
    for (i = 0; i < n-1; i++) { 
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1])
                Swap(&arr[j], &arr[j+1]);
               
        }
    } 
}     

 void PrintOut(int arr[], int n){
        for (int i = 0; i<n; i++){
            std::cout << arr[i] << " ";
            std::cout << std::endl;
        }   
 }       

int main()
{
    int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    std::cout<<"Array sorted: " << std::endl;
    PrintOut(arr, n);  

    return 0;
}
