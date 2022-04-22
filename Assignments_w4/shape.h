
#pragma once // dont include this header file multiple times.
#include <iostream>
#include <math.h>

using namespace std;
class Shape
{
private:
    double s_area, s_perimeter;
    
public:
    // constructor to initialize width, height and length and default constructor
    Shape(double a, double b){
       // width = 0; height = 0; length;
            s_area = 0; s_perimeter = 0;
        }
    Shape (){};
    // Virtual area function so that child classes have to do implemention on area and perimeter.
    virtual double area() {cout <<"functions from base class"<<endl;}
    virtual double perimeter() {cout <<"functions from base class"<<endl;}
    
    // function to print perimeter
    void printPerimeter(){
        cout << this->perimeter()<< endl;
    }
    //function to print the area
    void printArea(){
        cout << this->area()<<endl;
    }


};
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
class rectangle : public Shape{
    private:
       double width, height;
    public: 
        rectangle(double a, double b){
            this->height = b;
            this->width = a;
        }
        double area(){
            return this->height * this->width;
            }
        double perimeter(){
            return 2*this->height + 2*this->width;
        }
};
class triangle : public Shape{
    private:
       double width, height;

    public:
        triangle(double a, double b){
            this->height = b;
            this->width = a;
        }
        double perimeter(){
         //   height+width + sqrt(height² + width²)
            return (this->height + this->width) + (sqrt(pow(this->height, 2) + pow(this->width, 2)));
        }
        double area(){
         //   (height+width)/2
            return (this->height + this->width)/2;
        }
};

class square : public Shape{
    private:
       double width;
    public:
        square(double a){
            this->width = a;
        }
        double area(){
            return 2*this->width;
        }
        double perimeter(){
            return 4*this->width;
        }
};
class circle : public Shape{
    private:
        double radius;
    public:
        circle(double r){
            this->radius = r;
        }
        double area(){
            return (this->radius*radius)*3.14;
        }
        double perimeter(){
            return (this->radius)*M_PI*2;

        }
};

// template for shape objects
template <class T1, class T2>
    bool isBigger (T1 shape1, T2 shape2){

     if (shape1.area() > shape2.area()){
            cout <<"shape 1 is bigger than shape 2"<<endl;
        }else if (shape1.area() < shape2.area())
        {
            cout <<"shape 1 is smaller than shape 2"<<endl;
        }else if ((shape1.area() == shape2.area()) && (shape1.perimeter() == shape2.perimeter()))
    {
                cout <<"shape 1 have the same area as shape 2"<<endl;   
    }  
} 