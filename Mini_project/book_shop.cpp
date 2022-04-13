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
    
public:
    //constructors
    Books();
    ~Books();
    vector<string> authornames;
    vector<string> booktitles;
    vector<string> publishernames;
    vector<float> bookprices{};
    vector<int> bookcopies;
    string name;
    string title;
    string publisher;
    float price;
    int copies;
    int NrOfbooks;

    //setter methods
    void setAuthorName(string name);
    void setTitleName(string title);
    void setPublisher(string publisher);
    void setBookPrice(float price);
    void setCopies(int copies);
   // void DisplayInfo();
    void getUserInfo();
    void buyBook();
    //getter methods
    bool searchAuthorname(string bookname);
    bool searchTitlename(string booktitle);
    bool searchInStock(int inStock);
    int getBookPrice();
    
};
Books::Books(){}
Books::~Books(){}

void Books::setAuthorName(string name){
    this->authornames.push_back(name);  
}
void Books::setTitleName(string title){
    this->booktitles.push_back(title);
}
void Books::setPublisher(string publisher){
    this->publishernames.push_back(publisher);
}
void Books::setBookPrice(float price){
    this->bookprices.push_back(price);
}
void Books::setCopies(int copies){
    this->bookcopies.push_back(copies);
}
int Books::getBookPrice(){
    cout << "Output of begin and end: ";
    for (auto i = bookprices.begin(); i != bookprices.end(); ++i)
        cout << *i << " ";
    
}
bool Books::searchAuthorname(string bookname){
   string _name;
   _name = bookname;
   if (find(authornames.begin(), authornames.end(), _name) != authornames.end()){
        cout <<"authorname is found!"<< endl;
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
    if(it != bookcopies.end()){
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
}
void Books::buyBook(){
    string bookName, bookTitle;
    int inStock;
    bool nameSts, titleSts, stockSts;
    
    //cout << "Enter Number Of Books to buy: "<<endl;
    cin.ignore();
    cout << "Enter Author Of Book: "<<endl;
    getline(cin, bookName);
    cout << "Enter Title Of Book: "<<endl;
    getline(cin, bookTitle);
    cout <<"Enter Number Of Books to buy: "<<endl;
    cin >> inStock;
    nameSts  = searchAuthorname(bookName);
    titleSts = searchTitlename(bookTitle);
    stockSts = searchInStock(inStock);
    cout<< "inStock passed on to search inStock: "<< inStock<<endl;
    cin.ignore();  
    
}
void Books::getUserInfo(){

   
 for ( int i = 0; i < NrOfbooks; i++)
    {
    cin.ignore();      // used to not get an ending loop caused by that cin leaves an end of line which is then read by getline().
    cout<<"Enter Author Name: ";
    getline(cin, name); Books::setAuthorName(name);
    cout<<"Enter Title Name: " ;
    getline(cin, title); Books::setTitleName(title);
    cout<<"Enter Publisher Name: ";
    getline(cin, publisher); Books::setPublisher(publisher);
    cout<<"Enter Price: " ;
    cin >> price; Books::setBookPrice(price);
    cout << "\nSize in stock vector before: " << bookcopies.size()<<endl;
    cout<<"Enter number of copies: " ;
    cin >> copies; Books::setCopies(copies);
    cout << "\nSize in stock vector after: " << bookcopies.size()<<endl;
}

}

int main() {


cout <<"********** MENU **********" <<endl;
    int choice;
    int exitNow = false;
    Books bookEntry;
    
do{
    cout << "1. Entry new book" <<endl;
    cout << "2. Buy a book" << endl;
    cout << "3. Search for a book" <<endl;
    cout << "4. Show details of a book" <<endl;
    cout << "5. Exit program \n" <<endl;
    cout <<"Enter your choice: "; cin >> choice;

    switch (choice)
    {
    case menu::New:
        cout <<"How many books to insert? \n" << endl;
        cout <<"Enter your choice: "; cin >> bookEntry.NrOfbooks;
        
            if (bookEntry.NrOfbooks > 0)
            {
                for (int i = 0; i < bookEntry.NrOfbooks; i++)
                {
                    bookEntry.getUserInfo();
                }

            }else if (exitNow == false){cout << "Invalid input! Please try again.\n\n";}
            
        break;
    case menu::Buy : bookEntry.buyBook();
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

