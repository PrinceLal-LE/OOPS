/* Create two classes DM and DB. DM stores the distance in meters and centimeters and DB 
stores the distance in feet and inches. Write p program to addition object of DM with the object of DB class.*/
#include <iostream>
using namespace std;
class DB;
class DM
{
    // decalred data member for DM
    double meters, centimeters; 

public:
    void getdata()
    {
        // Getting Data from user end.
        cout << "\nEnter the value in meters-centimeter:";
        cin >> meters >> centimeters;
    }
    void display()
    {
        // Output statement
        cout << "\nTotal distance entered is :";
        cout << meters << " meters and " << centimeters << " centimeter";
    }
    friend void addition(DM &, DB &);
};
class DB
{
    // declared data member for DB
    float inch, feet;

public:
    void getdata()
    {
        // Getting data from user end.
        cout << "\nEnter the value in feet-inch:";
        cin >> feet >> inch;
    }
    void display()
    {
        // output statement
        cout << "\nTotal distance entered is :";
        cout << feet << " feet and " << inch << " inch";
    }
    friend void addition(DM &, DB &);
};
void addition(DM &p, DB &q)
{
    int role;
    cout << "\nEnter your valid choice:";
    cout << "\nEnter 1 for meters & centimeter:";
    cout << "\nEnter 2 for feet & inch:\n";
    cin >> role;
    if (role == 1)
    {
        DM z;
        int c = (p.meters * 100 + p.centimeters + q.feet * 30.48 + q.inch * 2.54);
        if (c >= 100)
        {
            z.meters = c / 100;
            z.centimeters = c % 100;
        }
        else
        {
            z.meters = 0;
            z.centimeters = c;
        }
        z.display();
    }
    else
    {
        DB z;
        int i = (p.meters * 39.37 + p.centimeters * .3937008 + q.feet * 12 + q.inch);
        if (i >= 12)
        {
            z.feet = i / 12;
            z.inch = i % 12;
        }
        else
        {
            z.feet = 0;
            z.inch = i;
        }
        z.display();
    }
}
int main()
{

    DM p;
    DB q;
    p.getdata();
    q.getdata();
    addition(p, q);
}