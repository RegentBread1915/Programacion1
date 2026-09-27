#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    string inputletter;
    double inputnum,x,y,interes,capital,TAE,n,capital_actual,c;//asigno els valors
    cin >> inputnum >> inputletter  ;//inputs
    x=0;
    y=0;
    n=0;
    c = 100;
    capital_actual = c;
    
    
    if (0<=inputnum and inputletter == "setmanal"){
        x=1;
        y=52;
        n=52;//assigno n per setmanes en un any
        interes = (inputnum/100)/n;
        while (x<=y){//while per fe capital elevat a 52
            capital_actual = (capital_actual*interes)+capital_actual;//calcular el interes
            x++;//va augmentan fins igualar la y
        }
        capital = capital_actual - c;//calcular les ganancies
        TAE = 100*(capital/c);//calcular el TAE
        cout<< TAE << endl;// Print TAE

        
    }
    if (0<=inputnum and inputletter == "mensual"){
        x=1;
        y=12;
        n=12;//assigno n per messos en un any
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
        n=4;//assigno n per trimestres en un any
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
        n=2;////assigno n per semestres en un any
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