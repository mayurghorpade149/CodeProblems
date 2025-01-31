/******************************************************************************
 Write a C++ program to create a class called Rectangle that has private member 
 variables for length and width. Implement member functions to calculate the 
 rectangle's area and perimeter.

*******************************************************************************/
#include <iostream>
using namespace std;

class Rectangle{
    private:
        double lenght;
        double width;
    public:
        Rectangle(double l , double w){
            lenght=l;
            width=w;
        }
        void recArea(){
            double recArea = lenght * width;
            cout<<"Rectangle Area: "<<recArea<<endl;
        }
        void recPerimeter(){
            double recPerimeter =2 * ( lenght+width ) ;
            cout<<"Rectangle Perimeter: "<<recPerimeter<<endl;

        }
        
    
};

int main()
{
    double lenght ,width;
    cout << "Enter length: ";
    cin>>lenght;
    cout << "Enter width: ";
    cin>>width;
    Rectangle r1(lenght,width);
    r1.recArea();
    r1.recPerimeter();

    return 0;
}