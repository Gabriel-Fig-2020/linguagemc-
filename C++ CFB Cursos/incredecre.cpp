#include <iostream>
using namespace std;
 
int main(){

    int n1,n2;
    n1=0;
    n2=10;
    //dois modos de incrementar
    n1++; 
    n1+=n1; 
    //mesmo vale para decremento.
    cout << "n1= "<< n1 ;

    n2*=5;

    cout << "\n\nn2*5= "<< n2 ;

    //inversao de valores de variaveis
    n2=n2*(-1);
    cout << "\n\nn2=(n2 * -1) = "<< n2 ;
    //abaixo inverte momentaneamente
    cout << "\n\n-n2 = "<< -n2 ;
    n2= -n2;
    cout << "\n\nn2= -n2 = "<< n2 ;
    
    return 0;
}