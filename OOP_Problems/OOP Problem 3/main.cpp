/******************************************************************************
 Write a C++ program to create a class called Person that has private member 
 variables for name, age and country. 
 Implement member functions to set and get the values of these variables.

*******************************************************************************/
#include <iostream>
using namespace std;
class Person{
    private:
        string name;
        double age;
        string country;
    public:
    //person name
        void setName(string n){
            name=n;
        }
        string getName(){
            return name;
        }
    //person age
        void setAge(double a){
            age=a;
        }
        double getAge(){
            return age;
        }
    //person country
        void setCountry(string cn){
            country=cn;
        }
        string getContry(){
            return country;
        }
};

int main()
{
    Person p1;
    string name ;
    double age;
    string country;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Country: ";
    cin>>country;
     
    p1.setName(name);
    p1.setAge(age);
    p1.setCountry(country);
    
    cout <<"Person Name: "<<p1.getName()<<endl;
    cout <<"Person Age: "<<p1.getAge()<<endl;
    cout <<"Person Country: "<<p1.getContry()<<endl;

    return 0;
}