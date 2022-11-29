#ifndef CRIATURATB_H
#define CRIATURATB_H

#include <iostream>
using namespace std;

#include "Criaturas.h"

class CriaturaTB : public Criaturas {
    //Atributos
    private:
        int daño;

    public:
        //Constructores
        CriaturaTB(string _tipo, string _nombre, string _historia, int _vida, int _ataque, int _danno) :
        Criaturas(_tipo, _nombre, _historia, _vida, _ataque){
            daño = _danno;
        }

        //Getters
        int getDanno() {
            return daño;
        }

        //setters
        void setDanno(int _danno){
            daño = _danno;
        }

        //Metodos de la clase
        int calcularVida(){
            return (vida - daño);
        }
        void ataque(){
            cout<<"Estoy atacando"<<endl;
        }
        void invocar(){
            cout<<"He sido invocado"<<endl;
            cout<<"Soy del "<<tipo<<endl<<"Mi nombre es "<<nombre<<endl<<"Historia: "<<historia<<endl<<"Vida: "<<vida<<endl;
        }
};

#endif
