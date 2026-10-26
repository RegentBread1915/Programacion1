#include <iostream>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;

    while (cin>>n>>m){
        double diferencia=0;
        if(n>=m){
            for(int i=m+1;i<=n;i++){
                diferencia+=1.0/i;
            }
            cout<<diferencia<<"\n";
        }
    }
}