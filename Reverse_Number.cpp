//Reverse a Number
//Write a program to reverse a given integer number using a while loop. 
//For example, if the input is 1234, the output should be 4321.

#include <iostream>
using namespace std;
int main(){
    int num,reverseNum=0;
    cin>>num;
    while(num!=0){
        int digit = num%10; // Get the last digit
        reverseNum=reverseNum*10+digit;// Append it to the reversed number
        num /= 10;// Remove the last digit
    }
    cout << "Reversed Number: " << reversedNum << endl;
    return 0;
}