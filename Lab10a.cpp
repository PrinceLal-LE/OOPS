//Lab 10 (a) Concept of Default Constructor.
#include <iostream>
using namespace std;
class Cons              //Class named as Cons.
{
    public:
    int a,b;
   Cons()
    {
        a=504;
        b=505;
    }
   
};
int main()
{
    Cons Ct;
     cout << "The value of a is : "<<Ct.a<<endl
          << "The value of b is : "<<Ct.b ;
    return 0;
}