#include <book.h>
#include <iostream>
#include <limits>

using namespace std;
// Function to buy a book. Where the author name and book title is used to search for the book and then if 
// requested copies is available in stock.
void Books::buyBook(){

    string bookName, bookTitle;
    int quantity,inStock;
    Books Obj;

    std::cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
  //  cout <<"Enter Number Of Books to buy: "<<endl;
  //  cin >> quantity;
    cout << "\n"<<endl;
    for (it = bookregister.begin(); it != bookregister.end(); ++it)
    {
        if(bookName == (it->name) && bookTitle == (it->title)/* && quantity <= (it->copies)*/)
        {
          //  Obj.getBookCopies(it);
            Obj.printBookDetail(it);
            cout <<"Enter Number Of Books to buy: ";
            
            while (true){
            if (cin >> quantity){
                cout << "--------------------------- "<<endl;
                break;
            }
                else{cout<< "Enter a valid number!\n"; cin.clear();cin.ignore(numeric_limits<std::streamsize>::max(), '\n');}
            }
            if (quantity > (it->copies))
            {
            cout<<"Required copies not in stock !"<<endl;
            cout << "\n"<<endl;

            }
            else {
            cout <<"Books bought successfull!"<<endl;
            cout << "Amount: $." << quantity*(it->price)<<endl;
            //details of available in stock. edit the object to deduct copies 
            inStock = (it->copies)-quantity;
            // update the vector with remaining copies
            it->copies = inStock; 
            cout << "Copies left for author "<< it->name<<" : "<< inStock <<endl;
            cout << "------------------------"<<endl;
            }

        }
        
    }
}