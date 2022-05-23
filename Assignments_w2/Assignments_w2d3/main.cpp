//Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
//comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
//considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.

//Three functions for operating overloading (==, >= or <=) to be able to convert between objects.
// return type should be bolean
// returnType operator+(const Box&);

//#include <iostream>
#include <cassert>
#include <assert.h>
#include "shape.h"
#include "shape.cpp"

using namespace std;

int main (){

    double a , b, c;
    cout<<"Enter three integer values for areas of the shapes: " <<endl;
    cin >> a  >> b;
  
    //check if the user entered positiv values
    assert(a > 0);
    cout << "First value is positiv"<<endl;
    assert(b > 0);
    cout << "Second value is positiv"<<endl;

    rectangle Obj_r1{a,b};

    triangle Obj_t1{a,b};
    square Obj_s1{a};
    circle Obj_c1{a};

    // Rectangel
    cout << "Rectangle area > Triangle area: " << (Obj_r1 > Obj_t1) << endl;
    cout << "Rectangle area = Triangle area: " << (Obj_r1 == Obj_t1) << endl;
    cout << "Rectangle area < Triangle area: " << (Obj_r1 < Obj_t1) << endl;
    cout << "Rectangle area > Square area: " << (Obj_r1 > Obj_s1) << endl;
    cout << "Rectangle area = Square area: " << (Obj_r1 == Obj_s1) << endl;
    cout << "Rectangle area < Square area: " << (Obj_r1 < Obj_s1) << endl;
    cout << "Rectangle area > Cirkel area: " << (Obj_r1 > Obj_c1) << endl;
    cout << "Rectangle area = Cirkel area: " << (Obj_r1 == Obj_c1) << endl;
    cout << "Rectangle area < Cirkel area: " << (Obj_r1 < Obj_c1) << endl;
    // Triangle
    cout << "Triangle area > Square area: " << (Obj_t1 > Obj_s1) << endl;
    cout << "Triangle area = Square area: " << (Obj_t1 == Obj_s1) << endl;
    cout << "Triangle area < Square area: " << (Obj_t1 < Obj_s1) << endl;
    cout << "Triangle area > Cirkel area: " << (Obj_t1 > Obj_c1) << endl;
    cout << "Triangle area = Cirkel area: " << (Obj_t1 == Obj_c1) << endl;
    cout << "Triangle area < Cirkel area: " << (Obj_t1 < Obj_c1) << endl;
   
   //compare triangle with rectange
    cout << "comparing triangle (shape1) with rectangle (shape2) \n";
    isBigger(Obj_t1, Obj_r1);
    // compare cirkel with square
    cout << "comparing cirkel (shape1) with square (shape2) \n";
    isBigger(Obj_c1, Obj_s1);


    return 0;
}

