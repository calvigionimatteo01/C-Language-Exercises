#include <stdio.h>
#include <stdlib.h>

#define N 132

int main(void) {

int **pp = malloc(N * sizeof(int*));
if (pp == NULL) return(1);

for (int k = 0; k < N; k++) {

pp[k] = malloc(sizeof(*pp[k]));
if (pp[k] == NULL) return(2);
//MODULO 5.
*(pp[k]) = (k % 5);
printf("%d ", *(pp[k]));

}

//Faccio i dovuti free();

for (int k = 0; k < N; k++) {

free(pp[k]);

}

free(pp);

printf("\n\n");

return(0);
}