//Sum of Digits
//Write a program that takes an integer as input and calculates the sum of its digits using a while loop. 
//For instance, the sum of digits of 1234 is 10 (1 + 2 + 3 + 4).
#include <iostream>
using namespace std;
int main(){
    int num,reverseNum=0,sum=0;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
        int digit = num%10;
        sum=sum+digit;
        num /= 10;
    }
    cout<<"Sum: "<<sum;
}