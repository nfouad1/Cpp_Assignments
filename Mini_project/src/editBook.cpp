#include <book.h>
#include <iostream>

using namespace std;

// Function to edit a book detail. Searching for the book using the author name and book title. 
// all book detail can be edited.
void Books::editBook(){
    string bookName, bookTitle, newName, newTitle, newPublisher;
    int newCopies;
    float newPrice;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle); cout <<"\n";
    // Iterate through the vector of books.
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
            if (bookName == (it->name) && bookTitle == (it->title))
            {
                cout <<"Book found successfully!\n"<< endl;
                cout <<"Edit:"<<endl;
                cout << "Enter Author name:  "<<endl;
                getline(cin, newName);it->name = newName;
                cout << "Enter title name: "<<endl;
                getline(cin, newTitle); it->title = newTitle;
                cout <<"Enter publisher name: "<<endl;
                getline(cin, newPublisher); it->publisher = newPublisher;
                cout <<"Enter book price: " <<endl;
                cin >> newPrice; it->price = newPrice;
                cout << "Enter number of copies: " <<endl;
                cin >> newCopies; it->copies = newCopies;
              //  cout<<"\n"<<endl;
                cin.ignore();
            }

    }
}