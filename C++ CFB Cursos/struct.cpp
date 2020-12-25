#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int VelMax;
};

int main(){
    Carro car1;
    car1.nome="Relampago marquinhos";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.VelMax=350;
    cout <<"Nome: " <<car1.nome << "\n";
    cout <<"Cor: " <<car1.cor << "\n";
    cout <<"Potencia: " <<car1.pot << "\n";
    cout <<"Velocidade maxima: " <<car1.VelMax << "\n";
    return 0;
}