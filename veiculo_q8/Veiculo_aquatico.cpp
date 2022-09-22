#include "Veiculo_aquatico.h"

using namespace std;


Veiculo_aquatico :: Veiculo_aquatico(int capacidade, double comprimento, 
    string cor, string marca, int ano): 
    Veiculo(cor, marca, ano){
        this -> capacidade = capacidade;
        this -> comprimento = comprimento;
}

int Veiculo_aquatico :: getCapacidade(){
    return this -> capacidade;
}

void Veiculo_aquatico :: setCapacidade(int capacidade){
    this -> capacidade = capacidade;
}

double Veiculo_aquatico :: getComprimento(){
    return this -> comprimento;
}

void Veiculo_aquatico :: setComprimento(double comprimento){
    this -> comprimento = comprimento;
}