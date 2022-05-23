#include <fstream>
#include <iostream>

int main() {

std::fstream file;
file.open("example.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
file.write("Awesome", 7);
file << "Easy way!" << std::endl;
char a[30];
file.read(a,30);
file.close();
}