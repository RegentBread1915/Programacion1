
#include <cmath>
using namespace std;

double dist_or (double x,double y){
    //PRE reb les cordenadas en real x y
    double pow_x=pow(x,2);
    double pow_y=pow(y,2);
    double operacio = sqrt(pow_x+pow_y);
    return operacio;
    //POST es calcula el modul de x y i es retorna el valor
}