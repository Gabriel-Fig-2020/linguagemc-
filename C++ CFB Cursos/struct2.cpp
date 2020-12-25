#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int VelMax;
    int vel;

    void insere(string stnome,string stcor,int stpotencia, int stvelmax){
        nome= stnome;
        cor= stcor;
        pot= stpotencia;
        VelMax= stvelmax;}

    void mostrar(){
        cout <<"Nome: " << nome << "\n";
        cout <<"Cor: " <<  cor << "\n";
        cout <<"Potencia: " <<pot << "\n";
        cout <<"Velocidade maxima: " <<VelMax << "\n";
    }
    void mudaVel(int mv){
        vel=mv;

        if(vel>VelMax) {
            vel=VelMax;
            }
        if(vel<0){
            vel=0;
             }
    }
};

int main(){
    Carro car1;
    car1.insere("Tornado", "Vermelho", 250, 300);   
    car1.mostrar();
    return 0;
}