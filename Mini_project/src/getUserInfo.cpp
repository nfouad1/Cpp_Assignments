#include <iostream>
#include <vector>
#include <string>
#include <book.h>

using namespace std;

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
    cout<<"\n";
   // cin.ignore();
}
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
    cout << "Avialable copies: "<< bcopies->copies <<endl;
}