#include <iostream>
using namespace std;

int main (){
    double a,b,c,d;//dono valors
    cin >> a >> b >> c >> d;//inputs a b c d
    
    if (d<a or b<c){ 
            cout << "[" <<"]" << endl;
    }

    else if (c>=a  and d<=b ){ // trobo totes les combinacions entre intervals
            cout << "[" <<c <<","<<d <<"]" << endl;//print el interval en questio
            
    }
    else if (a <= c and b >= c and b <= d ){ // trobo totes les combinacions entre intervals
            cout << "[" <<c <<","<<b <<"]" << endl;//print el interval en questio

    }
    else if (c<=a and a<=d and d<=b ){ 
            cout << "[" <<a <<","<<d <<"]" << endl;//no funciona en las combos -1 2 1 2 ,20 30 10 40,10 20 10 20,
        
    }
    else if (a <= c and c<=b and b<=d ){ 
            cout << "[" <<c <<","<<b <<"]" << endl;
    }

    else if (a<=c and d <= b ){ 
            cout << "[" <<c <<","<<d <<"]" << endl;
          
            
    }
    else if (c<=a and b <= d){ //si s'afageix mes 1 no funciona
            cout << "[" <<a <<","<<b <<"]" << endl;
            
    }


    
}