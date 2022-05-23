#include<iostream>

using namespace std;


struct MyInfo
{
    float grade;
    char *name[20];
} *ptr;


int result;
int equation(int num1, int num2){
    
    std::cout << "Write a number: " <<std::endl; 
    std::cin >> num1;
    std::cout << "Write a number again: " <<std::endl; 
    std::cin >> num2;
    result = (num1 + num2)*3 - 10;

    return result;  
}
void MyInfo(MyInfo *ptr, float grade){

      std::cout << "Enter your Name: " << std::endl;
      std::cin >> (ptr)->name;
      std::cout << "Enter your grade: " << std::endl;
      std::cin >> (ptr)->grade;
//    MyInfo name_1;
 //   name_1.name = "Noureldin";
 //   name_1.grade = 99;
}

void printout(int name, char grade){

    cout << "Your name is : " << ptr->name << endl;
    cout << "Your grade is ; "<< ptr->grade << endl;
}
int main(){
    int num1 = 0;
    int num2 = 0;
    equation(num1, num2);    
    std::cout << "The calculated value is: " << result << std::endl;
    MyInfo(MyInfo ptr, grade);
    printout(&ame, grade);
    return 0;

}



