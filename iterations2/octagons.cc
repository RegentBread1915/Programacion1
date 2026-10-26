#include <iostream>
using namespace std;

void base (int n){
    int i=0;
    for (int k=1;k<n;k++){
        cout <<' ';
    }
    while (n>i){
            cout<<'X';
            i++;
        }
    cout <<endl;
}

void  medio(int n){
    int nincremento = n-2;//n de veces que incrementa
    int i = 0;
    int incremento = n;//augmenta +1 para imprimir mas *
    while (nincremento>i){
        incremento+=2;
        int espacios = (n - 1) - (i + 1);//nombre de espacios 
        int k=0;
        while (espacios>k){//
            cout<<' ';
            k++;
        }
        int j =0;
        while (incremento>j){
            cout<<'X';
            j++;
        }
        cout <<endl;
        i++;
       
    }

    incremento+=2;
    int s=0;
    while (n>s){//la parte del medio
         int j=0;
         while (incremento>j){
            cout<<'X';
            j++;
    }
        cout<<endl;
        s++;
    }
    i =0;
     while (nincremento>i){//lo mismo que en el incremento pero alrevez
        incremento=incremento-2;
        int espacios =  (i + 1);//numero de espacios
        int k=0;
        while (espacios>k){
            cout<<' ';
            k++;
        }
        int j =0;
        while (incremento>j){
            cout<<'X';
            j++;
        }
        cout <<endl;
        i++;
       
    }

}


int main (){
    int n;
    while (cin>>n){
        base (n);
        medio (n);
        base(n);
        cout <<endl;
    }
}
