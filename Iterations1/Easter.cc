#include <iostream>
using namespace std;

int main (){
    int any,k,x,b,c,q,p,y,z,n,e;
   
    while (cin>>any){
        bool interval = 1800<=any and any<=9999;
        k=any/100;
        x=any%19;
        b=any%4;
        c=any%7;
        q=k/4;
        p = (13 + 8 * k) / 25;
        y = ((15 - p + k - q) % 30 + 30) % 30;
        z = (19 * x + y) % 30;
        n = ((4 + k - q) % 7 + 7) % 7;
        e = (2 * b + 4 * c + 6 * z + n) % 7;
        if(interval){
            int D, M;

            if (z + e <= 9) {
                 D = 22 + z + e;
                 M = 3;
            }
             else if (z == 29 && e == 6) {
                 D = 19;
                 M = 4;
            }
             else if (z == 28 && e == 6 && x > 10) {
                 D = 18;
                 M = 4;
            }
            else {
                 D = z + e - 9;
                 M = 4;
            }
            cout << D <<'/'<<M<<endl;
        }

    }
}