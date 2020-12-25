#include <iostream>
#include <string.h>
using namespace std;
void texto();
void soma(int n1, int n2 );
int main(){
    soma(15,5);
    texto();
    return 0;
}

void texto(){
    cout << "hello world";
}

void soma(int n1, int n2){
    cout <<"Soma dos valores: " << n1+n2 <<"\n";
    // return n1+n2;
}