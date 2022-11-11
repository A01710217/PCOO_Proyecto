#include <string>
#include <iostream>

class Estructuras
{   
    //Atributos
    private:
        string tipo;
        string nombre;
        int vida;

    //Metodos
    public:
        Estructuras(string _tipo, string _nombre, int _vida){
        tipo = _tipo;
        nombre = _nombre;
        vida = _vida;
        }
        //Getters
        string getTipo() {
            return tipo;
        }
        string getNombre() {
            return nombre;
        }
        int getVida() {
            return vida;
        }
        //setters
        void setTipo(string _tipo) {
            tipo = _tipo;
        }
        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        void setVida(int _vida) {
            vida = _vida;
        }
        //Metodos de la clase
        void invocar(){
            cout<<"Estructura de tipo "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Vida: "<<vida<<endl;
        }
};
