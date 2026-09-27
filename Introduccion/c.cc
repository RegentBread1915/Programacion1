#include <iostream>
#include <algorithm>//per calcular el min i max
using namespace std;

int main(){
    int x,y,z;// valor inputs
    string A;//sera ABC
 
    cin >>x>>y>>z;
    cin >>A ;
    int menor = min({x, y, z});//trobar els nombres major menor i del mig ACB
    int mayor = max({x, y, z});
    int medio = (x+y+z)-mayor-menor;

    if (x<100 and y<100 and z<100){//ha de ser un digit menor que 100
        if( A=="ABC"  ){//combinacions de ABC CBA ...
            cout << menor <<' ' << medio <<' '  << mayor << endl; //resposta       
        }
        else if (A=="BAC" ){
            cout << medio <<' ' << menor <<' ' << mayor << endl;
        }
        else if (A=="CAB" ){
            cout << mayor <<' ' << menor <<' ' << medio << endl;
        }
        else if (A=="CBA" ){
            cout << mayor <<' ' << medio <<' ' << menor << endl;
        }
        else if (A=="BCA" ){
            cout << medio <<' ' << mayor <<' ' << menor << endl;
        }
        else if (A=="ACB" ){
            cout << menor  <<' ' << mayor <<' ' << medio << endl;
        }
    }
}