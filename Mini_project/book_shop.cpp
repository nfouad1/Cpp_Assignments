#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


enum menu {
    New = 1, Buy = 2, Search = 3, Details = 4, Exit = 5

};
class Books
{
private:
    string name;
    string title;
    string publisher;
    float price;
    int copies;  
public:
    //constructors
    Books();
    ~Books();

    //setter methods
    void setAuthorName(string name);
    void setTitleName(string title);
    void setPublisher(string publisher);
    void setBookPrice(float price);
    void setCopies(int copies);
   // void DisplayInfo();
    void getUserInfo();
    void buyBook();
    void searchBook();
    void showDetails();
    void printBookDetail(vector<Books>::iterator show);
    void editBook();
    //getter methods
    string getAuthorname();
    string getTitleName();
    
    void getBookCopies(vector<Books>::iterator bcopies); 
// create a vector of Books objects and it iterator
    vector<Books> bookregister;
    vector<Books>::iterator it;


};
Books::Books(){
    //    bookregister = "";
        name = "";
        title = "";
        publisher = "";
        price = 0;
        copies = 0;
}

Books::~Books(){}
string Books::getAuthorname(){return name;}
string Books::getTitleName(){return title;}
void Books::setAuthorName(string name){
   this->name = name; 
}
void Books::setTitleName(string title){
  this->title = title;
}
void Books::setPublisher(string publisher){
  this->publisher = publisher;
}
void Books::setBookPrice(float price){
   this->price = price ;
}
void Books::setCopies(int copies){
  this->copies = copies;
}
void Books::getBookCopies(vector<Books>::iterator bcopies){
    cout << "Avialable copies: ";
    cout <<"Quantity = "<< bcopies->copies <<endl;
}
void Books::printBookDetail(vector<Books>::iterator show){
    
    cout << "Author name:  " << show->name <<endl;
    cout << "Title  name:  " << show->title <<endl;
    cout << "Publisher name: "<< show->publisher<<endl;
    cout << "Book price: " << show->price <<"$"<<endl;
    cout << "Number of copies: " << show->copies<<endl;
}
void Books::editBook(){
    string bookName, bookTitle, newName, newTitle, newPublisher, newPrice, newCopies;
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
                getline(cin, newName);
            }

    }

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
        if (bookName == (it->name) && bookTitle == (it->title) && quantity <= (it->copies))
        {
            Obj.getBookCopies(it);
            cout <<"Books bought successfull!"<<endl;
            cout << "Amount: $." << quantity*(it->price)<<endl;
            //details of available in stock. edit the object to deduct copies 
            cout<<"Stock details: "<< endl;
            inStock = (it->copies)-quantity;
            Obj.setCopies(inStock);
            cout << "Quantity left: " << inStock <<endl;
            cout << "\n"<<endl;

        }
        else if (quantity > (it->copies))
        {
            cout<<"Required copies not available"<<endl;
            cout << "\n"<<endl;

        }
    }
}
void Books::getUserInfo(){
    
    cin.ignore();      // used to not get an ending loop caused by that cin leaves an end of line which is then read by getline().
    cout<<"Enter Author Name: ";

    getline(cin, name); setAuthorName(name);
    cout<<"Enter Title Name: " ;
    getline(cin, title); setTitleName(title);
    cout<<"Enter Publisher Name: ";
    getline(cin, publisher); setPublisher(publisher);
    cout<<"Enter Price: " ;
    cin >> price; setBookPrice(price);
    cout<<"Enter number of copies: " ;
    cin >> copies; setCopies(copies);
    cin.ignore();
}

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
                            cout << "size of the book register vector: "<< newBook.bookregister.size()<<endl;
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

