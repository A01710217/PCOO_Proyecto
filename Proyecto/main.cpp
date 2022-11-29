/*
Juego de Cartas.
*/

#include <iostream>
using namespace std;

#include "CriaturaY.h"
#include "CriaturaTB.h"
#include "Partida.h"
#include "Hechisos.h"

int main() {

    // Crear criaturas
    CriaturaY criaturaY1("Yermo", "Dave el muerto", "Murió por un disparo con una vala de Hg, no murio al instante" ,25, 10, 20);
    CriaturaTB criaturaTB1("Tierras Boscosas", "Cangrejo Herradura", "Un hermitaño de cuna, su sangre es letal" ,25, 10, 20);
    
    // Agregar criatura
    Partida p1;
    p1.agregarCriaturas(&criaturaY1);
    p1.agregarCriaturas(&criaturaTB1);

    p1.invocar();

    return 0;
}
