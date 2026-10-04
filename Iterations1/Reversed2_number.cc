#include <iostream>
using namespace std;

int main(){
    int x,x10,x11,y,z;
    cin >>x;
    y=x;
    x10=10;
    x11=10;

    z=x%x10;//unidades ex 16 --> 6
    cout<<z;

    while (x10<=y){
        x10=x10*10;//ahora calcula decenas + unidades
        z=((x%x10)-z)/x11;//ahora calculamos solo decenas
        x11=x11*10;
        cout <<z;
    }
    cout <<endl;
}

