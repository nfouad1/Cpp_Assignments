#include <iostream>
#include <string>
#include <array>
using namespace std;


int main(int argc, char *argv[]) {
int stringSize = 7;
int count = 0;
string* s = new string [stringSize];
cout << "\nEnter " << stringSize << " one-word string values:\n";
while (count < stringSize) {
    string tmpVal;
    cin >> tmpVal;
    s[count] = tmpVal;
    count ++;
    }
    for (int i = 0; i < stringSize; i++)
    {
        cout<<"content in the array: "<< s[i] <<endl;
    }
    
    delete[] s;
}