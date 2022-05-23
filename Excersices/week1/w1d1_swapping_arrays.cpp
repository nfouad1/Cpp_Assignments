#include <iostream>

// Function for swapping two arrays A and B


int Swap(int a_size, int *a, int b_size, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void PrintOut(int A[], int a_size, int B[], int b_size){
    std::cout << "Array A: " << std::endl;
    for (int i = 0; i < a_size; i++){
        std::cout << A[i] ;
    }
    std::cout <<""<<std::endl;
    std::cout << "Array B: " << std::endl;
    for (int i = 0; i < b_size; i++){
        std::cout << B[i] ;
    }
}
int main (){
    int A[6] = {5,4,3,2,1,0};
    int B[5] = {11,22,33,44,55};
    int a_size = sizeof(A)/sizeof(A[0]); 
    int b_size = sizeof(B)/sizeof(B[0]); 
    int *a = A;
    int *b = B;
    for (int i = 0; i < b_size; i++)
    {
            std::cout << b[i];

    }
    
    std::cout<<""<<std::endl;
    std::cout << "Size of array A: " << a_size <<std::endl;
    std::cout << "Size of array B: " << b_size <<std::endl;

    int Swap(int a_size, int *a, int b_size, int *b);

    PrintOut(A, a_size, B, b_size);
    
    

return 0;
}
