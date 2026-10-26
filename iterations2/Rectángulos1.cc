#include <iostream>
using namespace std;

int main (){
    int n,m;
    bool primero =true;
    while (cin>>n>>m){
        if(not primero){
             cout<<endl;
        }
        primero=false;
        
        int mod5 =(n+m)%5;//calcula el modul de la suma de n i m
        for (int j=0;j<n;j++){//columnas
            for(int i=0;i<m;i++){//filas
            cout<<mod5;
        }
        cout<< endl;
        }
        
    }
}