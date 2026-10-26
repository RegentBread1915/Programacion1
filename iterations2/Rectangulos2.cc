#include <iostream>
using namespace std;



int main (){
    int n,m;
    bool primero =true;
    while (cin>>n>>m){
        bool reset=false;
        int numero=10;
        if(not primero){
             cout<<endl;
        }
        primero=false;
        
        
        for (int j=0;j<n;j++){//columnas
            for(int i=0;i<m;i++){//filas
                if( reset){
                     numero=10;//si el numero arriba a 0 es reinicia el valor de numero
                 }
                
                if (numero!=0){
                    numero=numero-1;//resta i posa que si no es igual a 0 el reset es false
                    reset=false;
                }
                cout <<numero;
                if (numero==0){//arriba al final
                    reset=true;
                }
                
        }
                cout<< endl;
        }
        
    }
}