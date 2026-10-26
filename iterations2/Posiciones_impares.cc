#include <iostream>
#include <cmath>
using namespace std;



int main (){
    long long n;
    //PRE nombre natural n 0<n<2**31
    //POST imprimeix dues linia,la primera es la suma dels n en posicio senar y despres els pars y la segona si una es multiple de l altre
    long long pow31 = 1LL <<31;
    cin >>n;
    int copia_n=n;
    
    if (0<n and n<pow31){
        int mod_n ;
        int contador=0;
        int suma_senar =0;
        int suma_parell =0;
        while (copia_n>0){
            //PRE copia_n agafa els valors de n
            mod_n=copia_n%10;
            copia_n=copia_n/10;
            contador++;
            if (contador%2==0) {
                suma_parell +=mod_n;
            }
            else{
                suma_senar +=mod_n;
            } 
            //POST acabem amb la suma dels digits en base si el ordre es senar o parell suma_parell suma_senar
        }
        cout << suma_senar<<' '<< suma_parell<<endl;
        if (suma_senar==0 ){
            cout <<suma_senar<<" = "<<suma_senar<<" * "<<suma_parell<<endl;
        }
        else if (suma_parell%suma_senar==0 ){
            int divisio;

            divisio =suma_parell/suma_senar;
            cout <<suma_parell<<" = "<<divisio<<" * "<<suma_senar<<endl;
        }
        else if (suma_senar%suma_parell==0){
            int divisio;
            divisio =suma_senar/suma_parell; 
            cout <<suma_senar<<" = "<<divisio<<" * "<<suma_parell<<endl;
        }
        
        else cout<<"ninguna"<<endl;
        

    }


}