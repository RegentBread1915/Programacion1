#include <iostream>
using namespace std;

int main() {
    int n,h,m,s;
    cin >> n;
    h=n/3600;
    m= (n%3600)/60;
    s = n%60;
    if (n>=0){
        cout << h <<" "<<m<<" "<<s <<endl;
    }
}