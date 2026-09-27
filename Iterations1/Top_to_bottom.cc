#include <iostream>
#include <cmath>//per tenir abs
#include <algorithm>//per tenir max
using namespace std;

int main(){
    int x,y,z,r,s;
    cin>>x>>y;
    z=0;//calcular el numero de vegades que es repiteix el while
    s=0;
    int mini = max(x,y);//calcular el maxim

    if (x==y){// si es igual
        z=1;//calcular el numero de vegades que es repiteix el while
    }


    else {// si es negatiu o positiu
          z=abs(x-y)+1;//calcular el numero de vegades que es repiteix el while
    }

    r=0;//decreiximent
    while (0<z){//si z es positiu continua
        s=mini+r;//calulen els digits
        cout<<s<<endl;//resultat
        r=r-1;//decreiximent
        z=z-1;//decreix fins arribar a 0
    }

}