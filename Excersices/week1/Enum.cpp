#include <iostream>
using namespace std;

// Create enum type called fan_level it shall have three values Level1, Level2 and Level3. This enum shall be used to
// control the level of the fan.

enum fan_levels{

    level1 =1, level2 =2, level3=3
};

int main (){

    std::cout <<"Enter a value to control the fan: " << std::endl;
    int fan_control;
    std::cin >> fan_control;
    if ( fan_levels::level1 == fan_control)
    {
        std::cout <<"Level 1: " << fan_levels::level1<< std::endl;
    }else if (fan_levels::level2)
    {
        std::cout <<"level 2: " << fan_levels::level2<< std::endl;
    }else if (fan_levels::level3)
    std::cout <<"level 3: " << fan_levels::level3<< std::endl;
    
return 0;
}