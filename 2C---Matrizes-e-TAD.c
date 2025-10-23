#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float** matrizValorAbsoluto(int lin, int col, float** mat) {
    // Aloca uma nova matriz de float
    float** nova = (float**) malloc(lin * sizeof(float*));
    if (nova == NULL) return NULL; // Falha na alocação

    for (int i = 0; i < lin; i++) {
        nova[i] = (float*) malloc(col * sizeof(float));
        if (nova[i] == NULL) return NULL;

        for (int j = 0; j < col; j++) {
            nova[i][j] = fabs(mat[i][j]); // valor absoluto
        }
    }

    return nova; // retorna nova matriz
}
int main() {
    int lin = 2, col = 3;
    float** mat = (float**) malloc(lin * sizeof(float*));
    for (int i = 0; i < lin; i++)
        mat[i] = (float*) malloc(col * sizeof(float));

    // Preenche matriz com valores (positivos e negativos)
    mat[0][0] = -1.2; mat[0][1] = 2.5; mat[0][2] = -3.0;
    mat[1][0] = 4.1;  mat[1][1] = -5.6; mat[1][2] = 6.0;

    float** nova = matrizValorAbsoluto(lin, col, mat);

    // Imprime resultado
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            printf("%.2f ", nova[i][j]);
        printf("\n");
    }
    typedef struct string {
    char caractere;
    struct string* prox;
} String;



    // Libera memória
    for (int i = 0; i < lin; i++) {
        free(mat[i]);
        free(nova[i]);
    }
    free(mat);
    free(nova);

    return 0; 
   int str_compara(String* str1, String* str2) {
    while (str1 != NULL && str2 != NULL) {
        if (str1->caractere < str2->caractere)
            return -1;
        else if (str1->caractere > str2->caractere)
            return 1;

        str1 = str1->prox;
        str2 = str2->prox;
    }

    // Se uma terminou antes da outra
    if (str1 == NULL && str2 == NULL)
        return 0;  // Iguais
    else if (str1 == NULL)
        return -1; // str1 é menor
    else
        return 1;  // str1 é maior
}
 float** matrizValorAbsoluto (int lin, int col, float** mat);

} 

return 1; 
