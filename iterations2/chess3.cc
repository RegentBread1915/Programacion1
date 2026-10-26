#include <iostream>
using namespace std;

int main (){
    int n;
    int suma=0;
    char coins;
    int k=0;
    cin>>n;

    for(int i=0;i<n;i++){//columnas
        for(int j=0;j<n;j++){//filas
            int m=(n-1)-(1*i);
            cin>>coins;
            if(k==j or m==j){
                suma+=coins-'0';
                }
        }
        k++;
    }
    cout<<suma<<endl;
}
