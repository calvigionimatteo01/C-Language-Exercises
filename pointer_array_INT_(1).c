//Sugli Array di puntatori a INT - (INTRO).
#include <stdio.h>
#include <stdlib.h>
#define MC 4

int main(void) {

/*Introduco il double_Pointer, quindi
alloco memoria in HEAP per l'array di 
puntatori ad INT.
*/
int **pp = malloc(sizeof(int*) * MC);

for (int i = 0; i < MC; i++) {

*(pp + i) = (int*)malloc(sizeof(int));

/*È del tutto equivalente scrivere pp[k],
al posto di *(pp + k), ho solo scelto
la "notazione pointers" al posto della
"notazione brackets".
*/
}

*(pp[0]) = 0;
*(pp[1]) = 1;
*(*(pp + 2)) = 2;
*(*(pp + 3)) = 3;

for (int i = 0; i < MC; i++) {

printf("%d ", *pp[i]);

}

for (int j = 0; j < MC; j++) {

free(pp[j]);

}

free(pp);
return(0);
}