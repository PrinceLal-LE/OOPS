// Write program to overload binary operator
#include<iostream>
using namespace std;
class number
{
    private:
        int real, imag;
    
    public:
        void getvalue()
        {
            cout << "\n Real Number: ";
            cin >> real;
            cout << "\n Imaginary Number: ";
            cin >> imag;
        }
        number operator+(number num)
        {
            number temp;
            temp.real = real + temp.real;
            temp.imag = imag + temp.imag;
            return temp;
        }
        number operator-(number num)
        {
            number temp;
            temp.real = real - temp.real;
            temp.imag = imag - temp.imag;
            return temp;
        }
        void display()
        {
            cout<< real << "+"
            <<"( "<< imag << " ) "
            <<"i"
            <<" \n";
        }
};

int main()
{
    number P1, P2, P3, P4;
    P1.getvalue();
    P2.getvalue();
    P3 = P1 + P2;
    P4 = P1 - P2;
    cout<<"Result after addition is: ";
    P3.display();
    // cout<<"Result after subtraction is: ";
    P4.display();
    return 0;
}