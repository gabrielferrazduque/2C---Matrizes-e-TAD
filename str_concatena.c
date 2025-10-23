#include <stdlib.h>

void str_concatena(String* destino, String* origem) {
    if (destino == NULL) return;

    /* Anda até o final da string destino */
    while (destino->prox != NULL)
        destino = destino->prox;

    /* Copia cada caractere da origem */
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
