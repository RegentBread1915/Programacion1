#include <iostream>
using namespace std;

int main(){
    int year,days,hours,minutes,seconds;//valors a int
    cin >>year  >> days >> hours >> minutes >> seconds;//inputs 
    year = year*365*3600*24;//calcular seconds en un any i mes
    days=days*24*3600;
    hours=hours*3600;
    minutes=minutes*60;
    seconds = year+days+hours+minutes+seconds;//calcular tots els seconds totals
    cout << seconds << endl;//output

}