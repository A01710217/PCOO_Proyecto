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
    Hechisos(string, string);
    void invocar();
    
};

Hechisos::Hechisos(string _tipo, string _nombre){
    tipo = _tipo;
    nombre = _nombre;
}


void Hechisos::invocar(){
    cout<<"Hechizo creado en "<<tipo<<endl<<"Nombre: "<<nombre<<endl;
}
