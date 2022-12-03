#ifndef CRIATURA_H
#define CRIATURA_H

#include <iostream>
#include <string>
using namespace std;

class Criatura {   
    //Atributos
    protected:
        string tipo;
        string nombre;
        string historia;
        int vida;
        int ataque;
        int daño;

    public:
        //Constructores
        Criatura(string _tipo, string _nombre, string _historia, int _vida, int _ataque, int _danno) {
            tipo = _tipo;
            nombre = _nombre;
            historia = _historia;
            vida = _vida;
            ataque = _ataque;
            daño = _danno;
        }

        //Getters
        string getTipo() {
            return tipo;
        }
        string getNombre() {
            return nombre;
        }
        string getHistoria() {
            return historia;
        }
        int getVida() {
            return vida;
        }
        int getAtaque() {
            return ataque;
        }
        int getDanno() {
            return daño;
        }

        //setters
        void setTipo(string _tipo) {
            tipo = _tipo;
        }
        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        void setHistoria(string _historia){
            historia = _historia;
        }
        void setVida(int _vida) {
            vida = _vida;
        }
        void setAtaque(int _ataque){
            ataque = _ataque;
        }
        void setDanno(int _danno){
            daño = _danno;
        }

        //Metodos de la clase
        virtual int calcularVida() = 0;
        virtual void invocarC(){
            cout<<"Soy "<<tipo<<endl<<"Mi nombre es "<<nombre<<endl<<"Vida: "<<vida<<endl<<"Ataque: "<<ataque<<endl;
        }
};

#endif
