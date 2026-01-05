#include <stdio.h>
#include <math.h>

//PROTOTIPO FUNZIONE.
void lim_a_Allan(double a);


int main() {

double a;

printf("Inserire la base reale: ");
scanf("%lf", &a);

lim_a_Allan(a);

return 0;
}


//DICHIARAZIONE FUNZIONE.
void lim_a_Allan(double a) {

double x;

if (a > 1) {
x = INFINITY;
printf("Il limite di a^n per n ~> INFINITY è: %lf", x);
}
else if (a == 1) {
x = 1;
printf("Il limite di a^n per n ~> INFINITY è: %lf", x);
}
else if (a < 1 && a > -1) {
x = 0;
printf("Il limite di a^n per n ~> INFINITY è: %lf", x);
}
else if (a <= -1) {
printf("Il limite di a^n per n ~> INFINITY non esiste.\n");
}
}