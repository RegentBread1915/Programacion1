#include <iostream>
using namespace std;

int main (){
    int n,i,j;
    cin >> n;
    i=1;
    while (i<=n){
        j=0;
        while (j<i){
            cout<<'*';
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}