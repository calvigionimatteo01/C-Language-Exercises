#include <stdio.h>
#include <stdlib.h>

#define N 26
// 26 == numero di "lettere dell'alfabeto" 

int main(void) {

//alloco in HEAP il double_Pointer.
char **pp = malloc(N * sizeof(char*));
if (pp == NULL) return (1); //controllo su malloc();

//alloco in HEAP i puntatori dentro il
//double_Pointer.
for (int i = 0; i < N; i++) {

pp[i] = malloc(sizeof(char));
if (pp[i] == NULL) return(2); //controllo su malloc();

}

for (int i = 0; i < N; i++) {

*(pp[i]) = 'a' + i;
printf("%c ", *(pp[i]));

}

//Necessario fare dei free() ordinati. 
for (int i  = 0; i < N; i++) {

free(pp[i]);

}

free(pp);
return(0);
}