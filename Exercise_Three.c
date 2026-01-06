#include <stdio.h>
#define L 5

//PROTOTIPO
void dati(double *p, int lgt);

int main() {

double x[L] = {1.76, 2.21, 3.47, 4.12, 5.99};

/*Dichiaro un pointer a DOUBLE
e lo faccio puntare a x[0].
*/

double *p = x;

dati(p, L);

return 0;

}

//DEFINIZIONE
void dati(double *p, int lgt) {

double sum = 0;
double mean_AR = 0;

for (int k = 0; k < lgt; k++) {

sum += *(p + k);

}

mean_AR = (sum / lgt);

printf("Sum of elements: %lf.\n", sum);
printf("Arithmetic Mean of elements: %lf.\n", mean_AR);

}