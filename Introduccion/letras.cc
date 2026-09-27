#include <iostream>
using namespace std;
//PRE x
int main(){
    char x;// assignem x a char
    cin >> x;//assignem x com input


    if (x>='a' and x<='z'){
        x=toupper(x);//converteix la minuscula en maysucula
        cout << x << endl;//imprimeix
    }
    else if (x>='A' and x<='Z'){ 
        x=tolower(x);//converteix la maysucula en minuscula
        cout << x << endl;//imprimeix
    }

}
//POST if minuscula x es mayuscula if mayuscula x es minuscula