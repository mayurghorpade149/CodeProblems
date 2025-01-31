//Program to find out given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int i=2;
    if(num<=1){
        cout<<"Number "<<num<<" is not prime number.";
    }
    else{
        while(i<num){
            if(num%i==0){
                cout<<"Number "<<num<<" is not prime.";
                return 0;
            }else{
                i+=1;
            }
        }
        cout<<"Number "<<num<<" is prime number."; 
    }
    return 0;
}