#include <iostream>
using namespace std;

int main (){
    int files,columnes;
    //PRE files >0 columnes > 0 y son naturals
    //POST Imprimeix un rectangle on la diagonal te 0s y la reste la distancia a la diagonal
    cin >>columnes>>files;
    int primer_digit=0;
    for(int j=0;columnes >j;j++){
        for (int i=0;files > i;i++){
            if (i >= j) {
                primer_digit = i - j;
            } else {
                primer_digit = j - i;
            }
            cout<<primer_digit % 10; 
        }
    cout << endl;

    }
}