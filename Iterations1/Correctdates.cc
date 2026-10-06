#include <iostream>
using namespace std;

bool leapyear (int a){//dice si el año es bisiesto o no
    return ( (a%4 == 0 and a%100!=0) or (a%400 == 0) );
}
bool correct (int d,int m ,int a){
    if (m < 1 or 12 < m){//para casos falsos
        return false;
    } 

    int diesmes[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//uso un array para configurar los dias de un mes el 0 para assignarlo a la possicion 0
    if(m==2 and leapyear(a)){
        diesmes[2]= 29;
        
    } //si es un año bisiesto cambia el valor del mes
    return d>=1 and d <= diesmes[m];//torna en forma bool el interval de dies que te un mes
}

int main (){
    int d,m,a;
    while (cin >> d >> m >> a){
        if (correct(d,m,a)) cout << "Correct Date"<< endl;
        else cout << "Incorrect Date"<< endl;
    } 

}
