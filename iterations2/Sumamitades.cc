#include <iostream>
#include <cmath>
using namespace std;

int contar (int n){
    if (n==0) return 1;
     int d=n;
     int contador_digit =0;
     while(d>0){
            d=d/10;
            contador_digit++;
            }
    return contador_digit;
}

int main (){
    long long n;
    long long pow31 =1LL << 31;
    //PRE nombre natural 0<=n<=2**31
    //POST si es parell suma les meitats y els compara si son major o menor o igual,si es senar imprimeix nada
    cin >> n;
    int d=n;
    if(0<=n and n<=pow31){
            int contador=contar (n);
            int meitat = contador /2;
            if (contador%2==0){

                    int suma_esquerra = 0;
                    for (int i=0;i<meitat;i++){
                    int m=d%10;
                    d=d/10;
                    suma_esquerra=suma_esquerra+m;
                }
                    int suma_dreta=0;
                for (int j=0;j<meitat;j++){
                    int m=d%10;
                    d=d/10;
                    suma_dreta=suma_dreta+m;
                }
                if (suma_dreta<suma_esquerra) cout <<suma_dreta<<" < "<<suma_esquerra<<endl;
                else if (suma_dreta>suma_esquerra) cout <<suma_dreta<<" > "<<suma_esquerra<<endl;
                else  cout <<suma_dreta<<" = "<<suma_esquerra<<endl;

            }
            else cout<<"nada"<<endl;
        
        
        }
    }
