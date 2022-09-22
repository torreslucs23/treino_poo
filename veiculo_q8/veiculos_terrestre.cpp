#include "veiculos_terrestre.h"


using namespace std;


Veiculo_terrestre::Veiculo_terrestre(){};

Veiculo_terrestre::Veiculo_terrestre(int rodas, double vel_maxima, string cor, 
string marca, int ano) : Veiculo(cor, marca, ano){
    this -> rodas = rodas;
    this -> vel_maxima = vel_maxima;

}

int Veiculo_terrestre :: getRodas(){
    return this -> rodas;
}

void Veiculo_terrestre :: setRodas(int rodas){
    this -> rodas = rodas;
}

double Veiculo_terrestre :: getVel_maxima(){
    return this -> vel_maxima;
}

void Veiculo_terrestre :: setVel_maxima(double vel_maxima){
    this -> vel_maxima = vel_maxima;
}


