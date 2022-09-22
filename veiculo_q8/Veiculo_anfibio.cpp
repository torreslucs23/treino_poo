#include "Veiculo_anfibio.h"

using namespace std;


Veiculo_anfibio :: Veiculo_anfibio(string motor, double preco, 
                        int rodas, double vel_maxima,
                        int capacidade, double comprimento,
                        string cor, string marca, int ano): Veiculo(cor, marca, ano),
                        Veiculo_terrestre(rodas, vel_maxima, cor, marca, ano),
                         Veiculo_aquatico(capacidade, comprimento, cor, marca, ano){
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