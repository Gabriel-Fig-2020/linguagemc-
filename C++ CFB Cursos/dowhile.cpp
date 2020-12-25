#include <iostream>
using namespace std;
int n1,n2;//variaveis globais 
int main(){
    n1=0;
    n2=20;
    do{
        n1+=2;
        cout << "\n\n Valor de n1 " << n1;
        n2 += n1;
    }while(n2<20);

    return 0;
}