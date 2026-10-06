#include <iostream>
using namespace std;

double interest (double c,double i,int t,string word){//calcula el interest
    //interest simmple
    i=(i/100);
    double contador = 1;
    double pre_compost = (1+i/1);
    double inv = (1+i/1);
    if (word=="simple"){
        double simple =(c*i*t)+c;
        return simple;
        }
    else if (word=="compound"){ //interest compost
        //double compost = c(1+i/1)**t //formula del interest compsot
        while(contador<t){
             pre_compost= pre_compost * inv;
            contador++;
            }
            double compost=c*pre_compost;
        return compost;
         }
    return 0;
    }




int main (){
    cout.setf(ios::fixed);
    cout.precision(4); //imprimeix els ultims 4 decimals
    double c,i;
    int t;
    string word;
    while (cin >> c >> i >> t >> word){//mira totes le varibles
        cout << interest ( c, i,t,word) <<endl;//imprimeix el resultat
        
    }
    return 0;
}