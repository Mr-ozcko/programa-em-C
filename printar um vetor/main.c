#include <stdio.h>

int main() {

    int vetor[] = {0,1,1,2,3,5};
    float vetor2[] = {1, 2, 3, 4, 5};
    int vetor3[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x;

        printf("printar o valor de um vetor \n");
        for (x=0; x<6 ; x++ ) {
            printf("%d\n", vetor[x]);
        }

        printf("printar o valor de um vetor com casa decima \n");
        for (x=0; x<5 ; x++ ) {
            printf("%.1f\n", vetor2[x]);
        }

        printf("printar somente valores pares de um vetor \n");
        for (x=0; x<12 ; x++ ) {
            if (vetor3[x] % 2 == 0) {
                printf("%d\n", vetor3[x]);
            }
            
        }

        printf("printar somente valores impares de um vetor \n");
        for (x=0; x<12 ; x++ ) {
            if (vetor3[x] % 2 == 0) {                
            } else {
                printf("%d\n", vetor3[x]);
            }
        }
    
    return 0;
}
