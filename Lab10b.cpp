//Lab-10 (b) Concept of Paramertrized constructor
#include <iostream>
using namespace std;
class Calc                                  //Declaring Class as Calc.
{
    private:
    int m,n,o ;
    public: 
    Calc(int m10, int n10, int o10)
    {
        m=m10;
        n=n10;
        o=o10;
    }
    int getM()
    {
        return m;
    }
    int getN()
    {
        return n;
    }
    int getO()
    {
        return o;
    }
};
int main()
{
    Calc C1(100, 200, 300);
    cout<< "The value of m is : "<<C1.getM()<<endl
        << "The value of n is : "<<C1.getN()<<endl
        << "The value of o is : "<<C1.getO()<<endl;
        
    return 0;
}