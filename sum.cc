#include <iostream>
using namespace std ;
//PRE x,y,z
int main (){

    double x ,y,z ,min1,max1,suma,sumamax,sumamin;
    cin >> x >> y >> z ;
    min1=x;//busca el minim
    if (y < min1) min1 = y;
    if (z < min1) min1 = z;
    max1=x;//busca el max
    if (y>max1) max1 = y;
    if (z>max1) max1 = z;

    suma = x+y+z;
   
    sumamax =(max1+min1);// fa la operacio
    cout <<sumamax<< endl;// imprimeix els resultats

//POST sumamax=max(x+y,z+y,x+z) sumamin=min(x+y,z+y,x+z)

}