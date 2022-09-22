#include <iostream>
#include <string.h>

#ifndef VEICULO_H
#define VEICULO_H

using namespace std;

class Veiculo{
    private:
        string cor;
        string marca;
        int ano;
    public:
        Veiculo(string cor, string marca, int ano);
        Veiculo();

        string getCor();
        void setCor(string c);

        string getMarca();
        void setMarca(string m);

        int getAno();
        void setAno(int ano);

};
#endif