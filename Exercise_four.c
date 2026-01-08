#include <stdio.h>

#define M 4

//prototipo
void invertire_array(char *p, int L);

int main() {

//Creo una Stringa.
char x[M] = {'c', 'd', 'e', '\0'};

//Creo un pointer a char che punta x[0].
char *p;
p = x;

//Stampo indirizzi di memoria notevoli.

printf("Memory address of p == %p.\n", (void*)p);
printf("(which, at the moment, is equal to)\n");
printf("Memory address of x[0] == %p.\n", (void*)x);

printf("\n");

//Stampo la Stringa.

printf("%s\n\n", x);


p = p + 3;
*p = 'f';
//x ORA È UN ARRAY, NON È PIÙ UNA STRINGA.
p = p - 3;

for (int k = 0; k < M; k++) {

printf("%c ", x[k]);

}

printf("\n");

invertire_array(p, M);

for (int k = 0; k < M; k++) {
printf("%c ", *(p + k));
}

printf("\n");


return 0;


}

//definizione
//INVERTIRE LAVORA SU ARRAY, NON STRINGHE (!).
void invertire_array(char *p, int L) {

char d;

for (int k = 0; k < (L/2); k++) {

d = *(p + k);
*(p + k) = *(p + L - k - 1);
*(p + L - k - 1) = d;

}

}