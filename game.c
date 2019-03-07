
#include "domino.h"

tDomino sentinela;

void exibirPecas(tListaDominos *listaDeDomino, tDomino *Dlista){
	int i;

	for (i = 0; i < QTD_PECAS; i++) {
		printf("[%d:%d]", listaDeDomino->lista[i].valor1,
			listaDeDomino->lista[i].valor2);
	}
	printf("\n");
	// printf("%d\n",listaDeDomino.quantidade);
}

void gerarPecas(tListaDominos *listaDeDomino, tDomino* Dlista){
	listaDeDomino->quantidade = 0;

    int j, i;
    int cont = 0;
    for (i = 6; i >=0; i--) {
        j = i;
        while( j >= 0) {
            listaDeDomino->lista[cont].valor1 = i;
            listaDeDomino->lista[cont].valor2 = j;
            listaDeDomino->lista[cont].proximo = &sentinela;
           	listaDeDomino->lista[cont].anterior = &sentinela;
			listaDeDomino->quantidade++;
			// printf("%i ", i);
			printf("[%d:%d]",listaDeDomino->lista[cont].valor1,
				listaDeDomino->lista[cont].valor2);
            j--;
            cont++;
        // printf("%d ", cont);
        }
    }
    printf("\n");
	exibirPecas(listaDeDomino, Dlista);
	// printf("%d\n",listaDeDomino->quantidade);
}

int main(){
	tListaDominos* listaDeDomino = (tListaDominos*)malloc(sizeof(tListaDominos));
	tDomino* Dlista = (tDomino*)malloc(sizeof(tDomino));
	gerarPecas(listaDeDomino, Dlista);
	// exibirPecas(lista);
    return 0;
}
