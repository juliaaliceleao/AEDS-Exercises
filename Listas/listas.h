Lista
Material
Listas - Vídeos
Última edição: 29 de mai.
Material
Uma explicação do Josephus
Item postado em 3 de mai.
Material
Lista
Última edição: 17 de abr.

Aula_2__Listas.pdf
PDF

listas.c
C

listas.h
C

makefile
Arquivo binário
Revisão e Introdução
Revisão e Introdução
Material
Ponteiros - Vídeos
Última edição: 29 de mai.
Material
Makefile
Item postado em 9 de mai.
Material
Como compilar com o VIM e o GCC
Item postado em 4 de mai.
Material
Aulas 0 e 1 - Introdução e Revisão
Item postado em 22 de mar.
/*definindo lista encadeada*/
struct lista{
	int info;
	struct lista *prox;
};

typedef struct lista Lista;

/*definindo lista duplamente encadeada*/
struct lista2{
	int info;
	struct lista2 *ant;
	struct lista2 *prox;
};

typedef struct lista2 Lista2;

/*Funcoes de lista encadeada*/

Lista* lst_cria();

Lista* lst_insere(Lista *l, int i);

void lst_imprime(Lista *l);

int lst_vazia(Lista *l);

Lista* lst_busca(Lista *l, int v);

Lista *lst_retira(Lista *l, int v);

void lst_libera(Lista *l);

Lista *lst_insere_ordenado(Lista *l, int v);

int lst_igual(Lista *l1, Lista *l2);

/*listas circulares*/
void lcirc_imprime(Lista *l); 

/*listas duplamente encadeadas*/
Lista2 *lst2_insere(Lista2 *l, int v);

Lista2 *lst2_busca(Lista2 *l, int v);

Lista2 *lst2_retira(Lista2 *l, int v);

Lista *lcirc_transforma(Lista *l);

void lcirc_libera(Lista *l);

Lista* lcirc_busca(Lista *l, int v);
