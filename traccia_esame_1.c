#include <stdio.h>
#include <stdlib.h>

//prototipo e definizione.
int *crea_array(int n) {

int *p = malloc(n * sizeof(int));
if (p == NULL) return(1);

for (int i  = 0; i < n; i++) {

p[i] = i * i;

}

return(p);

}

int main(void) {

int n;
printf("Inserire un naturale n (>= 0): ");
scanf("%d", &n);

int *p;
p = crea_array(n);

for (int i = 0; i < n; i++){

printf("%d ", *(p + i));

}

free(p);

return(0);
}