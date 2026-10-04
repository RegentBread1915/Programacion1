#include <iostream>
#include <algorithm>
using namespace std;

void euclides(int x,int y){
    int resto,mayor,menor;
    mayor=max(x,y);
    menor=min(x,y);


    
    while (menor!=0){
        resto =mayor%menor;
        mayor=menor;
        menor=resto;
    }
    cout<<"The gcd of "<<x<<" and "<<y<< " is "<< mayor <<'.'<<endl;
}

int main(){
    int x,y;
    cin>> x >>y;
    euclides(x,y);
    




}