#include <iostream>
#include <string.h>
#include "Veiculo_aquatico.h"
#include "veiculos_terrestre.h"

#ifndef VEICULO_ANFIBIO_H
#define VEICULO_ANFIBIO_H


using namespace std;


class Veiculo_anfibio: public Veiculo_terrestre, public Veiculo_aquatico{
    private:
        string motor;
        double preco;
    public:
        Veiculo_anfibio(string motor, double preco, 
                        int rodas, double vel_maxima,
                        int capacidade, double comprimento,
                        string cor, string marca, int ano);
        
        string getMotor();
        void setMotor(string motor);

        double getPreco();
        void setPreco(double preco);
};





#endif 