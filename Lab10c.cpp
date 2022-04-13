// Lab 10(c) Concept of Copy Constructor
#include <iostream>
using namespace std;
class Copy
{
    private:
    int m,n ;
    public: 
    Copy(int m10, int n10) // paramertrized constructor
    {
        m=m10;
        n=n10;
    }
    Copy (const Copy &Co) // Copy Constructor
    {
        m=Co.m;
        n=Co.n;
    }
    int getM()
    {
        return m;
    }
    int getN()
    {
        return n;
    }
};
int main()
{
    Copy Co(103, 107);
    Copy Co1 = Co;
    cout<< "The value of m is : "<<Co.getM()<<endl
        << "The value of y is : "<<Co.getN()<<endl;
        
    cout<< "The value of Co.m is : "<<Co1.getM()<<endl
        << "The value of Co.n is : "<<Co1.getN();
     
     return 0;
}
