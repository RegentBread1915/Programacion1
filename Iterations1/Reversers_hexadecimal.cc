#include <iostream>
using namespace std;

char residu (int x) {
    int res;
    char s;
    res=x%16;

    if (res<10) s= '0'+res;
    if (res==10)  s = 'A';
    if (res==11)  s = 'B';
    if (res==12) s = 'C';
    if (res==13) s = 'D';
    if (res==14) s = 'E';
    if (res==15) s = 'F';
      
    return s;
}
  
int main (){
    int x;
    char s;

    cin>>x;

    if (x==0){
        cout<<x<< endl;
    }
    
    if (x>0){
        while (x!=0){
        s = residu(x);
        x=x/16 ;
        cout<<s;
        }
    cout<< endl;
    }
    
    
    
}