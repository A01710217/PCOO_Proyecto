/*
Juego de Cartas.
*/

#include <iostream>
using namespace std;

#include "Criaturas.h"
#include "Estructuras.h"
#include "Hechisos.h"

int main() {
    Criaturas criatura1 = Criaturas("Yermo", "Dave el muerto", 25);
    criatura1.invocar();

    Estructuras estructura1 = Estructuras("Tierras boscosas", "Fuerte siempre verde", 100);
    estructura1.invocar();

    Hechisos hechiso1 = Hechisos("Tierras boscosas", "Sombra de intencion");
    hechiso1.invocar();

    return 0;
}
