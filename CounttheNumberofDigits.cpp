//Count the Number of Digits
//Write a program to count the number of digits in a given number using a while loop.
//For example, if the input is 4567, the output should be 4.
#include <iostream>
using namespace std;

int main()
{
    int num,count=0,i=0;
    cin>>num;
    if(num==0){
        count=1;
    }else{
        while(num!=0){
            num/=10;
            count++;
        }
    }
    cout<<count;

    return 0;
}