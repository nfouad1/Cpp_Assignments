
#ifndef FILE_H
#define FILE_H

#include <vector>
#include <string>

using namespace std;

enum menu { New = 1, Buy = 2, Search = 3, Details = 4, Exit = 5 };

class Books
{
private:
    string name;
    string title;
    string publisher;
    float price;
    int copies;  
public:
    //setter methods
    void setAuthorName(string name);
    void setTitleName(string title);
    void setPublisher(string publisher);
    void setBookPrice(float price);
    void setCopies(int copies);
    // Funtions
    void addBook(int j);
    void buyBook();
    void searchBook();
   // void showDetails();
    void printBookDetail(vector<Books>::iterator show);
    void editBook();
    void displayMenu();
    //getter methods
    string getAuthorname();
    string getTitleName();
    
    void getBookCopies(vector<Books>::iterator bcopies); 
// creating a vector of Books objects and it iterator
    vector<Books> bookregister;
    vector<Books>::iterator it;
// default constructor to initialize the variables.
    Books(){
        name = "";
        title = "";
        publisher = "";
        price = 0;
        copies = 0;
}


};


#endif