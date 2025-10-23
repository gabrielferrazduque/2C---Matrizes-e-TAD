#include <stdio.h>
#include <stdlib.h>

String* criaString(const char* texto) {
    if (*texto == '\0') return NULL;

    String* inicio = (String*) malloc(sizeof(String));
    String* atual = inicio;

    while (*texto) {
        atual->caractere = *texto;
        if (*(texto + 1) != '\0') {
            atual->prox = (String*) malloc(sizeof(String));
            atual = atual->prox;
        } else {
            atual->prox = NULL;
        }
        texto++;
    }
    return inicio;
}

void imprimeString(String* str) {
    while (str != NULL) {
        printf("%c", str->caractere);
        str = str->prox;
    }
    printf("\n");
}

/* Exemplo de uso */
int main() {
    String* s1 = criaString("Ola");
    String* s2 = criaString("Mundo");

    printf("Antes da concatenação:\n");
    imprimeString(s1);
    imprimeString(s2);

    str_concatena(s1, s2);

    printf("\nDepois da concatenação:\n");
    imprimeString(s1);

    int cmp = str_compara(s1, s2);
    printf("\nComparação: %d\n", cmp);

    return 0;
}
