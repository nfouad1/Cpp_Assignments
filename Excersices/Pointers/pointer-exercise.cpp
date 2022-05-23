#include <iostream>
using namespace std;
int main (){


    int x = 3;
    int y = 5;
    int *p = &x; // *p hold the address of x

    cout<< "x = " << x << endl;
    cout <<"y = " << y <<endl;
    cout << "*p = " << *p <<endl;

    *p += y; // *p = p* + y = 3+5
     p  = &y; // p have the address of y
    *p += 5; // *p = p* + 5 = 5 + 5

    cout<< "x = " << x << endl;
    cout <<"y = " << y <<endl;
    cout << "*p = " << *p <<endl;
}