#include <iostream>
using namespace std;

int main (){
    double a,b,c,d;//dono valors
    cin>> a >> b >> c >>d;//inputs a b c d


    
    if (a==c and b==d){// trobo totes les combinacions entre intervals
        cout <<"="<<" , "<< "["<<a<<"," <<b <<"]" << endl;//print el interval en questio mes el simbol

    }
    else if (a<c and c<=b and b<d){
        cout <<"?"<<" , "<< "["<<c<<"," <<b <<"]" << endl;
    }

    else if (c<a and a<=d and d<b){
        cout <<"?"<<" , "<< "["<<a<<"," <<d <<"]" << endl;
    }
    else if (a<=c and d<=b){
        cout <<"2"<<" , "<< "["<<c<<"," <<d <<"]" << endl;
    }
    else if (c<=a and b<=d){
        cout <<"1"<<" , "<< "["<<a<<"," <<b <<"]" << endl;
    }
    else {
        cout <<"?"<<" , "<< "[" <<"]"<<endl;
    }



}