#include <iostream>
using namespace std;

int main(){
    int b,a,divisio,residu,ap;
    int suma =0;
    cin >>b;
 
    if (b>=2){
        while (cin>>a){
            ap=a;//guardo valor de a per al final
            while(a>0){
                divisio =a/b;
                residu=(a%b);
                suma +=residu;//sumo els residus que son els valors
                a=divisio;
            }
            cout<<ap<<": "<<suma<<endl;
            suma =0;//reinicia el valor de suma
        }
    }
}