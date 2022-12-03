#ifndef HECHIZO_CURACION_H
#define HECHIZO_CURACION_H

#include <iostream>
using namespace std;

#include "Hechizo.h"

class Hechizo_curacion : public Hechizo {
    //Atributos
    private:
        int cura;

    public:
        //Constructores
        Hechizo_curacion(string _tipo, string _nombre, string _historia, int _cura) :
        Hechizo(_tipo, _nombre, _historia){
            cura = _cura;
        }

        //Getters
        int getCura() {
            return cura;
        }
        
        //setters
        void setCura(int _cura) {
            cura = _cura;
        }
        
        //Metodos de la clase
        void curar(){
            cout<<"Curando"<<endl;
        }
        void invocarH(){
            cout<<"He sido invocado"<<endl;
            cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Hitoria: "<<historia<<endl<<"Curar: "<<cura<<endl;
        }
};

#endif
