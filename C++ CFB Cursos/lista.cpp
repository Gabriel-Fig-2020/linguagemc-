#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> aula;
    int tam=10;

    for(int i=0; i<tam;i++){
        aula.push_front(i);
    }
    cout << "Tamanho da lista: " << aula.size() << "\n";
    tam=aula.size();
    for(int i=0; i<tam;i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }
    //cout << "Tamanho da lista: " << aula.size() << "\n";

    return 0 ;
}