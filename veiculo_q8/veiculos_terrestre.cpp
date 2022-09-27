#include "veiculos_terrestre.h"


using namespace std;


Veiculo_terrestre::Veiculo_terrestre(){};

Veiculo_terrestre::Veiculo_terrestre(int rodas, double vel_maxima, int codigo_terrestre, string cor, 
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


int Veiculo_terrestre :: getCodigo_terrestre(){
    return this -> codigo_terrestre;
}

void Veiculo_terrestre :: setCodigo_terrestre(int codigo){
    this -> codigo_terrestre = codigo;
}

