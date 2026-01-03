#include <stdio.h>
#include <math.h>

#define L 30

/*
Copierò una stringa iniziale,
in un'altra stringa di destinazione
finale. Non userò strcpy() della libreria
string.h, però userò i PTR ed una funzione 
ausiliaria.
*/

//Prototipo della funzione.
void strcopiia(const char *str1, char *str2);

/*Perché "const char *str1" ? Perché leggo solo 
da quella stringa e non la modifico mai nella
mia funzione. Sicurezza, quindi.*/

int main() {

char iniziale[] = "Matteo C.";
char finale[L];

/*
Sempre utile: un Array, anche un Char - Array
(Stringa), non è altro che un PTR costante 
al suo primo elemento. 
*/

strcopiia(iniziale, finale);

//Stampo le due Stringhe per vedere se siano 
//uguali davvero.

printf("Stringa iniziale: %s\n", iniziale);
printf("Stringa finale: %s\n", finale);

return 0;

}

//Definizione della funzione
void strcopiia(const char *str1, char *str2) {

while (*str1 != '\0') {//'\0' == carattere di Fine Stringa. 

*str2 = *str1;
/*Scorro gli indirizzi di memoria, in modo
da puntare valori contigui della stringa
da cui copio.*/
str1++;
str2++;
}

*str2 = '\0'; //Carattere di Fine Stringa.
}