#include <iostream>
using namespace std;
 
int main(){
     int vetor[10];
     int i=0;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;
    vetor[7] = 80;
    vetor[8] = 90;
    vetor[9] = 100;
    //inteiro tem 4 bits, sizeof retorna 4 de tamanho p cada posição
    for(i;i<sizeof(vetor)/4;i++){
        cout << "\n valor: "<<vetor[i];
    }

    return 0;
}