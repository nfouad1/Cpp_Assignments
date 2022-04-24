#include <iostream>
#include <book.h>

using namespace std;

// Function to print book detail.
void Books::printBookDetail(vector<Books>::iterator show){
    cout << "Book details: "<<endl;
    cout << " -Author name:  " << show->name <<endl;
    cout << " -Title  name:  " << show->title <<endl;
    cout << " -Publisher name: "<< show->publisher<<endl;
    cout << " -Book price: " << show->price <<"$"<<endl;
    cout << " -Number of copies: " << show->copies<<endl;
    cout << "\n";
    cout << "--------------------------- "<<endl;
}
