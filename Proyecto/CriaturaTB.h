#ifndef CRIATURATB_H
#define CRIATURATB_H

#include <iostream>
using namespace std;

#include "Criatura.h"

class CriaturaTB : public Criatura {
    //Atributos
    public:
        //Constructores
        CriaturaTB(string _tipo, string _nombre, string _historia, int _vida, int _ataque, int _danno) :
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
            cout<<"Vengo de las "<<tipo<<endl<<"Mi nombre es "<<nombre<<endl<<"Historia: "<<historia<<endl<<"Vida: "<<vida<<endl;
        }
};

#endif
