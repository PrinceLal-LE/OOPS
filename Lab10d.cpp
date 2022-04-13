//constructor overloading
// Calculating the perimeter of the rectangle.
#include <iostream>
using namespace std;

class Perimeter
{
    public:
    int peri;
    
    Perimeter()
    {
        peri = 0;
    }
    Perimeter(int len, int wid)
    {
        peri = 2*(len+wid);
    }
    
    void display()
    {
    cout<<"The perimeter of the field is : "<<peri<<" units"<<endl;
    }    
};
int main()
{
    Perimeter P1(50,40);
    P1.display();
    return 0;
}