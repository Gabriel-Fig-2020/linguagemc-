#include <iostream>
using namespace std;
int n1,n2;//variaceis globais 
int main(){
    n1=5;
    switch(n1){
        case 10:
            cout<<"n1 = 10";
            break;
        case 1:
            cout << "n1 = 0";
            break;
        default:
            cout << "Valor não encontrado";
    }
    return 0;
}