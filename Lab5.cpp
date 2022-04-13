/*Write a class ACCOUNT that represents your bank account and then use it.
The class should allow you to deposit money, withdraw money, calculate interest, 
send a message if you have insufficient balance.*/
#include <iostream>
using namespace std;

class Account   //Decalring class as Account.
{
    private:
    int Acc_balance=0;
    public: 
    int dep_money(int add)   
    {
        Acc_balance=Acc_balance+add;    //Adding the balance in the account.
        return Acc_balance;             //Balance updated in the account.
    }
    int money_out(int out)
    {
        if(Acc_balance>=out)
        {
           Acc_balance=Acc_balance-out; //Withdrawal from the account.
           return 1;
        }
        else 
        {
            cout<<"Not sufficient balance !"<<endl;
            return -1;
        }
    }    
    int int_calc(int rate, int time)
    {
       Acc_balance=(Acc_balance*rate*time/100)+Acc_balance; //Calculating the interest which is currently in the account.
        return Acc_balance;
    }
    void display()
    {
        cout<<"Account Balance is: "<<Acc_balance;  //To show the account balance.
    }
};

int main()
{
    Account Acc;
    Acc.dep_money(8000);
    int status = Acc.money_out(3000);
    if(status==1)
    {
        Acc.int_calc(5,2);
        Acc.display();
    }
    return 0;
}