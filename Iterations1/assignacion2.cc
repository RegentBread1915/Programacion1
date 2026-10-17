#include <iostream>
using namespace std;

int main (){
    int d,n,t;//gasto ahorro semana
    cin >> d >> n >> t;
    int suma =n;
    int j=0;//comptador de cuantes setmanas amb € positius
    bool natural = d>=0 and n>=0 and t>=0;
    if (natural){
        for (int i=0;i<t;i++){//serveix per donar els inputs de t a a
            int a;
            cin >>a;//cuants € tenim en setmana a
            suma =(a + suma )-d;//calcula el valor total durant la setmana x
            if (suma >0){//si es negatiur
                j++;//el comptador augmenta 1
            }

        }
      cout <<j<<endl;//imprimeix les setmanas amb valors positius
    }

}