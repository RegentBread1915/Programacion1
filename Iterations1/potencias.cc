#include <iostream>
using namespace std;

int main (){
    int a,b;
 
    while (cin>>a>>b){
        int mult= a;
        if (b>0){
            for (int i =1 ;b>i;i++){
            mult=a*mult;
                }
            cout << mult<< endl;
            }

        else if (b==0){
             cout << '1'<< endl;
            }
        }
    }
    