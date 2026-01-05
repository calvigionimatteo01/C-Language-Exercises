#include <stdio.h>

#define N 2

int main() {

char x[N] = {'a', 'b'};

printf("Memory address of x[0]: %p\n", (void*)&x[0]);

printf("Memory address of x[0]: %p\n", (void*)x);

char *z = x;

printf("Memory address of x[0]: %p\n", (void*)z);

z++;

//Ripeto "stessa" procedura con secondo elemento array.

printf("Memory address of x[1]: %p\n", (void*)&x[1]);

printf("Memory address of x[1]: %p\n", (void*)z);

//Stampiamo qualche elemento del char - array... 
//Intanto riporto il ptr a puntare x[0].

z--;

for (int f = 0; f < N; f++) {

printf("x[%d] == %c.\n", f, x[f]);

printf("E anche: x[%d] == %c\n", f, *(z + f));

}

return 0;

}