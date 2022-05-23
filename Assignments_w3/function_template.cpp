/*Write a function template which receives two of any shapes from last week’s assignment, compares them, and
prints out the result.*/


#include<iostream>

using namespace std;

template <typename T1, typename T2>
bool shapecompare (T1 const& a, T2 const& b){
    //compare a with b 

}

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

template <typename T>
 T square(T const width){
       return (2*width);
    }
template <typename T>
 T rectangle(T width,T height){
     2*this->height + 2*this->width;
     width * height;
    }



int main(){
    int area1, area2;
    cout << shapecompare<int,int>(5,5) << endl;
    area1 = rectangle_area<int>(5,5); 
    cout << "area1 = " << area1 <<endl;
    area2 = square_area<int>(5); 
    cout << "area2 = " << area2 <<endl;

    return 0;
}
