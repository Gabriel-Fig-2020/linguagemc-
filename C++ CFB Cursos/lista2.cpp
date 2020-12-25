#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> aula;
    int tam;
    list<int>::iterator it;


    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it,3); // na posição 3 insert valor 0
    aula.insert(it,0);// na posição 3 insert valor 0
    aula.erase(--it);// passa posição ele remove elemento após


    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam=aula.size();
    aula.clear(); //remove elementos da lista
    //merge mescla duas listas

    // for(int i=0; i<tam; i++){
    //     cout << aula.front() << "\n";
    //     aula.pop_front();
    //  }

    cout << "\nTamanho da lista: " << aula.size() << "\n";
	return 0;

}