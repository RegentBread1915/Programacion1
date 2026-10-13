#include <iostream>
using namespace std;

int main (){
    int x10=10;
    int n;
    cin >> n;
    int unitats1=n%x10;
    int suma;
    suma=0;
    int contador =1;

    if (n<10){
        suma =n;
    }

    if(n>=10){
          while (x10<=n){//individualitza els digits  
            if( contador%2 !=0){
                suma=unitats1+suma;//suma cada valor de dreta
        }
            unitats1=(n%(x10*10))/x10;
            x10=x10*10;
            contador++;
            
         }
         if( contador%2 !=0){
                suma=unitats1+suma;//suma cada valor de dreta
        }
    }
    if (suma%2 == 0){//si es par
        cout<<n <<" IS COOL"<< endl;
    }
    else if (suma%2 != 0) {// si no es par (impar)
        cout<<n <<" IS NOT COOL"<< endl;
    }

}