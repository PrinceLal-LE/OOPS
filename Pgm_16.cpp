// Program to show the concept of run time polymorphism using virtual function.
#include<iostream>
using namespace std;
// declared base class
class Mobile
{
    public:
    virtual void feature()
    {
        cout<<"Total cost of mobile" ;
    }
};
//declared derived class
class samsung : public Mobile
{
    public:
    void feature()
    {
        cout<< "This is a samsung phone."<<endl;
        cout<< "Total cost of this phone is : Rs. 50100.00 \n"<<endl;
    }
};
// Declared second derived class
class apple : public Mobile
{
    public:
    void feature()
    {
        cout<< "This is a apple phone."<<endl;
        cout<< "Total cost of this phone is : Rs. 101999.00 \n"<<endl;
    }
};

int main()
{
    // pointer of base class
    Mobile *M;
    samsung s;
    // reference value initilized
    M = &s;
    // calling samsung function
    M->feature();
    apple a;
    // reference value initilized
    M = &a;
    // calling apple function
    M->feature();
    return 0;
}