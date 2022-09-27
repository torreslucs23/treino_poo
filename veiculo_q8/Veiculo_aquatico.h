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
        int codigo_aquatico;
    public:
        Veiculo_aquatico(int capacidade,  double comprimento, int codigo_aquatico, string cor, string marca, int ano);

        int getCapacidade();
        void setCapacidade(int capacidade);

        double getComprimento();
        void setComprimento(double comprimento);

        int getCodigo_aquatico();
        void setCodigo_aquatico(int codigo);

};


#endif