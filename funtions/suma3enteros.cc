#include <algorithm>
using namespace std;

int sum_min_max(int x, int y, int z){
    //PRE 3 numeros enters x y z
    int minim=min({x,y,z});
    int maxim=max({x,y,z});
    int suma =maxim+minim;
    return suma;
    //POST calcula la suma del maxim y minim de x,y,z

}