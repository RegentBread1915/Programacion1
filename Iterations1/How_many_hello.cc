#include <iostream>
using namespace std;

int main (){
    int y;
    y=0;
    string x,hello;
    hello="hello";

    while ( cin >> x){
        if (x==hello){
        y++;
        }
    }
    cout << y << endl;
}