#include <stdio.h>
#include <stdlib.h>

char **d_Ptr(int m) {

char **cc = malloc(m * sizeof(*cc));
if (cc == NULL) return(NULL); //primo controllo su malloc();

for (int k = 0; k < m; k++) {

cc[k] = malloc(2 * sizeof(*cc[k]));
if (cc[k] == NULL) { //secondo controllo su malloc();

for (int j = 0; j < k; j++) {

free(cc[j]);

}

free(cc);

return(NULL);

}

cc[k][0] = '/'; //simbolo di divisione
cc[k][1] = '\0'; //carattere di fine stringa

}

return(cc);
}

void spazzatura(int m, char **cc) {

for (int i = 0; i < m; i++) {

free(cc[i]);

}

free(cc);
}



int main(void) {

const int n = 110;

char **ee = d_Ptr(n);

for (int z = 0; z < n; z++) {

printf("%c ", ee[z][0]);

}

printf("\n\n");

spazzatura(n, ee);

return(0);
}