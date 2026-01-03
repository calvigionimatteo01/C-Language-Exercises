#include <stdio.h>
#define MC 10

//Prototipo delle 2 funzioni.
void analisi(int *a, int n);
void inversione(int *a, int n);

int main() {

    int v[MC] = {145, 218, 356, 499 , 576, 614, 734, 801, 999, 1005};

    printf("Analisi del nostro array:\n");
    analisi(v, MC);

    printf("\nOra inverto l'array.\n");
    inversione(v, MC);

    printf("\nAnalisi dell'array ribaltato:\n");
    analisi(v, MC);

    return 0;
}

//Dichiarazione delle 2 funzioni. 

void analisi(int *a, int n) {
    int somma = 0;
    int pari = 0;
    int dispari = 0;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
        somma = somma + a[i];

        if (a[i] % 2 == 0) {
            pari++;
            }
        else {
            dispari++;
            }
    }
    printf("\nSomma = %d", somma);
    printf("\nMedia = %.4f\n", (double)somma / n);
    printf("\nPari = %d, Dispari = %d\n", pari, dispari);
}

void inversione(int *a, int n) {
    for (int i = 0; i < n / 2; i++) {
        //Torna il classico Switch di 2 variabili.
        int aux;
        aux = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = aux;
    }
}
