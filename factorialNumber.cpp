//Calculate factorial of the number N


/*************Simple Way************/
#include <iostream>
using namespace std;

void factorial(int N){
    int fact=1;
    int i=1;
    while(i<=N){
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of Number "<<N<<" is "<<fact;
}

int main()
{
    int N;
    cout<<"Enter number: ";
    cin>>N;
    factorial(N);

    return 0;
}