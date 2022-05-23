#include <iostream>

// function that takes three integers and prints out smallest number.
// Define an array to store three integers. 
// The size of the array is already known which is 3.
// Start with a temp value to store the lowest value at init.
// Then a for loop to compare the values in the array with the smallest value temp.
int LowestValue (int arr[], int x){
  int temp = arr[0];
  x = 3;
  for(int i = 0; i < x; i++){
      if (temp > arr[i])
        temp = arr[i];
  }
  return temp;
}
int main()
{
    int x = 3;
    int Arr[] = {7,1,6};
    int smallest = LowestValue(Arr, x);
    std::cout<<"Lowest integer value: " << smallest << std::endl;
    return 0;
}