#include <iostream>
using namespace std;

void  majoria (int n){
    int conta,contb,contc,i;
    char character;
    i = 0;
    conta=0;
    contb=0;
    contc=0;

    while (i<n){
        cin >> character;
        if (character == 'a') conta++;//si el input es a incrementa 1 el contaodr de a i aixi amb els altres
        else if (character == 'b') contb++;
        else if (character == 'c') contc++;
        i++;
    }
    if (conta >= contb and conta >= contc){//si es major imprimeix el seguent majoria de a xrepeticio(ns)
        cout << "majoria de a" <<endl;
        cout << conta << " repeticio(ns)"<<endl;
        
       
    }
    else if (contb >= conta and contb >= contc){
        cout << "majoria de b" <<endl;
        cout << contb<< " repeticio(ns)"<<endl;
        
    }
    else if (contc >= contb and contc >= conta){
        cout << "majoria de c" <<endl;
        cout << contc<< " repeticio(ns)"<<endl;
    
    }
}



int main (){
    int n;
    cin >> n;
    if (n>=1){
        majoria (n);
    }
}