#include <iostream>
using namespace std;
int n1,n2;//variaceis globais 
int main(){
    n1 = 7;
    n2=7;
    string res;
    int media = (n1+n2)/2;
    (media >= 6) ? res = "Aprovado" : res = "Reprovado";    
    cout << res;
    return 0;
}