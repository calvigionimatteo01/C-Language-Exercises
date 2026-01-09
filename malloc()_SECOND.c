/*
malloc() ... inversione di 
stringa S[] di char di lunghezza 
arbitraria e sua copia in una nuova 
stringa Q[] sempre di char.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipo.
char* inverter(const char *S);

int main(void) {

char stringa[30] = "Matteo Calvigioni";

char *example = inverter(stringa);

if (example == NULL) {
printf("M_emory ALLOC_ation: FAILED.\n");
return(1111);
}

printf("Stringa invertita: %s.\n", example);

free(example);

return(0);
}

//definizione.
char* inverter(const char *S) {

int L = 0;

while (*S != '\0') {

L++;
S++;

}

//Conto, poi, anche '\0' == Carattere
//Di Fine Stringa.

L++;
S--; //Necessario, S deve puntare a prima di '\0'.

//Creo il ptr a char della dimensione
//corretta, con malloc(sizeof(char) * L).

char *Q = malloc(sizeof(char) * L);

//Controllo doveroso su malloc(); 
if (Q == NULL) {

printf("M_emory ALLOC_ation: FAILED.\n");
return(NULL);

}

//Sfruttiamo che *S sta puntando a prima
//del '\0'.

for (int k = 0; k < (L - 1); k++) {

*(Q + k) = *(S - k);

}

Q[L - 1] = '\0';

return(Q);
}