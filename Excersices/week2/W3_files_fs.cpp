#include <fstream>
#include <iostream>

int main() {
    //create 2 objects one as input and second as an output
    std::fstream input, output;
    input.open("input.txt",std::fstream::in);
    // Pre-requiste to read/write from/to the file
    if (!input.is_open()) {
        std::cout << "Input file is not open." << std::endl;
        return 0;
    }     
    //First: we need to know the file size to read all the file at once.
    std::string line;
    std::getline(input,line);
    // get the current read position after reading the line
    std::streampos index = input.tellg();
    index-=2;
    // move the current read position till the end
    input.seekg(0,std::ios::end);
    // the difference is the file remaining size 
    std::streampos size = input.tellg() - index;
    // get the current read position: Now at the end of the file then print the old one then the file size
    std::cout << input.tellg()<< " "<< index<< " "<<size << std::endl;
    // move the current read position back to the beginning of the file
    input.seekg(index);
    // create a char array of the size of the file
    char *restOfTheFile = new char[size];
    input.read(restOfTheFile,size);
    output.open("output.txt",std::fstream::out | std::fstream::trunc);
    //Write to file only the first line
    //output << line;
    //Write to output file all what we get from the input file 
    output.write(restOfTheFile,size);
    output.close();
    input.close();
    return 0;
}