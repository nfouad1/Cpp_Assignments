//Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
//comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
//considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.

//Three functions for operating overloading (==, >= or <=) to be able to convert between objects.
// return type should be bolean
// returnType operator+(const Box&);

#include <iostream>
#include <cmath>
#include <cassert>
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
    // Pure virtual area function so that child classes have to do implemention on area and perimeter.
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
     bool operator>(Shape& area_1, Shape& area_2){    
        return (area_1.area() > area_2.area()); 
    }
     bool operator<(Shape& area_1, Shape& area_2){  
        return (area_1.area() < area_2.area());
    }
     bool operator==(Shape& area_1, Shape& area_2){
        if (area_1.area() == area_2.area())
            {
            if(area_1.perimeter() == area_2.perimeter()){
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
         //   cout << "Area from rectangle derived class"<< endl;
            return this->height * this->width;
            }
        double perimeter(){
         //   cout << "Perimeter from rectangle derived class"<<endl;
            return 2*this->height + 2*this->width;
        }
};
class triangle : public Shape{
    private:
       double width, height, length;

    public:
        triangle(double a, double b, double c){
            this->height = b;
            this->width = a;
            this->length = c;
        }
        double area(){
         //   cout <<"Area from triangle derived class"<< endl;
            return (this->height + this->width) + (sqrt(pow(this->height, 2) + pow(this->width, 2)));
        }
        double perimeter(){
         //   cout << "Perimeter from triangle derived class"<<endl;
            return this->height + this->width + this->length;
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
         //   cout<<"Area from square derived class"<< endl;
            return 2*this->width;
        }
        double perimeter(int a, int b){
         //   cout<<"Perimeter from square derived class"<< endl;
            return 4*this->width;
        }
};
class circle : public Shape{
    private:
        double radius;
    public:
        circle(double r){
         //   cout<<"Area from circel derived class"<< endl;
            this->radius = r;
        }
        double area(){
        //    cout <<"Cirkel area: "<< (this->radius*radius)*3.14 <<endl;
            return (this->radius*radius)*3.14;
        }
        double perimeter(){
         //   cout<<"Perimeter from circel derived class"<< endl;
            return (this->radius)*M_PI*2;

        }
};
int main (){

    rectangle Obj_r1{2,3};
    triangle Obj_t1{2,1,3};
    square Obj_s1{5};
    circle Obj_c1{4};
  /*  Obj_r1.printArea();
    Obj_t1.printArea();
    Obj_s1.printArea();
    Obj_c1.printArea();
    Obj_r1.printPerimeter();
    Obj_t1.printPerimeter();
    Obj_s1.printPerimeter();
    Obj_c1.printPerimeter();*/

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

    return 0;
}

