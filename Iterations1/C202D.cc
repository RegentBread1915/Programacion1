#include <iostream>
using namespace std;

int cub (int a,int b){
    int n= 0;
    int operacion=0;
    if (a > b){
        return 0;
    }
    else if (b>a){
        int contador = b - n;
        while (contador>a){
        contador = b - n;
        operacion+= contador*contador*contador;
        n++;
         }
         return operacion;
     }
     else {
        operacion+=a*a*a;
        return operacion;
     }
 return 0;
}



int main (){
    int a,b;
    while (cin>>a>>b){

        cout <<"suma dels cubs entre "<<a<<" i "<<b<<':'<<' '<<cub(a,b)<<endl;

    }
}