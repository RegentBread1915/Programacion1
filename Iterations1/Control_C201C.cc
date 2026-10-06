#include <iostream>
using namespace std;

int main(){
    int x,sequencia,contador;//imputs
    cin >> x;
    contador =0;//compta els valors divisibles
    while (cin>> sequencia){//sequencia de integrers
        
        if( sequencia% x == 0){ //si es divisible suma el contador
            contador++;
        }

    }
    cout<<contador <<endl;//imprimeix la resposta
}