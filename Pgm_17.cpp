/*Write a program to create an abstract class named shape that contains an
empty method named number of Slides (). Provide three classes named Trapezoid, 
Triangles  and Hexagon such that each one of the classes inherits the 
class Shape. Each one of the classes contains only the method number of Slides
() that shows the number of sides in the given geometrical figures.*/

#include<iostream>
using namespace std;
class Shape
{
    protected:
    int side;
    public:
    virtual void numberOfSides() = 0;
};
class Trapezoid : public Shape
{
    public:
    Trapezoid(int side)
    {
        this->side = side;
    };
    void numberOfSides()
    {
        cout<<"Total number of Trapezoid sides are : "<<side<<endl;
    };
};
class Triangle : public Shape
{
    public:
    Triangle(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout<<"Total number of Trianlge sides are "<<side<<endl;
    };
};
class Hexagon : public Shape
{
    public:
    Hexagon(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout<<"Total number of Hexagon sides are "<<side<<endl;
    };
};
int main(int agrc, char const *argv[])
{
    Trapezoid t1(4);
    Triangle t2(5);
    Hexagon H2(8);

    t1.numberOfSides();
    t2.numberOfSides();
    H2.numberOfSides();
    return 0;
}