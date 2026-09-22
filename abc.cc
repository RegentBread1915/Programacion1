#include <iostream>
using namespace std;
//PRE x 
int main (){
        char x;//assignem x
        cin >> x;//input x

    if (x>='a' and x<='z'){//escull les minuscules
        if  (x=='a' or x=='e' or x=='i' or x=='o' or x=='u') {//escull les vocals
        cout<< "lowercase" << endl;//imprimeix lowercase
        cout<<"vowel"<<endl;//imprimeix vowels
        }
        else {
            cout<< "lowercase" << endl;//imprimeix lowercase
            cout<< "consonant" << endl;//imprimeix consonant
            }
    }

    else if (x>='A' and x<='Z'){
            if  (x=='A' or x=='E' or x=='I' or x=='O' or x=='U') {
        cout<< "uppercase" << endl;//imprimeix uppercase
        cout<<"vowel"<<endl;//imprimeix vowels
        }
        else {
            cout<< "uppercase" << endl;//imprimeix uppercase
            cout<< "consonant" << endl;//imprimeix consonant
            }
         
        }


}
//Post= { Imprimeix si x és vocal/consonant i majúscula/minúscula segons l'alfabet anglès
    // Si x no és una lletra de l'alfabet anglès, no imprimeix res. }