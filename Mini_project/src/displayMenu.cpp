#include <iostream>
#include "book.h"

void Books::displayMenu()
 {
    std::cout <<"\n\n********** MENU **********" <<std::endl;
    std::cout << "1. Entry new book" <<std::endl;
    std::cout << "2. Buy book" << std::endl;
    std::cout << "3. Search for book" <<std::endl;
    std::cout << "4. Edit details of book" <<std::endl;
    std::cout << "5. Exit program \n" <<std::endl;
}