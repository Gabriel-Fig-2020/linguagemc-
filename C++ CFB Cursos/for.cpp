#include <iostream>
using namespace std;
int n1,y,i;//variaveis globais 
int main(){
    y=0;
    i=0;
    for(i,y;i<10;i++,y+=2){
        cout<<i <<"|"<< y <<"\n";
    }
 
    return 0;
}