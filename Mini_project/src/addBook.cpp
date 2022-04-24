#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <book.h>

using namespace std;

void Books::addBook(int j){
    int _j = j+1;
    cin.ignore();      // used to not get an ending loop caused by that cin leaves an end of line which is then read by getline().
    cout<<"Book nr "<<_j<<": "<<endl;
    cout<<"Enter Author Name: ";

    getline(cin, name); setAuthorName(name);
    cout<<"Enter Title Name: " ;
    getline(cin, title); setTitleName(title);
    cout<<"Enter Publisher Name: ";
    getline(cin, publisher); setPublisher(publisher);
    cout<<"Enter Price: " ;
    // A while loop is used to ask for price until correct type is entered.
    while(true){
    if(cin >> price){
      setBookPrice(price);
      break;
    }else {cout<< "Enter a valid number!\n"; cin.clear();cin.ignore(numeric_limits<std::streamsize>::max(), '\n');}
    }
    cout<<"Enter number of copies: " ;
    while (true){
      if(cin >> copies){
        cout<<"\n";setCopies(copies);
      break;
    }else{cout<< "Enter a valid number!\n"; cin.clear();cin.ignore(numeric_limits<std::streamsize>::max(), '\n');}
    }

}
// Getter interface.
string Books::getAuthorname(){return name;}
string Books::getTitleName(){return title;}
void Books::getBookCopies(vector<Books>::iterator bcopies){
    cout << "Avialable copies: "<< bcopies->copies <<endl;
}
// Setter interface.
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
