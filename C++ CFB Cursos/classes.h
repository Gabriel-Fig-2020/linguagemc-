#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public: 
    int vel;
    int tipo;
    //qdo instancia objeto método construtor é chamado
    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);
private:
    std::string nome;
    int velMax;
    bool ligado;
    void setVelMax(int vm);
};

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

bool Veiculo::getLigado(){
    return ligado;
}

void Veiculo::setLigado(int l){
    if(l==1){
        ligado=true;
    }else{
        ligado=false;
    }
}
Veiculo::Veiculo(int tp){
    tipo = tp;
    if(tipo==1){
        nome="Carro";
        setVelMax(200);
        //VelMax=200;
    }else if(tipo==2){
        nome="Aviao";
        setVelMax(800);
        //VelMax=200;
    }else{
        nome="Navio";
        setVelMax(100);
        //VelMax=200;
    }
    setLigado(0);
    
}
#endif