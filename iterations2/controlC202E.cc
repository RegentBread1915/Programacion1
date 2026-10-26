#include <iostream>
using namespace std;

void final (int n){//serveix quan el while principal s'acaba i imprimeix les ultimes ***
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
            i=n-(1*j);//per poder començar amb una menys i va disminuint
             while (i!=0){
                cout<<'+';//imprimeix les +
                i=i-1;
                if(i==0){//al final de la sequencia posa una /
                    cout <<'/';
                }
             }
            if(j>1){
                while (k>m){
                    cout<<'*';//imprimeix las *
                    m++;//m augmenta fins que el while principal s acaba
            }
         }
        cout<<endl;
        j++;
        k++;
    }
    cout <<'/';
    final(n);
   
}
