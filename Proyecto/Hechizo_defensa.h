#ifndef HECHIZO_DEFENSA_H
#define HECHIZO_DEFENSA_H

#include <iostream>
using namespace std;

#include "Hechizo.h"

class Hechizo_defensa : public Hechizo {
    //Atributos
    private:
        int defensa;

    public:
        //Constructores
        Hechizo_defensa(string _tipo, string _nombre, string _historia, int _defensa) :
        Hechizo(_tipo, _nombre, _historia){
            defensa = _defensa;
        }

        //Getters
        int getDefensa() {
            return defensa;
        }
        
        //setters
        void setDefensa(int _defensa) {
            defensa = _defensa;
        }
        
        //Metodos de la clase
        void defender(){
            cout<<"Añadiendo defensa"<<endl;
        }
        void invocarH(){
            cout<<"He sido invocado"<<endl;
            cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Hitoria: "<<historia<<endl<<"Defensa: "<<defensa<<endl;
        }
};

#endif
