#include <iostream>
#include <string>
using namespace std;
int getStringLength(const string& str, int index = 0) {
    // Base case: if we reach the end of the string, return 0
    if (str[index] == '\0') {
        return 0;
    }
    return 1 + getStringLength(str, index + 1);
}

int main()
{
    string firstName="Mayur";
    string lastName="Ghorpade";
    string fullName=firstName+lastName;
    cout<<"fullName: "<<fullName.length();
    cout<<getStringLength(fullName);

    return 0;
}