/* Create a class TIME to store time in hours and minutes. Write a friend 
functions to add two Times objects.*/
#include <iostream>
using namespace std;
class Time  
//class Time Delcared                                    
{
private:
    int hour;
    int minute;

public:
    Time(){};        
    //Default Constructor used.                          
    Time(int hr, int min)
    {
        hour = hr;
        minute = min;
    };
    void getTime(int hr, int min)
    //Used to get Time.
    {
        hour = hr;
        minute = min;
    };  
    void displayTime1() 
    //Used to display the time(t1).                         
    {
        cout<<"Total Hours for T1 = "<<hour<<endl;
        cout<<"Total Minutes for T1 = "<<minute<<endl;
    };
    void displayTime2() 
    //Used to display the time(t2).                         
    {
        cout<<"Total Hours for T2 = "<<hour<<endl;
        cout<<"Total Minutes for T2 = "<<minute<<endl;
    };
    void displayTime3() 
    //Used to display the time(t3 or temp time).                         
    {
        cout<<"Total Hours = "<<hour<<endl;
        cout<<"Total Minutes = "<<minute<<endl;
    };
    //Friend Function is used for addition of two time.
    friend Time TimeSum(Time t1, Time t2)       
    {
        Time temp;
        temp.minute = t1.minute + t2.minute;
        temp.hour = temp.minute / 60;
        temp.minute = temp.minute % 60;
        temp.hour = temp.hour + t1.hour + t2.hour;
        return temp;
    };
};

int main(int agrc, char const *agrv[])
{
    Time t1, t2, t3;
    //Time for t1
    t1.getTime(10,58);
    //Time for t2                            
    t2.getTime(5,41);                            
    t1.displayTime1();
    t2.displayTime2();
    //t3 is used for addition of two given time.
    t3 = TimeSum(t1, t2);                       
    cout<<"The hours and minute after addition of both time are: "<<endl;
    t3.displayTime2();
    return 0;
}