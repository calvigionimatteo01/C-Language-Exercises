//strcpy() fatta con malloc().

#include <stdio.h>
#include <stdlib.h>

//prototipo.
char* copiatura(const char *c);

int main(void) {

/*Creo una stringa a caso S[], 
creo un ptr a char e lo inizializzo
a copiatura(S). 
*/
char S[] = "Matteo Calvigioni";
char *s_copiata = copiatura(S);

if (s_copiata == NULL) {
printf("M_emory ALLOC_ation: FAILED !\n");
return(10);
}

//Mi aspetto 16 + 1 per la presenza del
//CARATTERE DI FINE STRINGA: '\0'.
printf("Lunghezza stringa: %zu.\n", sizeof(S));

//Esperimento (futile, già noto ...)
char *d = S;
printf("Dimensione del puntatore: %zu.\n", sizeof(d));
printf("Dimensione di char: %zu.\n", sizeof(*d));

printf("Stringa Copiata: %s.\n", s_copiata);

//Ricordo il free(). 
free(s_copiata);
return(0);
}

//definizione.
char* copiatura(const char *c) {

//Intanto, vediamo di calcolare L = lugnhezza stringa.

int L = 0;

while (*c != '\0') {
    L++;
    //Scorro banalmente la Stringa con la
    //aritmetica dei ptr.
    c++;
}
//Vogliamo mantenere il carattere
//di fine stringa nella Lunghezza.
L++;


//OK, ora devo ristabilire gli indici di c.
c -= (L - 1);

//Sfruttare malloc(), ORA è il punto chiave (!)
char *risultato = malloc(sizeof(char) * L);

if (risultato == NULL) {
printf("M_emory ALLOC_ation: FAILED !\n");
return NULL;
}

for (int i = 0; i < L; i++) {
risultato[i] = c[i];
}

return(risultato);
}