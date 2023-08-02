#include <stdio.h>
#include <stdlib.h>

#define INICIOARRANJO 0
#define MAXTAM 10

typedef struct { 
    int Item[MAXTAM];
    int Primeiro;
    int Ultimo;
} TipoLista;

void Inicializar(TipoLista *Lista);

int Vazia(TipoLista Lista);

void Insere(int x, TipoLista *Lista);

void Imprime(TipoLista Lista);

void MaiorElemento(TipoLista Lista, int *posicao, int *valor);