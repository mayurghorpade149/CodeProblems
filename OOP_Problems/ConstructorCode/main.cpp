
#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    double age;
    
    Person(){
        cout<<"I am Default Constructor!"<<endl;
    }
    
    Person(Person &newObj){
        cout<<"I am Copy Constructor!"<<endl;
        this->name=newObj.name;
        this->age-newObj.age;
        }
};
class Person2:public Person{
    public:
        Person2(string name ,double age){
            cout<<"I am Parameterized Constructor!"<<endl;
            this->name=name;
            this->age=age;
    }

};

int main()
{
    Person2 p1("Mayur",23);
    Person2 p2(p1);
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    return 0;
}