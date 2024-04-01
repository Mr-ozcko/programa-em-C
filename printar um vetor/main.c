#include <stdio.h>

int main() {

    int vetor[] = {0,1,1,2,3,5};
    float vetor2[] = {1, 2, 3, 4, 5};
    int x;

        for (x=0; x<6 ; x++ ) {
            printf("%d\n", vetor[x]);
        };

        for (x=0; x<5 ; x++ ) {
            printf("%.1f\n", vetor2[x]);
        };
    
    return 0;
}