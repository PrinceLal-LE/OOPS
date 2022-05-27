// // Program to demonstrate the concept of destructor.
#include <iostream>
using namespace std;

class Prince{
    public: 
    Prince(){                               //Constructor was called
    cout<<"Here constructor was called to work"<<endl;
  }
    ~Prince(){                              //Destructor was called
    cout<<"Here destructor was called to work"<<endl;
   }
   void display(){                          //Function is used to dispaly the output.
     cout<<"Hello World!"<<endl;
   }
};
int main(){
   Prince P1;                               //Object is created.
   P1.display();                            //Function is called to display
   return 0;
}