#include <iostream>
#include <book.h>

using namespace std;


int main() {
cout <<"\n\n********** MENU **********" <<endl;
    int choice;
    int exitNow = false;
    Books newBook;
    int NrOfbooks = 0;
    int j=0;
do{
    cout << "1. Entry new book" <<endl;
    cout << "2. Buy book" << endl;
    cout << "3. Search for book" <<endl;
    cout << "4. Edit details of book" <<endl;
    cout << "5. Exit program \n" <<endl;
    cout <<"Enter your choice: "; cin >> choice;
    switch (choice)
    {
    case menu::New: {
                    cout <<"How many books to insert? \n" << endl;
                    cout <<"Enter your choice: "; cin >> NrOfbooks;
                    Books bookEntry[NrOfbooks];
                    if (NrOfbooks > 0)
                    {
                        for (int i = 0; i < NrOfbooks; i++)
                        {
                            bookEntry[i].getUserInfo();
                            newBook.bookregister.push_back(bookEntry[i]);
                        }

                    }else if (exitNow == false){cout << "Invalid input! Please try again.\n\n";}
                }
        break;
    case menu::Buy : newBook.buyBook();
        break;
    case menu::Search: newBook.searchBook();
        break;
    case menu::Details: newBook.editBook();   
        break;             
    case menu::Exit :
        cout <<"Bye Bye!! \n" << endl;
        exitNow = true;
    default:
        if (exitNow == false)
        {
            cout << "Invalid input! Please try again.\n\n";
        }      
        break;
    }
}while (!exitNow) ;

    return 0;    
}

