#include <iostream>
using namespace std;

void base2 (int x,int y){
    int b2;
    b2=0;
    while (x>0){
        x=x/y;
        b2++;
    }
    cout<<"Base " <<y<<":"<<' '<<b2<<' '<<"cifras."<<endl;
}
void demas (int x ,int y,int z){
    while (z>=y){
        base2(x,y);
        y++;
    }
    
}

int main (){
    int x,z,y;
    y=2;
    cin>> x ;
    z=16;
    if ( x>=1 and x<=100000000 ){
        demas(x,y,z);
    }
}