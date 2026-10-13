#include <iostream>
using namespace std;

int main (){
    int n,i;
    i=0;
    cin>>n;
    cout <<"nombres que acaben igual que "<<n<<':'<<endl;
    int numero1 = n%1000;
    if (n>=100){
        while (cin>>n){
           int numero2 = n%1000;
           if (numero1 == numero2){
            cout <<n<<endl;
            i++;
           }

        }
    cout <<"total: "<<i<<endl;
    }
}