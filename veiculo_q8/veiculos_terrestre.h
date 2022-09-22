#include <iostream>
#include <string.h>
#include "Veiculo.h"

#ifndef VEICULOS_TERRESTRE_H
#define VEICULOS_TERRESTRE_H

using namespace std;


class Veiculo_terrestre : virtual public Veiculo{
    private:
        int rodas;
        double vel_maxima;
        
    
    public:
        Veiculo_terrestre();
        Veiculo_terrestre(int rodas, double vel_maxima, string cor, string marca, int ano);

        int getRodas();
        void setRodas(int rodas);

        double getVel_maxima();
        void setVel_maxima(double vel_maxima);

        

};
#endif