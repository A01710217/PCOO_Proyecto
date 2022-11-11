#include <string>
#include <iostream>

class Hechisos
{   
    //Atributos
    private:
        string tipo;
        string nombre;

    //Metodos
    public:
    Hechisos(string _tipo, string _nombre){
        tipo = _tipo;
        nombre = _nombre;
    }
        //Getters
        string getTipo() {
            return tipo;
        }
        string getNombre() {
            return nombre;
        }
        //setters
        void setTipo(string _tipo) {
            tipo = _tipo;
        }
        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        //Metodos de la clase
        void invocar(){
            cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl;
        }
};
