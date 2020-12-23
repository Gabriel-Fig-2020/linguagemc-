#include <iostream>
using namespace std;
 
int main(){
    //int num=10;
    //char cpc='s';
    // if(num==10){
    //     cout << "Verdadeiro";
    // }else{
    //     cout << "Falso";
    // }
    int nota1, nota2, media;
    char opc;
    cout <<"Digite valor da nota 1: \n ";
    cin >> nota1;
    cout <<"Digite valor da nota 2: \n ";
    cin >> nota2;
    media = (nota1+nota2)/2;
    if(media>=5){
        cout << "Aluno Aprovado";
    }else{
        cout << "Aluno reprovado";
    }
    return 0;
}