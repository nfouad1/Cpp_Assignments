#include <iostream>
//#include <vector>
//#include <string>
#include <book.h>

using namespace std;

Books::Books(){
    //    bookregister = "";
        name = "";
        title = "";
        publisher = "";
        price = 0;
        copies = 0;
}

void Books::searchBook(){
    Books Obj;

    string bookName, bookTitle;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    cout << "\n"<<endl;
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
            if(bookName == (it->name) && bookTitle == (it->title)){
                cout <<"Book found successfully! \n"<<endl;
                cout << "Book details: "<< endl;
                Obj.printBookDetail(it);
                cout << "\n\n"<<endl;
            }
    }
 
}
void Books::buyBook(){

    string bookName, bookTitle;
    int quantity,inStock;
    Books Obj;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    cout <<"Enter Number Of Books to buy: "<<endl;
    cin >> quantity;
    cout << "\n"<<endl;
    //Call the search function
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
        if (quantity > (it->copies))
        {
            cout<<"Required copies not available !!"<<endl;
            cout << "\n"<<endl;

        }
        else if(bookName == (it->name) && bookTitle == (it->title) && quantity <= (it->copies))
        {
            Obj.getBookCopies(it);
            cout <<"Books bought successfull!"<<endl;
            cout << "Amount: $." << quantity*(it->price)<<endl;
            //details of available in stock. edit the object to deduct copies 
            cout<<"Stock details: "<< endl;
            inStock = (it->copies)-quantity;
            // update the vector with remaining copies
            it->copies = inStock; 
            cout << "Quantity left: " << inStock <<endl;
            cout << "\n"<<endl;

        }
        
    }
}
void Books::editBook(){
    string bookName, bookTitle, newName, newTitle, newPublisher;
    int newCopies;
    float newPrice;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    // call the search function
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
            if (bookName == (it->name) && bookTitle == (it->title))
            {
                cout <<"Book found successfully!"<< endl;
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
                cin.ignore();
            }

    }

}
void Books::printBookDetail(vector<Books>::iterator show){
    
    cout << "Author name:  " << show->name <<endl;
    cout << "Title  name:  " << show->title <<endl;
    cout << "Publisher name: "<< show->publisher<<endl;
    cout << "Book price: " << show->price <<"$"<<endl;
    cout << "Number of copies: " << show->copies<<endl;
}
Books::~Books(){

}
