#include "shape.h"

 //operator overloading functions for >=, <= and ==
bool operator>(Shape& shape1, Shape& shape2){    
    return (shape1.area() > shape2.area()); 
}
bool operator<(Shape& shape1, Shape& shape2){  
    return (shape1.area() < shape2.area());
}
bool operator==(Shape& shape1, Shape& shape2){
    if (shape1.area() == shape2.area())
    {
        if(shape1.perimeter() == shape2.perimeter()){
            cout << "Perimeter is considered!"<< endl;
            return 1;
        }
        } else
            return 0;
    }