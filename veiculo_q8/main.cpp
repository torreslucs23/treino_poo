#include <iostream>
#include "Veiculo_anfibio.h"

using namespace std;

//essa main é para testar a classe veiculo_anfibio

int main(){
    Veiculo_anfibio x("cavalos" , 30000, 4, 100, 4, 5, "azul", "ferrari", 2002);
    cout << x.getCor()<<endl;
    cout << x.getMotor()<<endl;
    cout << x.getVel_maxima()<<endl;
    cout << x.getComprimento()<<endl;
    cout << x.getCapacidade()<<endl;





    
    return 0;
}