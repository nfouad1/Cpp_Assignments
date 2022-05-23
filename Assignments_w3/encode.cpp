/*
Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,...)
• Distance / 150 (So 1=150mm, 2=300mm,...)

                    Speed   Front  Rear Right Left
unit16_t            1 0 1 1 1 0 1 0 0 1 0 1 1 0 1 1
*/
// read in decimal values for speed and distance from user, use OR operator to insert both of them into an uint16 register.

#include <iostream>
#include <bitset>
#include <string>

using namespace std;
uint16_t s_binary = 0;
uint16_t d_binary = 0;
uint16_t s_binary_new;
uint16_t dataBoth = 0x0000;
string speed = "";
string distance = "";

/*uint16_t printBits(int value1, int value2){
    int  s_remainder, d_remainder;
    int product = 1;
    speed = bitset<16>(value1).to_string();
   // distance = bitset<16>(value2).to_string();
    while (value1 !=0 )
    {
        s_remainder = value1 % 2;
        s_binary = s_binary + (s_remainder * product);
        value1 = value1 / 2;
        product *= 10;
    }
     while (value2 !=0 )
    {
        d_remainder = value2 % 2;
        d_binary = d_binary + (d_remainder * product);
        value2 = value2 / 2;
        product *= 10;
    }
    uint16_t data = 0b0000;
    data  = s_binary;
    data = data << 8;
    cout <<"data: "<< data <<endl;
   //s_binary_new = (uint16_t) s_binary;
   // s_binary = s_binary << 8;
    return speed;
}*/

int main() { 
   
    uint16_t value1 = 0b1011101001011011;
    uint16_t speed  = 0b1111000000000000; 
    uint16_t front  = 0b0000111000000000;
    uint16_t rear   = 0b0000000111000000;
    uint16_t right  = 0b0000000000111000;   
    uint16_t left   = 0b0000000000000111;   
    
    cout<< "Speed = " << ((value1 & speed) >> 12) <<endl;
    cout<< "Front = " << ((value1 & front) >> 9) <<endl;
    cout<< "Rear = " << ((value1 & rear) >> 6) <<endl;
    cout<< "Right = " << ((value1 & right) >> 3) <<endl;
    cout<< "Left = " << (value1 & left) <<endl;
    
    int s_decimal, d_decimal;
    cout <<"Enter a speed and distance values: "<<endl;
    cin >> s_decimal;
    cin >> d_decimal;
  //  printBits(s_decimal, d_decimal);
    speed = bitset<16>(s_decimal).to_string();
    distance = bitset<16>(d_decimal).to_string();
    cout <<"speed value in binary form: " << speed<<endl;
    cout <<"distance value in binary form: " << distance<<endl;


return 0; 
} 





