#include <iostream>
using namespace std;

int main(){
    int n,contador,mult;
    cin >> n;//nombre natural
    contador=1;//nombre multiplicat

    while (contador<=n){//bucle
        mult = contador*n;
        cout <<n<<" x "<<contador<<" = "<<mult<<endl;//resposta
        contador++;

    }
}