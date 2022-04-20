//#ifndef BOOK_H
//#define BOOK_H
#pragma once // dont include this header file multiple times.

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

//#endif 