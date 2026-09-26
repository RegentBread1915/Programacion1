#include <iostream>
using namespace std;



int main (){
    double a,b,c,d;//dono valors
    cin >> a >> b >> c >> d;//inputs a b c d
    
    
    if (a==c and d==b ){
        cout<< "="<<endl;
    }

    else if (a<=c and d<=b ){ // trobo totes les combinacions entre intervals
            cout << "2" << endl;//print el interval en questio
            
    }
    else if (c<=a and b<=d ){ // trobo totes les combinacions entre intervals
            cout << "1" << endl;//print el interval en questio
            
    }
    else{
        cout << "?" << endl;
            
    } 

   

    
}