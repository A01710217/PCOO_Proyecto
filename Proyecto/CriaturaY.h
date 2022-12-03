#ifndef CRIATURAY_H
#define CRIATURAY_H

#include <iostream>
using namespace std;

#include "Criatura.h"

class CriaturaY : public Criatura {
    //Atributos
    public:
        //Constructores
        CriaturaY(string _tipo, string _nombre, string _historia, int _vida, int _ataque, int _danno) :
        Criatura(_tipo, _nombre, _historia, _vida, _ataque, _danno){
            
        }

        //Metodos de la clase
        int calcularVida(){
            return (vida - daño);
        }
        void atacar(){
            cout<<"Estoy atacando"<<endl;
        }
        void invocarC(){
            cout<<"He sido invocado"<<endl;
            cout<<"Soy del "<<tipo<<endl<<"Mi nombre es "<<nombre<<endl<<"Historia: "<<historia<<endl<<"Vida: "<<vida<<endl;
        }
};

#endif
