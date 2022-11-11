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
    Estructuras(string, string, int);
    void invocar();
    
};

Estructuras::Estructuras(string _tipo, string _nombre, int _vida){
    tipo = _tipo;
    nombre = _nombre;
    vida = _vida;
}


void Estructuras::invocar(){
    cout<<"Estructura de tipo "<<tipo<<endl<<"Nombre: "<<nombre<<endl<<"Vida: "<<vida<<endl;
}
