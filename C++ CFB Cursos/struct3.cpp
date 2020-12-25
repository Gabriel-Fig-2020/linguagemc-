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
        cout <<"Velocidade maxima: " <<VelMax << "\n \n";
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
    Carro *carros = new Carro[5];
    Carro car1,car2,car3,car4,car5;
    
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tornado", "Vermelho", 300,200);
    carros[1].insere("Relampago", "preto", 310,220);
    carros[2].insere("Marquinhos", "fosco", 330,250);
    carros[3].insere("top", "Verde", 340,290);
    carros[4].insere("fera", "Amarelo", 350,280);
    for(int i=0; i<5; i++){
        carros[i].mostrar();
    }
    return 0;
}