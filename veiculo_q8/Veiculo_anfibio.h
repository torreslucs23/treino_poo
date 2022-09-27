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
        int codigo_anfibio;
    public:
        Veiculo_anfibio(string motor, double preco, int codigo_anfibio,
                        int rodas, double vel_maxima, int codigo_terrestre,
                        int capacidade, double comprimento, int codigo_aquatico,
                        string cor, string marca, int ano);
        
        string getMotor();
        void setMotor(string motor);

        int getCodigo_anfibio();
        void setCodigo_anfibio(int codigo);

        double getPreco();
        void setPreco(double preco);
};





#endif 