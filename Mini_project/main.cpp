
#include <iostream>
#include <limits>
#include <book.h>

using namespace std;

int main() {
    int choice;
    int exitNow = false;
    Books newBook;
    int NrOfbooks = 0;
    int j=0;
    
do{
    //while loop is used to check for a valid user input. Only input that is accepted is integers. If non integer is entered 
    //cin will be in a an error state and a message is displayed for the user. cin.clear() is used to clear the error and give the user retry.
    newBook.displayMenu();
    cout <<"Enter your choice: "; 
    while(true){
    if(cin >> choice){
        cout <<" \n";
        break;
    }
    else {cout<< "Enter a valid number!\n"; cin.clear();cin.ignore(numeric_limits<std::streamsize>::max(), '\n');}
    }
    switch (choice)
    {
    case menu::New: {
                    cout <<"How many books to insert? \n" << endl;
                    cout <<"Enter your choice: "; 
                    while (true){
                    if(cin >> NrOfbooks){
                        cout<<"\n";
                        break;
                    }
                    else {cout<< "Enter a valid number!\n"; cin.clear();cin.ignore(numeric_limits<std::streamsize>::max(), '\n');}
                    }
                    Books bookEntry[NrOfbooks];
                    if (NrOfbooks > 0)
                    {
                        for (int i = 0; i < NrOfbooks; i++)
                        {
                            bookEntry[i].addBook(i);
                            newBook.bookregister.push_back(bookEntry[i]);
                        }

                    }else if (exitNow == false){cout << "Invalid input! Please try again.\n\n";}
                    if (newBook.bookregister.size() == NrOfbooks)
                    {
                        cout <<"Book titles inserted into database: "<< newBook.bookregister.size()<<endl;
                        cout <<"--------------------------------- \n";
                    }
                    
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
