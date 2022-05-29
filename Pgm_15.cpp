//Program to show the concept of hybrid inheritance
#include<iostream>
using namespace std;
class Hosiptal
{
    public:
    Hosiptal()
    {
        cout<<"Hospital name is Patna Medical College & Hosiptal"<<endl;
    }
};
class Department : public Hosiptal
{
    public:
    Department()
    {
        cout<<"I work on Orthopedics department."<<endl;
    }
};
class Doctor
{
    public:
    Doctor()
    {
        cout<<"My name is Dr.Prince Lal"<<endl;
    }
};
class Patient : public Department, public Doctor
{
    public:
    Patient()
    {
        cout<<"Leg bone is broken"<<endl;
    }
};
int main()
{
    Patient P;
    return 0;
}