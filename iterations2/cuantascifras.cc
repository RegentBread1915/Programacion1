#include <iostream>
using namespace std;

 void decoder (int b,int n){
    int divisio,contador;
    contador=1;
    while (n>0){
        divisio=n/b;
        if (divisio !=0){
            contador++;
            }
        n=divisio;
        }
    cout<< contador<<endl;
    }

int main (){
    int b,n;
    while (cin >> b >> n){
        if(b>=2){
            decoder(b,n);
        }
    }

}