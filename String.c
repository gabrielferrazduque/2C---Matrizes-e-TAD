#include <stdio.h>
#include <stdlib.h>

typedef struct string {
    char caractere;
    struct string* prox;
} String;

// Declarações
int str_compara(String* str1, String* str2);
void str_concatena(String* destino, String* origem);

// Função auxiliar para criar uma String a partir de um literal
String* criaString(const char* texto) {
    if (texto == NULL || *texto == '\0') return NULL;
    String* inicio = NULL;
    String* atual = NULL;

    for (int i = 0; texto[i] != '\0'; i++) {
        String* novo = (String*) malloc(sizeof(String));
        novo->caractere = texto[i];
        novo->prox = NULL;

        if (inicio == NULL)
            inicio = novo;
        else
            atual->prox = novo;

        atual = novo;
    }
    return inicio;
}

// Função auxiliar para imprimir uma String
void imprimeString(String* str) {
    while (str != NULL) {
        printf("%c", str->caractere);
        str = str->prox;
    }
}

int main() {
    String* s1 = criaString("Ola");
    String* s2 = criaString(" Mundo");

    printf("Antes da concatenacao: ");
    imprimeString(s1);
    printf("\n");

    str_concatena(s1, s2);

    printf("Depois da concatenacao: ");
    imprimeString(s1);
    printf("\n");

    // Teste de comparação
    String* s3 = criaString("Ola Mundo");
    printf("Comparacao: %d\n", str_compara(s1, s3)); // Deve dar 0

    return 0;
}
float** matrizValorAbsoluto (int lin, int col, float** mat);
 float** matrizValorAbsoluto (int lin, int col, float** mat);
 

 return 1;  // str2 é menor
    return 0;  // iguais

}

void str_concatena(String* destino, String* origem) {
    if (destino == NULL) return;

    // Anda até o final da string destino
    while (destino->prox != NULL)
        destino = destino->prox;

    // Copia cada caractere da origem
    String* atualOrigem = origem;
    while (atualOrigem != NULL) {
        String* novo = (String*) malloc(sizeof(String));
        novo->caractere = atualOrigem->caractere;
        novo->prox = NULL;

        destino->prox = novo;
        destino = novo;
        atualOrigem = atualOrigem->prox;
    }
}       

return 0; 
