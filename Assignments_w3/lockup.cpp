/*
We want to generate 1024 random integers, then given a new random number; find two integers which are the
closest to the given number (smaller, and bigger) with less than twelve lookups.
Hint: Create a sorted container and populate it, then pick a
random integer and look for the boundaries – implement
your own logarithmic search if you are in the mood for it
*/

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int size = 1024;
    vector<int> numbers;
    set<int> setOfNumbers;
    set<int>::iterator itr;
    set<int>::iterator it;
    srand(time(0));
    // generate random numbers and store them in a vector
    for(int i = 0; i < size; i++) {
       int nr = rand() %1024 +0 ;
       numbers.push_back(nr);
     //   cout <<numbers[nr] << endl;
    }
    // Insert the random values into the set from the vector numbers.
    setOfNumbers.insert(numbers.begin(), numbers.end());
        std::cout<<"Set: "<<std::endl;
        for(int set_elem: setOfNumbers)
            cout<<
            set_elem<<std::endl;

    cout <<endl;
    // Generate a new number from the given array
    // get the size of the set container and use it as the range for the new random value.
    //Since the set container will not include dublicates it will be less than 1024 elements. Then loop through the set.
    int newValue, setSize;
    setSize = setOfNumbers.size();
    newValue = rand() % setSize;
    itr  = setOfNumbers.begin();
    std::advance(itr,newValue); // increments the iterator by a random chosen elements (newValue).
    int newRandomValue = *itr;
    cout <<"New random value: "<< newRandomValue <<endl;
    // find the lower and upper bound for the new random nr (*itr)
  //  it=setOfNumbers.lower_bound(*itr);
  auto i = setOfNumbers.lower_bound(newRandomValue);
    cout <<"lower bound: "<< *i <<endl;
    i = setOfNumbers.upper_bound(newRandomValue);
    cout <<"upper bound: "<< *i <<endl;

    return 0;
}


