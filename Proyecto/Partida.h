#ifndef Partida_H
#define Partida_H

#include <iostream>
#include <vector>
using namespace std;

#include "Criaturas.h"

class Partida {

    private:
        vector<Criaturas*> criaturas;
    public:
        // Constructores
        Partida() {
        }
        // Getters
        vector<Criaturas*> getCriaturas() {
            return criaturas;
        }

        // Setters
        
        //Métodos
        void agregarCriaturas(Criaturas* _criaturas) {
            criaturas.push_back(_criaturas);
        }
        void invocar() {

            for(int i = 0; i < criaturas.size(); i++) {
                criaturas[i]->invocar();
            }

        }
};

#endif
