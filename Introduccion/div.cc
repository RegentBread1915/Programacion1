#include <iostream>
using namespace std;

int main(){
    int a,b,d,r;//donar valor int
    cin >> a >> b;// inputs a i b
    if (0<b){//si b>0
        d=a/b;//calcular div
        r=a-(d*b);//calcular residu
        cout<< d <<" "<<r << endl;//output resposta
    }
}