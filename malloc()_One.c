//First ex. on malloc(). 

#include <stdio.h>
#include <stdlib.h>

#define L 5

int main(void) {

int x = 1;
int *ptr_1 = &x;

/*
Riprendo da dove avevo lasciato,
con la differenza tra sizeof(int)
ed sizeof(int *). Le stampo anche quà,
per sicurezza. 
*/
printf("Dimensione in byte di INT: %zu.\n", sizeof(x));
printf("Dimensione in byte di (INT *): %zu.\n", sizeof(ptr_1));

//esperimento in STACK - MEMORY, in HEAP - MEMORY.
//non funzionerebbe.  
int v_1[L] = {0, 1, 2, 3, 4};
printf("Dimensione in byte di INT[]: %zu.\n", sizeof(v_1));

//Comincio a lavorare in HEAP - MEMORY.
int *ptr_2 = malloc(sizeof(int));
int *v_2 = malloc(sizeof(int) * L);

//Prevengono eventuali errori di MEMORY ALLOCATION (malloc()).
//Controllo su malloc() (!)
if ((ptr_2 == NULL) || (v_2 == NULL)) {
printf("M_emory ALLOC_ation: FAILED !\n");
return 1;
}


//Stampo indirizzi di memoria;
// STACK MEMORY VS HEAP MEMORY. 

printf("Indirizzo di memoria di x in STACK: %p.\n", (void*)&x);
printf("Indirizzo di memoria di v_1 in STACK: %p.\n", (void*)v_1);
//L'indirizzo di memoria di ptr_1 equivale all'indirizzo di memoria
//di x in STACK, avendo inizializzato *ptr_1 = &x;
printf("Indirizzo di memoria di ptr_2 in HEAP: %p.\n", (void*)ptr_2);
printf("Indirizzo di memoria di v_2 in HEAP: %p.\n", (void*)v_2);

free(ptr_2);
free(v_2);

return(0);

}