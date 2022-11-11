/*
Juego de Cartas.
*/

#include <iostream>
using namespace std;

#include "Criaturas.h"
#include "Estructuras.h"
#include "Hechisos.h"

int main() {
    Criaturas criatura1;
    criatura1.setTipo("Yermo");
    criatura1.setNombre("Dave el muerto");
    criatura1.setVida(25);
    
    criatura1.invocar();

    Estructuras estructura1;
    estructura1.setTipo("Tierras boscosas");
    estructura1.setNombre("Fuerte siempre verde");
    estructura1.setVida(100);

    estructura1.invocar();
    
    Hechisos hechiso1;
    hechiso1.setTipo("Tierras boscosas");
    hechiso1.setNombre("Sombra de intencion");

    hechiso1.invocar();

    return 0;
}
