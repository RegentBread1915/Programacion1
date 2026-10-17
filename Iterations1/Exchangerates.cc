#include <iostream>
#include <string>
using namespace std;



int main (){
     cout.setf(ios::fixed);
     cout.precision(4);
    double convert,diner;
    double sumaeur =0;
    cin >> convert;
    string  x;
    while (cin>>diner>>x){
           if (x=="USD"){
                double euro=diner/convert;
                sumaeur+=euro;
        }
            else if (x=="EUR"){
                sumaeur+=diner;
            }
        
        
    
    }
    double sumausd =sumaeur*convert;
    cout<<sumaeur<<" "<<sumausd<<endl;


}