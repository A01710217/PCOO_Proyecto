#include <string>
#include <iostream>

class Criaturas
{   
    //Atributos
    private:
        string tipo;
        string nombre;
        int vida;

    //Metodos
    public:
    Criaturas(string, string, int);
    void invocar();
    
};

Criaturas::Criaturas(string _tipo, string _nombre, int _vida){
    tipo = _tipo;
    nombre = _nombre;
    vida = _vida;
}


void Criaturas::invocar(){
    cout<<"Soy del "<<tipo<<endl<<"Mi nombre es "<<nombre<<endl<<"Vida: "<<vida<<endl;
}
