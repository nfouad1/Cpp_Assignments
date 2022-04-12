/*A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as
author, title, price, publisher and number of copies. Whenever a customer wants a book, the sales person
inputs the title and author and the system searches the list and displays whether it is available or not. If it is not,
an appropriate message is displayed. During the buying process the system displays the book details and
requests for the number of copies required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message “Required copies not in stock” is displayed.
Design a system using a class called books with suitable member functions and Constructors. Use new operator
in constructors to allocate memory space required. Implement C++ program for the system.*/
// create functions for: enrty new book, buy a book, search for a book, get details of book .....

#include <iostream>
#include <string>

#define arr_size 50

using namespace std;

enum menu {
    New = 1, Buy = 2, Search = 3, Details = 4, Exit = 5

};
class Books{
    private: 
        string author;
        string title;
        string publisher;
        float *price;
        int *copies;
        int *in_stock;  
            
    public:
        int NrOfRecords; 
        Books(){
        //dynamic memory allocation will return a pointer to the first element of the array in the memory (heap).
        string *author = new string[arr_size];
        string *title = new string[arr_size];
        string *publisher = new string[arr_size];
        price = new float[arr_size];
        copies = new int[arr_size];
        in_stock = new int[arr_size];
        NrOfRecords = 0;
        cout << "Books constructor!!"<< endl;
     };
   /*  //destrtuctor which include freeing up the heap memory allocated.
    ~Books(){
        delete[] author;
        delete[] title;

       cout << "Books deconstructor!!"<< endl;
    };*/
    //functions to set data from user input
    void  setAuthorName(string author);
    void  setTitle(string title);
    void  setPublisher(string publisher);
    void  setPrice(float *price);
    void  setCopies(int *copies);
    //functions to read data 
    string getAuthorName();
    string getTitle();
    string getPublisher();
    void getInputDisplay();

    float getPrice();
    int getCopies();
    // fucntions to buy a book, search for a book and get the details of a book.
    void buyBook();
    void searchBook();
    void bookDetail();
   

};
void Books::setAuthorName(string author){
    this->author = author;
    cout << "From setAuthorName = "<< this->author<<endl;
    
}
void Books::setTitle(string title){
    cout << "From setTitle = "<< this->title<<endl;
    this->title = title;
    
}
void Books::setPublisher(string publisher){
    cout << "From setPublisher = "<< this->publisher<<endl;
    this->publisher = publisher;
    
}
void Books::setPrice(float *price){
    this->price  = price;
    cout << "From setPrice = "<< *(this->price)<<endl;
}

void Books::setCopies(int *copies){
    this->copies  = copies;
    cout << "From setCopies = "<< *(this->copies)<<endl;
}
void Books::getInputDisplay(){
       
       Books new_book;
            cin.ignore(); // used to not get an ending loop caused by that cin leaves an end of line which is then read by getline().
            cout << "Enter Author Name: " << endl;
            getline(cin, author); 
            new_book.setAuthorName(author);  
            cout << "Enter Title Name: " << endl;
            getline(cin, title);new_book.setTitle(title);
            cout << "Enter Publisher Name: " << endl;
            getline(cin, publisher); new_book.setPublisher(publisher);
            cout << "Enter Price: " << endl;
            cin >> *price; new_book.setPrice(price);
            cout << "Price is = "<< *(this->price) <<endl;
            cout << "Enter number of copies: " << endl;    
            cin >> *copies; new_book.setCopies(copies);
            cout << endl;
            
}
string Books::getAuthorName(){
    cout << "from getAuthorName: "<< author<<endl;
    return this->author ;
}
string Books::getTitle(){
    return this->title;
}
string Books::getPublisher(){
    return this->publisher;
}
int Books::getCopies(){
    return *(this->copies);
}
 float Books::getPrice(){
    cout << "from getPrice: "<< *price <<endl;
    return *(this->price);
}
// function to buy a book. Check first for availble copies, then print sucessfull or not available.
// if sucessfull print also the price of the book.
void Books::buyBook(){
   
    cout <<"Get price =  "<< getPrice()<<endl;
    cout <<"Get copies =  "<< getCopies()<<endl;

    cout << "Enter Title Of Book: "<<endl;
    cout << "Enter Author Of Book: "<<endl;
    cout << "Enter Number Of Books to buy: "<<endl;
    cout << endl;
}
// search function to search for books. If book is found print sucessfull and then print the details of the book.
void Books::searchBook(){
   
    cout << "Enter Title Of Book: "<<endl;
    cout << "Enter Author Of Book: "<<endl;
    cout << endl;
}
// Show detail of the book. after asking for author name and title.
// Then check if the author name and title exist, if it does print the rest of the info.
void Books::bookDetail(){
   
    cout << "Enter Author Of Book: "<< getAuthorName();
    cout << endl;
}

int main(){
   // EntryNewBook books();
    Books book1[arr_size];
    Books book2;

    int NrOfbooks;
    
    cout <<"********** MENU **********" <<endl;
    int choice;
    int exitNow = false;
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
        cout <<"Enter your choice: "; cin >> NrOfbooks;
        
            if (NrOfbooks > 0)
            {
                for ( int i = 0; i < NrOfbooks; i++)
                {
                    book1[i].getInputDisplay();
                    cout << "Book[i]: " << i<<endl;
                }
                
                
            }else if (exitNow == false){cout << "Invalid input! Please try again.\n\n";}
            
        break;
    case menu::Buy : book2.buyBook();
        break;
    case menu::Search : book2.searchBook();
        break;
    case menu::Details : book2.bookDetail();
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