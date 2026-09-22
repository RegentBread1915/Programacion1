#include <iostream>
using namespace std;


int main () {
    int x , y ,z ;
    cin >>x >>y >>z;

    if (z > x and x < y){
        cout <<x << endl ;
        return 1;
    }
    else if (x > y and y < z){
        cout <<y << endl ;
        return 1;
    }
    else if (x > z and z < y){
        cout <<z << endl ;
        return 1;
    }
    else if (x == y or y == z){
        cout <<y << endl ;
        return 1;
    }
    else if (x == z or z == y){
        cout <<z << endl ;
        return 1;
    }

}