#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

struct Books{
    
     static  string author;
        string title{};
        string publisher{};
        int price{};
        int copies{};
        int in_stock{};

        Books() = default;
        Books(string const& author){
        }
        
        int NrOfRecords;
        void getInput();
      //  string getAuthorName(string const &key){return key};


};


int main()
{



    std::multimap<int, string> Book_info;
    string firstname, lastname, title;
    int x[10];
    int i;
    std::cin >> firstname;
    std::cin >> title;
    Book_info.insert (std::make_pair (x[i], firstname));
    Book_info.insert (std::make_pair (title, title));


    //print map content
    for (const auto & elem:Book_info)
    {
      std::cout << elem.first << " " << elem.second << "\n";
    }

    return 0;
}