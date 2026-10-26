#include <iostream>
using namespace std;

int main (){
    int n,contador;
    while (cin>>n){
        if(n>=1){
        contador=0;
            while(n!=1){
                if(n%2==0){
                    n=n/2;
                    contador++;
                }
                else if (n%2!=0){
                    n=(n*3)+1;
                    contador++;
                }
            }
            cout<<contador<<endl;
        }
    }
}
