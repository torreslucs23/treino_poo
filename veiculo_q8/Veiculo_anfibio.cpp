#include "Veiculo_anfibio.h"

using namespace std;


Veiculo_anfibio :: Veiculo_anfibio(string motor, double preco, int codigo_anfibio,
                        int rodas, double vel_maxima, int codigo_terrestre,
                        int capacidade, double comprimento, int codigo_aquatico, 
                        string cor, string marca, int ano): Veiculo(cor, marca, ano),
                        Veiculo_terrestre(rodas, vel_maxima, codigo_terrestre, cor, marca, ano),
                         Veiculo_aquatico(capacidade, codigo_aquatico, comprimento, cor, marca, ano){
                            this -> motor = motor;
                            this -> preco = preco;
                         }

string Veiculo_anfibio :: getMotor(){
    return this -> motor;
}

void Veiculo_anfibio :: setMotor(string motor){
    this -> motor = motor;
}

double Veiculo_anfibio :: getPreco(){
    return this -> preco;
}

void Veiculo_anfibio :: setPreco(double preco){
    this -> preco = preco;
}

int Veiculo_anfibio :: getCodigo_anfibio(){
    return this -> codigo_anfibio;
}

void Veiculo_anfibio :: setCodigo_anfibio(int codigo){
    this -> codigo_anfibio = codigo;
}