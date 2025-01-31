#include <iostream>
using namespace std;
class A{
    public:
        int value;
        
        A(){
            value=10;
        }
};

class B:public virtual A{
    
};

class C:public virtual A{
    
};

class D:public B,public C{
    
};

int main(){
    D d;
    cout<<"Value: "<<d.value;
    return 0;
}