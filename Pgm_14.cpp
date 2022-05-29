// Program to show multilevel inhertitance
#include<iostream>
using namespace std;
class shoe
{
    public:
        Khadims()
        {
            cout<<"Khadims is one of the famous brand in shoe. "<<endl;
        }
};
class Redchief : public shoe
{
    public: 
        Redchief()
        {
            cout<<"Redchief is famous for making leather shoes. "<<endl;
        }
};
class Bata : public Redchief
{
    public:
        Bata()
        {
            cout<<"Bata is one of the oldest shoe company. "<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Bata b1;
    return 0;
}
