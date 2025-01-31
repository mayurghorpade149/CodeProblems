//Program to Find out if a number is even or odd:
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(number%2==0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }

    return 0;
}