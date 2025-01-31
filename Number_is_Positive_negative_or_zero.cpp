
//Program to check number is positive, negative or zero.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    if(a>0){
        cout<<"Number is positive";
    }else if(a<0){
        cout<<"Number is negative.";
    }else{
        cout<<"Number is zero.";
    }
    

    return 0;
}