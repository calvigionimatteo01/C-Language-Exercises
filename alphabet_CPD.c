#include <stdio.h>
#include <stdlib.h>

//prototipo e definizione.
char **crea_alfabeto(int n) {

char **pp = malloc(n * sizeof(char*));
if (pp == NULL) return(NULL); //controllo su malloc();

for (int i = 0; i < n; i++) {

/*il double_pointer contiene
stringhe da 2 CHAR: una lettera
dell'alfabeto ed il '\0'.
*/

pp[i] = malloc(sizeof(char) * 2);

//controllo su mallloc();
if (pp[i] == NULL) {

for (int j = 0; j < i; j ++) {

free(pp[j]);

}

free(pp);
return(NULL);

}


pp[i][0] = 'a' + i;
pp[i][1] = '\0';

}

return(pp);
}

//prototipo e definizione.
void stampa_alfabeto(char **v, int n) {

for (int i  = 0; i < n; i++) {

printf("%c\n", v[i][0]);

}
}

//prototipo e definizione.
void distruggi_alfabeto(char **v, int n) {

for (int k = 0; k < n; k++) {

free(v[k]);

}

free(v);
}

int main(void) {

const int m = 26;

char **qq = crea_alfabeto(m);

stampa_alfabeto(qq, m);

distruggi_alfabeto(qq, m);

return(0);
}