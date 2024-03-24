#include "Reina.h"
#include "Peon.h"
#include "IngresoDatos.h"
#include <iostream>
#include "Tablero.h"
using namespace std;

int main() {
    int nu, pos1_1,pos1_2,pos2_1,pos2_2;
    nu = 2;
    ifstream file("Tablero.txt");
    Tablero t;
    std::cout<<"\nIngrese la posicion del primer peon: \n";
    std::cin>>pos1_1;
    std::cin>>pos1_2;
    Peon peon1(1,pos1_1,pos1_2);
    std::cout<<"\nIngrese la posicion del segundo peon: \n";
    std::cin>>pos2_1;
    std::cin>>pos2_2;
    Peon peon2(pos2_1,pos2_2);

    int dimension=8;
    int **matriz = new int*[dimension];
    for (int i = 0; i < dimension; i++) {
        matriz[i] = new int[dimension];
    }

    t.leerMatriz(file, dimension, matriz);
    file.close();

//  	string linea;
//
//	t.escribirReina(linea,20,20,8);
//	system ("pause");
    if (peon1.puedenAtacarse(peon2)){
        std::cout<<"\nLos peones pueden atacarse\n";
    }else{
        std::cout<<"\nLos peones no pueden atacarse\n";
    }
    system("pause");

    for (int i = 0; i < dimension; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
