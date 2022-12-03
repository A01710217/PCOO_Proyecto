/*
Cartas.
*/

#include <iostream>
using namespace std;

#include "CriaturaY.h"
#include "CriaturaTB.h"
#include "Hechizo_curacion.h"
#include "Hechizo_defensa.h"
#include "Hechizo_ataque.h"
#include "Invocar.h"

int main() {

    // Crear criaturas
    CriaturaY criaturaY1("Yermo", "Dave el muerto", "Murió por un disparo con una vala de Hg, no murio al instante" ,25, 10, 20);
    CriaturaTB criaturaTB1("Tierras Boscosas", "Cangrejo Herradura", "Un hermitaño de cuna, su sangre es letal" ,25, 10, 20);
    Hechizo_curacion hechizo_curacion("Tierras Boscosas", "La sabia de la vida eterna", "Desde hace lustros un árbol produce esta sabia", 10);
    Hechizo_defensa hechizo_defensa("Tierras Boscosas", "Sombra de intención", "Es un domo echo por los tejones mieleros", 25);
    Hechizo_ataque hechizo_ataque("Yermo", "Eroción deleterea", "Veneno de un escorpion herradura, letal para las criaturas", 30);

    // Agregar criatura
    Invocar p1;
    p1.agregarCriatura(&criaturaY1);
    p1.agregarCriatura(&criaturaTB1);
    p1.agregarHechizo(&hechizo_curacion);
    p1.agregarHechizo(&hechizo_defensa);
    p1.agregarHechizo(&hechizo_ataque);

    p1.invocarC();
    p1.invocarH(); 

    return 0;
}
