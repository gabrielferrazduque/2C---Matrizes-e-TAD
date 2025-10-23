   
    #include <stdio.h>
#include <stdlib.h>

/* Retorna uma nova matriz com os valores absolutos dos elementos */
float** matrizValorAbsoluto(int lin, int col, float** mat) {
    int i, j;
    float** nova = (float**) malloc(lin * sizeof(float*));
    if (nova == NULL) return NULL;

    for (i = 0; i < lin; i++) {
        nova[i] = (float*) malloc(col * sizeof(float));
        if (nova[i] == NULL) return NULL;

        for (j = 0; j < col; j++) {
            if (mat[i][j] < 0)
                nova[i][j] = -mat[i][j];
            else
                nova[i][j] = mat[i][j];
        }
    }

    return nova;
}

/* Exemplo de uso */
int main() {
    int i, j;
    int lin = 2, col = 3;

    /* Aloca matriz original */
    float** mat = (float**) malloc(lin * sizeof(float*));
    for (i = 0; i < lin; i++)
        mat[i] = (float*) malloc(col * sizeof(float));

    /* Preenche com valores de teste */
    mat[0][0] = -1.5; mat[0][1] = 2.0; mat[0][2] = -3.2;
    mat[1][0] = 4.5;  mat[1][1] = -5.1; mat[1][2] = 6.0;

    /* Cria a matriz de valores absolutos */
    float** absMat = matrizValorAbsoluto(lin, col, mat);

    /* Exibe resultado */
    printf("Matriz de valores absolutos:\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++)
            printf("%.2f ", absMat[i][j]);
        printf("\n");
    }

    /* Libera memória */
    for (i = 0; i < lin; i++) {
        free(mat[i]);
        free(absMat[i]);
    }
    free(mat);
    free(absMat); 
    struct string {
    char caractere;
    struct string *prox;
};
typedef struct string String;

    return 0;

}

    
     int str_compara(String* str1, String* str2) {  

 
    while (str1 != NULL && str2 != NULL) {
        if (str1->caractere < str2->caractere)
            return -1;
        else if (str1->caractere > str2->caractere)
            return 1;

        str1 = str1->prox;
        str2 = str2->prox;
    }

    /* Se uma acabou antes da outra */
    if (str1 == NULL && str2 == NULL)
        return 0;
    else if (str1 == NULL)
        return -1;  // str1 é menor
    else
        return 1;   // str1 é maior
}
