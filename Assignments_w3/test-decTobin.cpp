 /*
Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,...)
• Distance / 150 (So 1=150mm, 2=300mm,...)

                    Speed   Front  Rear Right Left
unit16_t            1 0 1 1 1 0 1 0 0 1 0 1 1 0 1 1
*/
// read in decimal values for speed and distance from user, use OR operator to insert both of them into an uint16 register.

#include <iostream>
#include <string>
#include<bits/stdc++.h> 
#include <bitset>
using namespace std;

void printBits(string value1, string value2, string value3){
    string result = "";
    int i;
    std::bitset<16> set1(value1);
    std::bitset<16> set2(value2);
    std::bitset<16> setcompare(value3);
   
      //shifting
      std::cout << "shift \t"<<  "= "<< ((set1 & setcompare ) >> 13)  << std::endl;  
    }      


 int main(){
    int value1, value2;
    cout <<"enter a speed and a distance value: "<< endl;
    cin >> value1;
    cin >> value2;

    string speed="";
    string distance="";
    string speed_b = "0b1111000000000000";
    // Convert number to binary string
    speed = bitset<16>(value1/20).to_string(); 
    distance = bitset<16>(value2/150).to_string(); 

    reverse(speed.begin(),speed.end()); 
    reverse(distance.begin(),distance.end()); 
    std::bitset<16> set1(speed); 
    std::bitset<16> setcompare(speed_b);
    std::bitset<16> set2(distance); 
  //  std::bitset<16> combine = (set1 | set2);
  std::bitset<16> combine_speed = ((set1 & setcompare)>>13);
    std::cout << "speed: \t" << set1 << std::endl; 
    std::cout << "distance: \t" << set2 << std::endl; 
    std::cout << "Speed masked: \t" << combine_speed << std::endl; 

    printBits(speed, distance, speed_b);

return 0;
 }