#ifndef INVOCAR_H
#define INVOCAR_H

#include <iostream>
#include <vector>
using namespace std;

#include "Criatura.h"
#include "Hechizo.h"

class Invocar {
    private:
        vector<Criatura*> criatura;
        vector<Hechizo*> hechizo;

    public:
        // Constructores
        Invocar() {
        }
        // Getters
        vector<Criatura*> getCriatura() {
            return criatura;
        }
        vector<Hechizo*> getHechizo() {
            return hechizo;
        }
        
        //Métodos
        void agregarCriatura(Criatura* _criatura) {
            criatura.push_back(_criatura);
        }
        void invocarC() {

            for(int i = 0; i < criatura.size(); i++) {
                criatura[i]->invocarC();
            }

        }
        void agregarHechizo(Hechizo* _hechizo) {
            hechizo.push_back(_hechizo);
        }
        void invocarH() {

            for(int i = 0; i < hechizo.size(); i++) {
                hechizo[i]->invocarH();
            }

        }
};

#endif
