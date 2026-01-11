#include <stdio.h>
#include <stdlib.h>

//prototipo e definizione.
int **d_Ptr(const int n) {

int **dp = malloc(n * sizeof(int*));
if (dp == NULL) return(NULL); //controllo su malloc();

for (int k = 0; k < n; k++) {

dp[k] = malloc(sizeof(*dp[k]));
if (dp[k] == NULL) { //controllo su malloc();

for (int j = 0; j < k; j++) {

free(dp[j]);

}

free(dp);

return(NULL);

}

*dp[k] = (int)((k * 4) / 2) + 1; // numeri dispari.
printf("%d ", *dp[k]);
}

return(dp);
}

//prototipo e definizione.
void cleaning(int **d, int n) {

for (int i = 0; i < n; i++) {

free(d[i]);

}

free(d);

}


int main(void) {

const int m = 12;

int **double_Pointer = d_Ptr(m);
//controllo su malloc();
if (double_Pointer == NULL) return(1);


cleaning(double_Pointer, m);

return(0);
}