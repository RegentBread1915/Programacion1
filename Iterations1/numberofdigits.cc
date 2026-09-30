#include <iostream>
using namespace std;



int main (){
    int n,contador,save;
    cin >> n;
    save = n;
    contador=0;

  if (n!=0){
        while ( n>0){
        n=n/10;
        contador++;
    }
    cout <<"The number of digits of "<<save <<" is "<<contador <<'.'<<endl;
}
  else {
    cout <<"The number of digits of "<<save <<" is "<<'1'<<'.'<<endl;
    }
  }
