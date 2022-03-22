#include <iostream>

// Functon that uses the selection sort algorithm to sort an integer array.
// Define the array and the size of it.
// Run the selection sort algorithm which will loop through the size of the array and compare with each element 
// to determine smallest value and the smallest value after that and so on...
// Then print out the new sorted array.

int Arr[] = {3,5,6,1,2,7,4};
int MAX = sizeof(Arr)/sizeof(Arr[0]); 

void SelectionSort() {
   int MinValue,i,j;
	
   for(i = 0; i < MAX-1; i++) { 

      MinValue = i;

      for(j = i+1;j < MAX;j++) {
         if(Arr[j] < Arr[MinValue]) {
            MinValue = j;
         }
      }

      if(MinValue != i) {

         // swap the numbers 
         int temp = Arr[MinValue];
         Arr[MinValue] = Arr[i];
         Arr[i] = temp;
      }          

   }
}  

void PrintOut (int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        std::cout << arr[i] << " "; 
        std::cout << std::endl; 
} 

int main() {
  
   SelectionSort();
   std::cout << "New sorted Array: "<< std::endl;
   PrintOut(Arr, MAX);
}