#include <iostream>
using namespace std;

int main (){
    int x10=10;
    int n;
    cin >> n;
    int div10=10;
    int unitats1=n%x10;
    int suma;
    suma=unitats1;
    
   
    if(n>=10){
        while (x10<=n){//individualitza els digits  
        x10=x10*10;
        unitats1=((n%x10)-unitats1)/div10;
        div10=div10*10;
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