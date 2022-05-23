#include <iostream>


// Function to calculate simple calculation using switch case.
// The fucntion takes the values from the user.
// Do the operations - , + , * and /  and print the result.

int main(){

    int input1[2];
    int sum;
    int subtract;
    float devide;
    int multiply;
    char input2;
    char ch1 = '+';
    char ch2 = '-';
    char ch3 = '*';
    char ch4 = '/';
    int x;
    for (int i =0; i<2; i++){
        std::cout << "Write an integer value: " <<std::endl;
        std::cin >> input1[i];
    }
        std::cout << "which operation: " <<std::endl;
        std::cin >> input2;
    
    
    std::cout << "Operation type: " << input2 <<std::endl;
    if(input2 == ch1)
         x = 1;
        else if (input2 == ch2)
         x = 2;
        else if (input2 == ch3)
         x = 3;
        else
        x = 4;

    std::cout << "X: " << x <<std::endl;
    //sum, subtract, multiply or devide
    switch (x)
    {
    case 1 :
            sum  =  input1[0] + input1[1];
            std::cout << "The sum value is: " << sum <<std::endl;
        break;
    case 2 :
            subtract  =  input1[0] - input1[1];
            std::cout << "The subtraction value is: " << subtract <<std::endl;
        break;
    case 3 :
             multiply = input1[0] * input1[1];
            std::cout << "The multiplied value is: " << multiply <<std::endl;
        break;
    case 4 : 
             devide = (float) (input1[0] / input1[1]);
            std::cout << "The devided value is: " << (float) devide <<std::endl;
            break;
    default:
        break;
    }


    return 0;
}