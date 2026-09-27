#include <iostream>
using namespace std;

int main (){
    int a,b,c,d;
    cin >> a;
    if (1800<=a and a<=9999){
        b=a%4;
        c=a%400;
        d=a%100;
         if ( c==0){
            cout<<"YES"<<endl;
         }
        else if (d==0){
            cout<<"NO"<<endl;
        }
            

        else if (b==0 ){
            cout<<"YES"<<endl;
        }

        else {
            cout<<"NO"<<endl;
        }
    }
}