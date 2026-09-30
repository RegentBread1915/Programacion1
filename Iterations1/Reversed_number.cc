#include <iostream>
using namespace std;

void residu (int x) {
    int res;
    res=x%2;
    cout<<res;
}
  
int main (){
    int x;

    cin>>x;

    if (x==0){
        cout<<x<< endl;
    }
    
    if (x>0){
        while (x!=0){
        residu(x);
        x=x/2 ;
    }
    cout<< endl;}
    
    
    
}