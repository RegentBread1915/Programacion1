#include <iostream>
#include <iomanip>
using namespace std;


int main (){
    int h,m,s;//valors a int
    cin >> h >> m >> s;//inputs
    s++;
    if (s==60){
        s=0;
        m=m+1;
    }
    if (m==60){
        m=0;
        h=h+1;
    }
    if (h==24){
        h=0;
    }
   
    if (h>=0 and m>=0 and s>=0){
        
        cout << setfill('0')
        <<setw(2)<< h <<':'
        <<setw(2) << m<<':' 
        <<setw(2) << s << endl;
    }
    
}