#include <stdio.h>

//Creo una enumerazione.
enum LIVELLI {
BASSO = 5,
MEDIO = 15,
ALTO = 25
};

int main() {

//Dichiaro una variabile per
//l'interazione (enum) e la
//inizializzo a BASSO.
enum LIVELLI x;
x = BASSO;

printf("Livello basso: %d\n", x);

x = MEDIO;

printf("Livello medio: %d\n", x);

x = ALTO;

printf("Livello alto: %d\n", x);

return 0;

}