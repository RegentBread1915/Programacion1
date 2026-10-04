#include <iostream>
using namespace std;

void rectangle (double lenght ,double  width){
    double area;
    area=lenght*width;
    cout<<area<<endl;

}

void circle (double  radius){
    double area;
    area=3.14159265358979323846*radius*radius;
    cout<<area<<endl;

}
int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;

    double lenght, width,radius;
    string shape ;
    cin >>n;


    for (int i = 0;i<n;i++){
         cin>>shape;

    if (shape=="rectangle"){
         cin >> lenght >> width;
        rectangle(lenght,width);
        }
    if (shape=="circle"){
         cin >> radius;
        circle(radius);
        }       
    }

}