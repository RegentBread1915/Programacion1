#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int x,y,z,r;
    cin>>x>>y;
    z=0;
    r=0;
    int mini = min(x,y);

    if (x<=0 or y<=0){// si es negatiu
          z=abs(x-y);
    }

    if (0<=x or 0<=y){// si es negatiu
          z=abs(x-y)+1;
    }

    if (x==y){// si es igual
        z=1;
    }

    while (!z==0){
        r=mini+r;
        cout<<r<<endl;
        z=z-1;
        r=r+1;
    }

}