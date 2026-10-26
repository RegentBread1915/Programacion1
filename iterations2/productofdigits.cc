#include <iostream>
using namespace std;

int operacio (int y){
    if (y == 0) return 0;
    int p=1;
    while (y>0){
            p*=y%10;
            y/=10;
            }
    return p;

}

int main (){
    int n;
    //Pre n ha de ser un natural int n
    //Post la n es converteix en el producte entre els seus digits fins arribar a 1 sol digit 
   while (cin>>n){
        int m=n;
        bool mes_digit= true;
        while (mes_digit){
            int p= operacio(m);
            cout <<"The product of the digits of "<<m<<" is "<<p<<'.'<<endl;
            m=p;
            if(m<10){
                mes_digit=false;
            }
        }
        cout<<"----------"<<endl; 
        }
    }