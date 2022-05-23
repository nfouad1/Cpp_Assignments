//(2) C Program to find length of a given string using pointer.

#include <iostream>

using namespace std;


int findLength(char str[]){
    
    int i ;
    for ( i = 0; str[i] != '\0'; ++i);
    cout <<i <<endl;

       return i;    
}

int main (){

    char text[100];
    int length;
    cout <<"Enter a anything: "<<endl;
    cin >> text;

    length = findLength(text);
    cout << "The length of the string is: " << endl;
    cout << length <<endl;

    return 0;
}