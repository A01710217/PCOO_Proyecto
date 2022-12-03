#ifndef HECHIZO_ATAQUE_H
#define HECHIZO_ATAQUE_H

#include <iostream>
using namespace std;

#include "Hechizo.h"

class Hechizo_ataque : public Hechizo {
    //Atributos
    private:
        int daño;

    public:
        //Constructores
        Hechizo_ataque(string _tipo, string _nombre, string _historia, int _danno) :
        Hechizo(_tipo, _nombre, _historia){
            daño = _danno;
        }

        //Getters
        int getDanno() {
            return daño;
        }
        
        //setters
        void setDanno(int _danno) {
            daño = _danno;
        }
        
        //Metodos de la clase
        void invocarH(){
            cout<<"He sido invocado"<<endl;
            cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Hitoria: "<<historia<<endl<<"Daño: "<<daño<<endl;           
        }
};

#endif
