#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define QTD_PECAS 28
#define QTD_MAX_MAO 6
typedef struct Domino {
    int valor1;
    int valor2;
    struct Domino *proximo;
    struct Domino *anterior;
}tDomino;

typedef struct listaDominos {
    tDomino lista[QTD_PECAS];
    int quantidade;
}tListaDominos;


void exibirPecas(tListaDominos* lista, tDomino *Dlista);
void gerarPecas(tListaDominos* lista, tDomino* Dlista);
