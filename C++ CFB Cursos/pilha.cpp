#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n";
    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Nova carta do topo: " << cartas.top() << "\n";
    cartas.pop();
    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";
    cartas.pop();
    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";
    cartas.pop();
    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    //empty para saber se pilha está vaia
    return 0;
}