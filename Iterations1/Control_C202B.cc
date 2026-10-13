#include <iostream>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(2); 
    int n,contador,x,operacio1;
    contador=1;
    cin >> n;
   

    if(2<=n){
            while (cin>> x and contador <n){
                int  z= x*x ;
                contador++;
                int  y=x*x+z ;
                operacio1= (z+y);
            }
            cout << operacio1;
           
        
    }
}   