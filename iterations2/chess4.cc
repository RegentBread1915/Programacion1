#include <iostream>
using namespace std;

int main (){
    int n;
    int sumablanca=0;
    int sumanegra=0;
    int sumatotal=0;
    char coins;
    cin>>n;

    for(int i=0;i<n;i++){//columnas
        for(int j=0;j<n;j++){//filas
            cin>>coins;
            if((i+j)%2==0){
                sumablanca+=coins-'0';
                }
            if((i+j)%2!=0){
                sumanegra+=coins-'0';
                }
            
            sumatotal=sumablanca-sumanegra;
            
        }
    
    }
    cout<<sumablanca<<'-'<<sumanegra<<" = "<<sumatotal<<endl;
}
