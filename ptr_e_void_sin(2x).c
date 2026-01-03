#include <stdio.h>
#include <math.h>

//Prototipo della funzione.
void sin_2theta(double theta, double *risultato);

int main() {

double x;
printf("Inserire un valore di x reale: ");
scanf("%lf", &x);

double rsltt;

//Invoco la funzione, conscio che mi serve un PTR
// come secondo parametro, dunque uso l'operatore &
// su di rsltt che è di tipo DOUBLE. Così, ottengo un 
//Indirizzo di Memoria e posso passarlo come PTR.

sin_2theta(x, &rsltt);

printf("sin(2x) = %lf\n", rsltt);

return 0;

}

//Definizione della funzione.
void sin_2theta(double theta, double *risultato) {
//Intendo usare un puntatore,
//risultato, per farlo puntare a 2cos(t)sin(t).

double i = sin(theta);
double j = cos(theta);
*risultato = 2 * j * i;

}