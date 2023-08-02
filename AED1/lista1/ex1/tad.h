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

void Insere(int x, TipoLista *Lista);

void Imprime(TipoLista Lista);

TipoLista Concatenar(TipoLista Lista1, TipoLista Lista2);