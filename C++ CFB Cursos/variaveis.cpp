#include <iostream>

using namespace std;

int main(){
    //tipo nome;
    //tipo nome=valor;
    int vidas=0; //inteiro
    char letra='B';//'b'
    //char letra[2]=5.2;//'b' - vetores
    double decimal=5.2;//2,5
    float decimal2=5.2; //2,5 menor precisao
    bool vivo = 1; // true=verdadeiro / false=falso
    string nome="gabriel"; //"Hello"

    cout <<"Digite o numero de vidas";
    cin >> vidas;
    cout <<"Digite uma letra";
    cin >> letra;
    cout <<"Digite o numero decimal";
    cin >> decimal;
    cout <<"Digite o nome";
    cin >> nome;

    cout << vidas << "\n" ;
    cout << letra << "\n" ;
    cout << decimal << "\n" ;
    cout << decimal2 << "\n" ;
    cout << nome << "\n" ;
    
    return 0;
    }
