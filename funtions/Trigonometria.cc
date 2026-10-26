#include <iostream>
#include <cmath>
using namespace std;

const double pi =3.141592653589793;

double oper_cos (double grados){
    //PRE agafa un nombre real n
    double radianes;
    radianes =grados*(pi/180);
    double cosinus=cos(radianes);
    return cosinus;
     //POST transorma n en cosinus 
}
double oper_sin (double grados){
    //PRE agafa un nombre real n
    double radianes;
    radianes =grados*(pi/180);
    double sinus=sin(radianes);
    return sinus;
    //POST transorma n en sinus 
}

int main (){
    double n;
    //PRE agafa un nombre real n
    //Post imprimeix el valor de n graus a sinus/cosinus
    cout.setf(ios::fixed);
    cout.precision(6);
    
   while (cin>>n){
    double cosinus =oper_cos(n);
    double sinus =oper_sin(n);
    cout<<sinus<<' '<<cosinus<<endl;
   }
}