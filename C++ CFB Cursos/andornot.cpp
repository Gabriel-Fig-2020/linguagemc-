#include <iostream>
using namespace std;
 
int main(){
    int media = 8;
    int frequencia = 80;
    if(media > 5 && frequencia > 70){
        cout << "Aprovado";
    }else{
        cout << "Reprovado";
    }
    return 0;
    //or = ||
    int num = false;
    if( num == !true){
        cout << "Verdadeiro";
    }

}