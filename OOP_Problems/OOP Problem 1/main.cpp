//Write a C++ program to implement a class called Circle that has private member variables 
//for radius. Include member functions to calculate the circle's area and circumference.


//Solution 1
#include <iostream>
using namespace std;
class Circle{
    private:
        double radius;
        
    public:
    
        void setRadius(double r) {
            radius = r;
        }
    
        void circleArea(){
            double area = 3.1416 * (radius*radius);
            cout<<"Area of circle: "<<area<<endl;
        }
        
        void circleCircumference(){
            double circumference = 2*3.1416*radius;
            cout<<"Circumference of circle: "<<circumference<<endl;
        }
        
};

int main()
{
    Circle c1;
    double radiusInput;
    cout << "Enter the radius of the circle: ";
    cin >> radiusInput;
    c1.setRadius(radiusInput);
    c1.circleArea();
    c1.circleCircumference();

    return 0;
}

//Solution 2

#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;  // Private member variable for radius
        
    public:
        // Constructor to initialize radius with user input
        Circle(double r) {
            radius = r;
        }
        
        // Member function to calculate and display the area of the circle
        void circleArea() {
            double area = 3.1416 * (radius * radius);
            cout << "Area of circle: " << area << endl;
        }
        
        // Member function to calculate and display the circumference of the circle
        void circleCircumference() {
            double circumference = 2 * 3.1416 * radius;
            cout << "Circumference of circle: " << circumference << endl;
        }
};

int main() {
    double radiusInput;

    // Ask the user to input the radius
    cout << "Enter the radius of the circle: ";
    cin >> radiusInput;

    // Create Circle object with the user input
    Circle c1(radiusInput);
    
    // Calculate and display area and circumference
    c1.circleArea();
    c1.circleCircumference();

    return 0;
}
