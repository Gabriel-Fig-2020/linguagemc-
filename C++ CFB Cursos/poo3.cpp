#include <iostream>
#include "classes.h"
using namespace std;

int main(){
    Veiculo *v1 = new Veiculo(2);
    v1 -> setLigado(1);
    cout << v1 -> getVelMax() << "\n\n";
    cout << v1 -> getLigado();
    return 0;
}
