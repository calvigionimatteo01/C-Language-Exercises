//Education Only --> DOUBLE POINTERS BASICS.
#include <stdio.h>

int main(void) {

//Livelli di indirezione.
char c = 'f';
char *q = &c;
char **qq = &q;

//qq --> q --> c

//Stampo il carattere a cui ho inizializzato
//la variabile CHAR c. 
printf("%c.\n", c); //f.
printf("%c.\n", *q); //f.
printf("%c.\n", **qq); //f.

printf("\n\n");

//Stampo gli indirizzi di memoria. 
printf("%p.\n", (void*)&c); //indirizzo di memoria di c
printf("%p.\n", (void*)q); //equivalente allo Statement precedente.
printf("%p.\n", (void*)qq); //questo è un diverso indirizzo di memoria.

return(0);
}