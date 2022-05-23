#include <iostream>
#include <cstring>

// Create Union type called family_name it shall have two members first_name and last_name. The two members
// are array of characters with same size 30. Try to write string in the first member first_name then print the second
// member last_name plus print the size of the union.

union FamilyName
{
    char first_name[30];
    char last_name[30];
} ;


int main (){

    
    FamilyName family_member;
    int size = sizeof(family_member);
    std::cout << "Size of the union is: "<< size << std::endl;

    strcpy(family_member.first_name, "Noureldin Fouad") ;
    std::cout << "Namn: " << family_member.last_name <<std::endl;


}


