#include <iostream>
using namespace std;
int n1,n2;//variaveis globais 
int main(){
    n1=0;
    n2=0;
    while(n2<20){
        n1+=2;
        cout << "\n\n Valor de n1 " << n1;
        n2 = n1;
    }

    return 0;
}