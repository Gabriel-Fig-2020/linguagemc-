#include <iostream>
#include <string.h>
using namespace std;
 //argc = qtdade de parametros informados
 //argv ponteiro
int main(int argc, char *argv[]){
    // cout << argv[0] << "\n\n";

    if(argc > 1){
        
    if(!strcmp(argv[1], "sol")){
        cout << "Vou ao clube \n\n";
    }else if(!strcmp(argv[1],"nublado")){
        cout << "Vou ao cinema \n\n";
    }else{
        cout << "Vou ficar em casa";
    }
    }

    return 0;
}