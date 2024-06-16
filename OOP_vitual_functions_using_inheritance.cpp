
#include <stdio.h>
#include <iostream>
using namespace std;

class Base
{
public:
        virtual void fun() // Virtual is used to make the pointer use the Derived when it is 
                           //declared in the main pogram
        {
            cout<<"This is the method in Base function"<<endl;
        }
};

class Derived:public Base
{
public:
        void fun()
        {
            cout<<"This is the method in Derived function"<<endl;
        }
};
int main()
{
    Derived r;
    Base *p=&r;
    p->fun(); //This will show the Base messagewithout "vitual" function in Base class
              //in case of making "virtual" function the Base one then the Derived is executed
    printf("Hello World");

    return 0;
}
