#include <iostream>
using namespace std;
//PRE x
int main (){
    char x ;


    cin >> x;
   
    if (x>='a' and x <= 'z') {//reconeix si es minuscula 
        cout <<"Lowercase letter" <<endl;}//imprimeix el text

    if (x>='A' and x <= 'Z') {//reconeix si es mayusucla 
        cout <<"Uppercase letter" <<endl;}//imprimeix el text

    if (x>='0' and x <= '9' ) {//reconeix si es un numero
        cout <<"Number" <<endl;}//imprimeix el text
}
//Post si x es minuscula imprimeix Lowercase letter si es mayuscula Uppercase letter i si es un numero Number 