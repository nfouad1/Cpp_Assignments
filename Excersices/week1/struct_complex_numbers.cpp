#include <stdio.h>
#include <iostream>

#define  MAX_STUDENTS  10

struct complex_nr
{
    int imaginary;
    int real;

} ;

struct Student
{
    char name[30];
    float grade;
    int id;
}arr[10], *s_ptr;

void StudentInformations(Student *s_ptr, int size);
void PrintOut(Student *s_ptr, int size);

int main (){

   // complex number
    complex_nr s1;
    s1.imaginary = 5;
    s1.real = 2;
    complex_nr s2;
    s2.imaginary = 15;
    s2.real = 25;

    std::cout << "imaginary part: " << s1.imaginary << std::endl;
    std::cout << "real part: " << s1.real << std::endl;
    std::cout << "imaginary part: " << s2.imaginary << std::endl;
    std::cout << "real part: " << s2.real << std::endl;

    // student information
    // call the functions here....
    s_ptr = arr;
    Student students[MAX_STUDENTS];
    StudentInformations(students, MAX_STUDENTS);
    PrintOut(students, MAX_STUDENTS);
    return 0;

}
void StudentInformations(Student *s_ptr, int size){
    
    for (int i = 1; i < size; i++){
        arr[i];
        std::cout << "Enter your Name: " << std::endl;
        std::cin >> (s_ptr)->name;
        std::cout << "Enter your ID: " << std::endl;
        std::cin >> (s_ptr)->id;
        std::cout << "Enter your Grade: " << std::endl;
        std::cin >> (s_ptr)->grade;
        s_ptr++; 
    }

}
void PrintOut(Student *s_ptr, int size){

    for(int i= 1; i < size; i++){
        std::cout << "Information for student "<< i << std::endl;
        std::cout << "Name: "<< s_ptr->name << std::endl;
        std::cout << "Id: "<< s_ptr->id<< std::endl;
        std::cout << "Grade: "<< s_ptr->grade<< std::endl;
        s_ptr++; // next structure in the array
    }
}    

    