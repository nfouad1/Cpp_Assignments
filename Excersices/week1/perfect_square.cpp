#include <iostream>

// Function that reads a positiv integer and checks if it is a perfect square.
// Read an integer from user input
// compare it with a perfect square

int main(){

    int input;
    std::cout << "Write an integer value: " <<std::endl;
    std::cin >> input;


    for (int i = 1; i <= input; i++){
        if ((input % i == 0) && (input / i == i))
            std::cout << "Perfect square is: "<< input <<std::endl;
        }
    return 0;
}