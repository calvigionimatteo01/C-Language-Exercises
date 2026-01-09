/*
Intro to sizeof() OPERATOR.
*/

#include <stdio.h>

int main(void) {

//Vediamo la dimensione in BYTE,
//ricordando che 1 BYTE = 8 BIT,
//dei 4 tipi di dato scalari non derivati.


int i = 1;
char c = 'a';
float f = 3.1415;
double d = 2.71828;

//sizeof(X) ~> size_t quindi serve "%zu" come PLACEHOLDER.

printf("La dimensione di int è: %zu.\n", sizeof(i));
printf("La dimensione di char è: %zu.\n", sizeof(c));
printf("La dimensione di float è: %zu.\n", sizeof(f));
printf("La dimensione di double è: %zu.\n", sizeof(d));

//Nota per le modifiche alle variabili dei vari tipi di dato
//con i ptr. Non cambia la memoria da loro occupata (!)

int *p = &i;
*p = i++;

printf("Non cambia la dimensione di *p(int): %zu.\n", sizeof(*p));

printf("MAGIA con sizeof(p): 4 != %zu.\n", sizeof(p));

return(0);

}