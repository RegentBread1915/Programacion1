#include <iostream>
using namespace std;

int main (){
    int n,p,q,resto;
    p=0;
    q=0;
    resto=0;
    while (cin>>n){
       p=n/7;
       resto = n-(7*p);
       while (resto%4!=0){
            p--;
            resto = n-(7*p);
       }
       q=resto/4;
       cout << p << " " << q << endl;

       }
       
    }