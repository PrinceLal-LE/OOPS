#include<iostream>
using namespace std;
//Class Declaration.
class power {
    public:
      int result=1;
      int m,n;
    void display(){
        cout<<"result is "<<result;
    }
    int calsquare(int m,int n){
        for(int i=1;i<=n;i++){
            result=result*m;    
        }
        display();
        return 0;
    } 
    int square(int m, int n){
        calsquare(m,n);
        return 0;
    }
int square(int m){
          const int n=2;
        calsquare(m,n);
        return 0;
    }
};
int main(){
    power A;
    int m,result;
    cout<<"enter m: ";
    cin>> m;
    A.square(m);
    return 0;
}
