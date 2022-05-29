// Program to show multiple inheritance.
#include<iostream>
using namespace std;
// Declaring Class Pen 
class Pen
{
    public:
        Pen()
        {
            cout<< " I took a Pen "<<endl;
        };
};
// Declaring Class Book
class Book
{
    public:
        Book()
        {
            cout<< " I purchased a book from store \n";
        };
};
// using inheritence
class Notebook : public Pen, public Book
{
    public:
        Notebook()
        {
            cout << " I purchased a Notebook"<< endl;
        };
};

int main(int argc, char const *argv[])
{
    Notebook N1;
    return 0;
}