#include <book.h>
#include <iostream>

using namespace std;

// FUnction to rearch for a book in the vector of objects books.
void Books::searchBook(){
    Books Obj;

    string bookName, bookTitle;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    cout << "\n"<<endl;
    // iterate through the vector from begin till end, and search for name of author and book title.
    // if found printing the detail of the book.
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
            if(bookName == (it->name) && bookTitle == (it->title)){
                cout <<"Book found successfully! \n"<<endl;
                Obj.printBookDetail(it);
            }
    }
 
}