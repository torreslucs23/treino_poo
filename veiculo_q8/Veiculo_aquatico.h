#include <iostream>
#include <string.h>
#include "Veiculo.h"

#ifndef VEICULOS_AQUATICO_H
#define VEICULOS_AQUATICO_H

using namespace std;

class Veiculo_aquatico : virtual public Veiculo{
    private: 
        int capacidade;
        double comprimento;
    public:
        Veiculo_aquatico(int capacidade, double comprimento, string cor, string marca, int ano);

        int getCapacidade();
        void setCapacidade(int capacidade);

        double getComprimento();
        void setComprimento(double comprimento);

};


#endif