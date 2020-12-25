#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;
double divide(double, double);


double divide(double n1, double n2){
    if(n2==0){
        throw "Erro de divisao por 0";
    }
    return n1/n2;
    }


int main(){
    double n1, n2;
    n1=10;
    n2=0;
    vector<int>num(5);    

    try{
        // num.at(4)=10;
        // cout << num[4] << endl;
        cout<< "Saida" << divide(n1,n2);
    }catch(const char* e){
        cout << "Erro: "<< e ;
    }
    return 0;
}

