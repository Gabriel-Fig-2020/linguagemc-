#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> num, num2;
    int tam,i;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    tam=num.size();
    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    num2.insert(num2.end()-1,888);
    num2.erase(num2.end()-2);


    num.swap(num2);//troca de valores

    cout <<"Tamanho do vector: " << tam <<"\n";
    for(i=0;i<tam;i++){
        cout<<"  " <<num[i];
    }
    
        for(i=0;i<tam;i++){
        cout<<"  " <<num2[i];
    }
    //apagar elementos 
    while(!num2.empty()){
        num2.pop_back();
    }

    num2.clear();

    return 0;
}