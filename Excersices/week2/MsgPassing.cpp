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
    Polygon *p[2] = {
        new Rectangle(10,10),
        new Triangle(8,8)};
    for (size_t i=0; i<2; i++){
        p[i]->print_area();
        delete p[i];
    }

    return 0;

}