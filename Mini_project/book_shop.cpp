#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define v_size 50

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
    vector<string> authornames;
    vector<string> booktitles;
    vector<string> publishernames;
    vector<float> bookprices;
    vector<int> bookcopies;
    //setter methods
    void setAuthorName(string name);
    void setTitleName(string title);
    void setPublisher(string publisher);
    void setBookPrice(float price);
    void setCopies(int copies);
   // void DisplayInfo();
    void getUserInfo();
    void buyBook();
    bool searchBook(string &bookName);
    void showDetails();
    void printInfo();
    //getter methods
    string getAuthorname();
    string getTitleName();
    
    int getBookPrice(); 
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
int Books::getBookPrice(){
    cout << "Output of begin and end: ";
    for (auto i = bookprices.begin(); i != bookprices.end(); ++i)
        cout << *i << " ";
}
bool searchBook(string &bookName){
    Books Obj;
    string _bookName = bookName;
  //  string bookTitle = bookTitle;
  //  int bookCopies = bookCopies;
   /* 
    auto itr = find_if(Obj.bookregister.begin(), Obj.bookregister.end(), [&_bookName](Books& Obj) {
        cout <<"authorname is found!"<< endl;
        return Obj.getAuthorname()  == _bookName;
        });*/
}
/*
bool Books::searchAuthorname(string bookname){
   string _name;
   _name = bookname;
   if (find(authornames.begin(), authornames.end(), _name) != authornames.end()){
        return true;
   }
   else {
        cout<<"authorname is NOT found!"<<endl;
        return false;
    }
   
}
bool Books::searchTitlename(string booktitle){
    string _title;
    _title = title;
    if (find(booktitles.begin(), booktitles.end(), _title) != booktitles.end()){
        cout <<"Title is found!"<< endl;
        return true;
   }
   else {
        cout<<"Title is NOT found!"<<endl;
        return false;
    }

}
bool Books::searchInStock(int inStock){
    int _inStock;
    _inStock = inStock;
   // 
    std::vector<int>::iterator it =(find(bookcopies.begin(), bookcopies.end(), _inStock) );
    cout <<"the iterator: "<< (*it) <<endl;
    cout << "\nSize in stock vector after: " << bookcopies[0]<<endl;


    if(it == bookcopies.end()){
        cout <<"inStock request recieved from buy function1: "<< _inStock<<endl;
        cout <<"Available in stock!"<< endl;
        int index = std::distance(bookcopies.begin(), it);
        std::cout <<"Index of element in vector : "<<index<<std::endl;
        return true;
   }
   else {cout <<"inStock request recieved from buy function2: "<< _inStock<<endl;
        cout<<"NOT available in stock!"<<endl;
        return false;
    }
}*/
void Books::buyBook(){
    string bookName, bookTitle;
    int inStock;
    Books Obj;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    cout <<"Enter Number Of Books to buy: "<<endl;
    cin >> inStock;
    //Call the search function
    auto itr = find_if(Obj.bookregister.begin(), Obj.bookregister.end(), [&bookName](Books& Obj) {
        return Obj.getAuthorname()  == bookName;
        });
        if (itr != Obj.bookregister.end())
        {
            auto index = distance(Obj.bookregister.begin(), itr);
            cout <<"authorname is found!" << endl;

        }
        
    cout<< "inStock passed on to search inStock: "<< inStock<<endl;

    
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
}
void Books::printInfo(){
    cout << "Author name:  " << name <<endl;
    cout << "Title  name:  " << title <<endl;
    cout << "Publisher name: "<< publisher<<endl;
    cout << "Book price: " << price <<endl;
    cout << "Number of copies: " << copies<<endl;
}

int main() {
cout <<"\n\n********** MENU **********" <<endl;
    int choice;
    int exitNow = false;
    Books bookEntry[0];
    int NrOfbooks = 0;
    int j=0;
do{
    cout << "1. Entry new book" <<endl;
    cout << "2. Buy a book" << endl;
    cout << "3. Search for a book" <<endl;
    cout << "4. Show details of a book" <<endl;
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
                            bookEntry[i].bookregister.push_back(bookEntry[i]);
                            cout << "size of the book register vector: "<< bookEntry[i].bookregister.size()<<endl;
                        }

                    }else if (exitNow == false){cout << "Invalid input! Please try again.\n\n";}
                }
        break;
    case menu::Buy : bookEntry[j].buyBook();
        break;
    case menu::Search: cout<<"Search function"<<endl;
        break;
    case menu::Details: 
                        cout << "\nSize of the vector: " << bookEntry[j].bookregister.size()<<endl;
	              //      for ( it = bookEntry.bookregister.begin(); it != bookEntry.bookregister.end(); ++it ) {
	                     // For each bookEntry, print out their info
	               //     it->printInfo();

	                  //   }
                    
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

