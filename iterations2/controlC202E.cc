#include <iostream>
using namespace std;

void final (int n){
    int k=n-1;
    int m=0;
     while (k>m){
        cout<<'*';
        m++;
    }
    cout <<endl;

}

int main (){
    int n,i,j,m,k;
    j=1;
    k=1;
    cin>>n;
        while (n>j){
            m=1;
            i=n-(1*j);
             while (i!=0){
                cout<<'+';
                i=i-1;
                if(i==0){
                    cout <<'/';
                }
             }
            if(j>1){
                while (k>m){
                    cout<<'*';
                    m++;
            }
         }
        cout<<endl;
        j++;
        k++;
    }
    cout <<'/';
    final(n);
   
}
