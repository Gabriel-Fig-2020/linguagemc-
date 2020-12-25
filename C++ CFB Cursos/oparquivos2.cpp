#include <iostream>
#include <fstream>

using namespace std;

int main() {

    //ofstream, ifstream, fstream

    ofstream arquivoS;

    arquivoS.open("cfbcursos.txt");

    arquivoS << "Hello World!\n\n";//
    arquivoS << "Luke i'm your father.";;

    arquivoS.close();

    ifstream arquivoE;
    string linha;
    arquivoE.open("cfbcursos.txt");
    if(arquivoE.is_open()){
        while(getline(arquivoE,linha)){
            cout << linha << endl;
        }
        arquivoE.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }


	return 0;
}
