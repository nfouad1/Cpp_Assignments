/*
Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.
Hint: result should be stored in ascending order in your container.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include <map>
 
using namespace std;

int main(){

    int size = 10000;
    int random_nr_arr[size];
    map<int, int> random_nr_new;
    map<int, int>::iterator itr_d;
    // current time is seed for the random generator
    srand(time(0));
    // generate random numbers and store them in an array
    for(int i = 0; i < size; i++) {
       random_nr_arr[i] = rand() %33 +0 ;
    }
    // put the array in a map
    for (int i = 0; i < size; i++){
        random_nr_new[random_nr_arr[i]]++;
    }
    // check for dublicates in the map using the iterator from begin till end and print out the key and value
    cout <<endl;
    cout << "Numbers that are dublicated: "<<endl;
    for (itr_d = random_nr_new.begin(); itr_d != random_nr_new.end(); itr_d++) {
      if (itr_d->second > 1) {
         cout << itr_d->first << " ";
 
      }
   }
       cout <<endl;

    // the map random_nr_new is: 
    cout << "Nr of dublicates for each number: "<<endl;
    for (itr_d = random_nr_new.begin(); itr_d != random_nr_new.end(); ++itr_d) {
        cout << '\t' << itr_d->first << '\t' << itr_d->second
             << '\n';
    }
    cout << endl;

    return 0;
}


