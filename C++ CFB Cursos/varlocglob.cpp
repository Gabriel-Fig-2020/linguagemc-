#include <iostream>
using namespace std;
int n1,n2;//variaceis globais 
int main(){

    int n3,n4;  //variaveis locais
    int res;
    int res2;
    n1 = 11;
    n2=3;
    n3=5;
    n4=2;
    res = n1+n2+n3+n4;
    res2 = n3%n2;
    cout << "soma total é: " << res;
    cout << "\n \n Resto 3/5: " << res2;

    return 0;
}