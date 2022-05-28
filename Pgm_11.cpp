//Write program to overload unary operator
#include<iostream>
using namespace std;
class cse
{
    private:
        int p, q;               //Declared Data member.

    public:
        cse(int p1, int q1)     //Paramterized Constructor
        {
            p = p1;
            q = q1;
        }
        void operator-- ()      //Operator overloading function
        {
            p = --p;
            q = --q;
        }
        void operator++ ()
        {
            p = ++p;
            q = ++q;
        }
        void display()             //display result
        {
            cout<<p<<"+"<<q<<"i"<<endl;
        }
};
int main()
{
    cse c1(20,10);                  //Object is created of class cse/
    -- c1;
    cout<<"Decrement of given number in CSE Class\n ";
    c1.display();                   //called to display result after decrement.

    ++c1;
    cout<<"Increment of given number in CSE Class\n ";
    c1.display();                   //called to show the result after increment.
    return 0;
}