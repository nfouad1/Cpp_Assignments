/*
Implement a function that can read the information shown in the figure.
                    
unit16_t  -         1 0 1 1 1  0 1 0 0  1 0 1 1  0 1 1
                    Seatbelts Windows  Doors   Lights

light = b0-b2; Doors = b3-b6; Windows = b7-b10, Seatbelts = b11-b15

*/

#include <iostream>
#include <bitset>

using namespace std;

int main() { 
   
    uint16_t value1 = 0b1011101001011011;
    uint16_t seatbelt = 0b1111100000000000; 
    uint16_t windows = 0b0000011110000000;
    uint16_t doors = 0b0000000001111000;
    uint16_t lights = 0b0000000000000111;   
    cout<< "Seatbelts = " << ((value1 & seatbelt) >> 11) <<endl;
    cout<< "Windows = " << ((value1 & windows) >> 7) <<endl;
    cout<< "Doors = " << ((value1 & doors) >> 3) <<endl;
    cout<< "lights = " << (value1 & lights) <<endl;


return 0; 
} 