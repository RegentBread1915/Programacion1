#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    string inputletter;
    double inputnum,x,y,interes,capital,TAE,n,capital_actual,c;
    cin >> inputnum >> inputletter  ;
    x=0;
    y=0;
    n=0;
    c = 100;
    capital_actual = c;
    
    
    if (0<=inputnum and inputletter == "setmanal"){
        x=1;
        y=52;
        n=52;
        interes = (inputnum/100)/n;
        while (x<=y){
            capital_actual = (capital_actual*interes)+capital_actual;
            x++;
        }
        capital = capital_actual - c;
        TAE = 100*(capital/c);
        cout<< TAE << endl;

        
    }
    if (0<=inputnum and inputletter == "mensual"){
        x=1;
        y=12;
        n=12;
        interes = (inputnum/100)/n;
        while (x<=y){
            capital_actual = (capital_actual*interes)+capital_actual;
            x++;
        }
        capital = capital_actual - c;
        TAE = 100*(capital/c);
        cout<< TAE << endl;
    }
    if (0<=inputnum and inputletter == "trimestral"){
        x=1;
        y=4;
        n=4;
        interes = (inputnum/100)/n;
        while (x<=y){
            capital_actual = (capital_actual*interes)+capital_actual;
            x++;
        }
        capital = capital_actual - c;
        TAE = 100*(capital/c);
        cout<< TAE << endl;
    }
    if (0<=inputnum and inputletter == "semestral"){
        x=1;
        y=2;
        n=2;
        interes = (inputnum/100)/n;
        while (x<=y){
            capital_actual = (capital_actual*interes)+capital_actual;
            x++;
        }
        capital = capital_actual - c;
        TAE = 100*(capital/c);
        cout<< TAE << endl;
    }

}