/*Create two classes:

Rectangle
The Rectangle class should have two data fields-width and height of int types.
The class should have display() method, to print the width and height of the rectangle separated by space.

RectangleArea
The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class.
The class should have read_input() method, to read the values of width and height of the rectangle.
The RectangleArea class should also overload the display() method to print the area
of the rectangle.

Input Format
The first and only line of input contains two space separated integers denoting the width and height of the rectangle.

Output Format
The output should consist of exactly two lines:
In the first line, print the width and height of the rectangle separated by space.
In the second line, print the area of the rectangle. */

#include <iostream>

using namespace std;

class Rectangle {
    
    public:
    int width;
    int height;
    
    void display(){cout << this->width << " "<< this->height << endl;}
};
class RectangleArea : public Rectangle{
    public :
        void read_input(){
            cout << "Write a value for width" <<endl;
                cin >> width;
            cout << "Write a value for width" <<endl;
                cin >> height;    
        }
        void display(){ cout << width * height <<endl;}
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}