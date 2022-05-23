#include <iostream>

class Polygon {
protected:
    int width, height;   
    virtual int area() = 0; 
public:    
    Polygon (int a, int b) { width=a; height=b;}
    void print_area() {
        std::cout << this->area() << std::endl;
    }
};

class Rectangle: public Polygon {
public:
    Rectangle(int a,int b) : Polygon(a,b) {}
private:
    int area () { return width * height; }
};


class Triangle:  public Polygon {
public:
    Triangle(int a,int b) : Polygon(a,b) {}
private:
    int area () { return width * height / 2; }
};


int main() {
    Rectangle r(3,4);
    Triangle t(3,4);

    
    r.print_area();
    t.print_area();
    
    return 0;

}