#include <iostream>
using namespace std;

int main (){
    char c,d;
    cin >>c >>d;

     if (c =='A' and d=='A' ){
        cout<<'-' <<endl;
    }
    if (c =='P' and d=='P' ){
        cout<<'-' <<endl;
    }
    if (c =='V' and d=='V' ){
        cout<<'-' <<endl;
    }

    

    if (c =='A' and d=='P' ){
        cout<<1 <<endl;
    }
    if (c =='P' and d=='A' ){
        cout<<2 <<endl;
    }

    if (c =='P' and d=='V' ){
        cout<<1 <<endl;
    }
    if (c =='V' and d=='P' ){
        cout<<2 <<endl;
    }

    if (c =='V' and d=='A' ){
        cout<<1 <<endl;
    }
    if (c =='A' and d=='V' ){
        cout<<2 <<endl;
    }

}