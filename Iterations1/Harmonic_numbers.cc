#include <iostream>
using namespace std;

int main (){

    cout.setf(ios::fixed);//limitar el output a 4 digits
    cout.precision(4);//limitar el output a 4 digits
    double x,y,z;//valors a int
    cin >> x;//input
    y=1;
    z=0;

    while (y<=x){//bucle fins arribar a y=x
        z=1/y+z;//suma la fraccio
        y++;//augmenta el valor y
    }
    cout<< z << endl;//imprimeix el resultat
}