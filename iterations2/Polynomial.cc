#include <iostream>
using namespace std;

int main(){
    double x,p;
    cout.setf(ios::fixed);
    cout.precision(4);
    //PRE x real y sequencia de p reals
    //POST calcula el polinomi d'estructura p a partir de x
    cin>>x;
    double copia_x=1;
    double suma=0;
    while (cin>>p){
        suma+=p*copia_x;
        copia_x*=x;
        
    }
    cout <<suma<<endl;
}