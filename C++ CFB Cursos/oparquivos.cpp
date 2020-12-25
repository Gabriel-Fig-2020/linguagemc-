#include <iostream>
#include <fstream>

using namespace std;

int main() {

    //ofstream, ifstream, fstream

    ofstream arquivo;

    arquivo.open("cfbcursos.txt");//cria o arquivo
    //arquivo.open("cfbcursos.txt", ios::app);//
    //com app n sobrescreve
    arquivo << "Hello World!\n\n";//entrada de dados 
    arquivo << "Luke i'm your father.";
    
    arquivo.close();


	return 0;
}
