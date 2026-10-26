#include <iostream>
using namespace std;



int main (){
    char n;
    string nstring;
    int producte=1;
    while (cin>>n){
        int integral=n-'0';
        nstring+=n;
        producte=integral*producte;
        cout<<"El producte dels digits de "<<nstring<<" es "<<producte<<endl;
        }
    }
    
