#include <iostream>

// Function return an array containing  the values between two 8-bits unsigned integers.
// 

//void Swap(int *X, int *Y)
//{
 //   int temp = *X;
 //   *X = *Y;
 //   *Y = temp;
//}

 void Sort(int arrA[], int n){

    int i, j;
    for (i = 0; i < n; i++) { 
        int temp = arrA[i];
        int j = i-1;

        while (j >= 0 && arrA[j] < temp)
        {
            arrA[j+1] = arrA[j];
            j = j-1;
        }
        arrA[j+1] = temp;
    }
 } 

//check which elements are in a descending order




void PrintOut(int arrA[], int n)
{
    for (int i=0; i<n; i++)
        std::cout << arrA[i] << " ";
}

int main()
{
    int arrA[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arrA)/sizeof(arrA[0]);
    Sort(arrA, n);
    PrintOut(arrA, n);  

    return 0;
}