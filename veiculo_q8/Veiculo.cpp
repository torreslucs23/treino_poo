#include "Veiculo.h"




Veiculo::Veiculo(){
    this -> cor = "";
    this -> marca = "";
};

Veiculo::Veiculo(string cor, string marca, int ano){
    this -> cor = cor;
    this -> marca = marca;
    this -> ano = ano;
}


string Veiculo::getCor(){
    return this -> cor;
}

void Veiculo::setCor(string c) {
    this -> cor = c;
}

string Veiculo::getMarca(){
    return this -> marca;
}

void Veiculo::setMarca(string m){
    this -> marca = m;
}

int Veiculo::getAno(){
    return this -> ano;
}

void Veiculo::setAno(int ano){
    this -> ano = ano;
}