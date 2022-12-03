#ifndef HECHIZO_H
#define HECHIZO_H

#include <iostream>
using namespace std;

class Hechizo {   
    //Atributos
    protected:
        string tipo;
        string nombre;
        string historia;

    public:
        //Constructores
        Hechizo(string _tipo, string _nombre, string _historia) {
            tipo = _tipo;
            nombre = _nombre;
            historia = _historia;
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

        //setters
        void setTipo(string _tipo) {
            tipo = _tipo;
        }
        void setNombre(string _nombre) {
            nombre = _nombre;
        }

        void setHistoria(string _historia) {
            historia = _historia;
        }

        //Metodos de la clase
        void invocarH(){
            cout<<"Lanzando"<<endl;
            cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Hitoria: "<<historia<<endl;
        }
};

#endif
