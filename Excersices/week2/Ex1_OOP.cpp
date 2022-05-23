#include <iostream>

using namespace std;

class Box {

    public:
        // properties of a box
        double length  ;
        double breadth;
        double height ;

        void Printvolume(){
            cout << "The volume 1 is : " << breadth * height * length << endl;

        }
};

int main (){

    // declaring Box1 and Box2 of type Box
    Box Box1;
    Box Box2;

    Box1.length = 0.5;
    Box1.breadth = 6.0;
    Box1.height = 7.0;

    Box1.Printvolume();

    //specifications for Box2
    Box2.breadth = 10.0;
    Box2.height = 12.0;
    Box2.length = 13.0;
    Box2.Printvolume();

}