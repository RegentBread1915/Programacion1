#include <iostream>
using namespace std;

int main (){
        char x;
        cin >> x;

    if (x>='a' and x<='z'){
        if  (x=='a' or x=='e' or x=='i' or x=='o' or x=='u') {
        cout<< "lowercase" << endl;
        cout<<"vowel"<<endl;
        }
        else {
            cout<< "lowercase" << endl;
            cout<< "consonant" << endl;
            }
    }

    else if (x>='A' and x<='Z'){
            if  (x=='A' or x=='E' or x=='I' or x=='O' or x=='U') {
        cout<< "uppercase" << endl;
        cout<<"vowel"<<endl;
        }
        else {
            cout<< "uppercase" << endl;
            cout<< "consonant" << endl;
            }
         
        }


}