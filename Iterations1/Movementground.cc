#include <iostream>
using namespace std;
 
int main (){
    int n = 0 ;
    int w = 0;
    char  x;
    while (cin>>x){
        if (x=='n'){
            n=n-1;
        }
        else if (x=='s'){
            n=n+1;
        }
        if (x=='w'){
            w=w-1;
        }
        if (x=='e'){
            w=w+1;
        }
    }
    cout <<'('<<w<<','<<' '<<n<<')'<<endl;
}