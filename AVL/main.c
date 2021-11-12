#include <stdio.h>
#include <stdlib.h>

/*
       Nó para a Árvore AVL
*/
typedef struct no{
    int valor;
    struct no *esquerdo, *direito;
    short altura;
}No;

/*
    Função que cria um novo nó
    x -> valor a ser inserido no nó
    Retorna: o endereço do nó criado
*/
No* novoNo(int x){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = x;
        novo->esquerdo = NULL;
        novo->direito = NULL;
        novo->altura = 0;
    }
    else
        printf("\nERRO ao alocar nó em novoNo!\n");
    return novo;
}

/*
    Retorna o maior dentre dois valores
    a, b -> altura de dois nós da árvore
*/
short maior(short a, short b){
    return (a > b)? a: b;
}

/*
      Retorna a altura de um nó ou -1 caso ele seja null
*/
short alturaDoNo(No *no){
    if(no == NULL)
        return -1;
    else
        return no->altura;
}

/*
      Calcula e retorna o fator de balanceamento de um nó
*/
short fatorDeBalanceamento(No *no){
    if(no)
        return (alturaDoNo(no->esquerdo) - alturaDoNo(no->direito));
    else
        return 0;
}

/*
    função para a rotação à esquerda
*/
No* rotacaoEsquerda(No *r){
    No *y, *f;

    y = r->direito; // y aponta para a subárvore direita da raiz r
    f = y->esquerdo; // f aponta para o filho esquerdo de y

    y->esquerdo = r; // o filho esquerdo de y passa a ser a raiz r
    r->direito = f; // o filho direito de r passa a ser f

    // recalcula a altura dos nós que foram movimentados
    r->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito)) + 1;
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito)) + 1;

    return y;
}

No* rotacaoDireita(No* r){
    No *y, *f;

    y = r->esquerdo;
    f = y->direito;

    y->direito = r;
    r->esquerdo = f;

    r->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito) + 1);
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito) + 1);

    return y;
}

No* rotacaoDireitaEsquerda(No* r){
    r->direito = rotacaoDireita(r->direito);
    return rotacaoEsquerda(r);
}

No* rotacaoEsquerdaDireita(No* r){
    r->esquerdo = rotacaoEsquerda(r->esquerdo);
    return rotacaoDireita(r);
}

No* balancear(No* raiz){
    short fb = fatorDeBalanceamento(raiz);

    // Rotação a direita
    if(fb < -1 && fatorDeBalanceamento(raiz->direito) <= 0)
        raiz = rotacaoEsquerda(raiz);
    // Rotação a esquerda
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) >= 0)
        raiz = rotacaoDireita(raiz);
    // Rotação dupla a esquerda
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) < 0)
        raiz = rotacaoEsquerdaDireita(raiz);
    // Rotação dupla a direita
    else if(fb < -1 && fatorDeBalanceamento(raiz->direito) > 0)
        raiz = rotacaoDireitaEsquerda(raiz);

    return raiz;
}

No* inserir(No* raiz, int x){
    if(raiz == NULL)
        return novoNo(x);
    else{
        if(x < raiz->valor)
            raiz->esquerdo = inserir(raiz->esquerdo, x);
        else if(x > raiz->valor)
            raiz->direito = inserir(raiz->direito, x);
        else
            printf("Falha na insercao!\nO elemento %i nao existe!\n", x);
    }

    raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) + 1;

    raiz = balancear(raiz);
}

void imprimir(No* raiz, int nivel){
    int i;
    if(raiz){
        imprimir(raiz->direito, nivel + 1);
        printf("\n\n");

        for(i = 0; i < nivel; i++)
            printf("\t");
        
        printf("%i", raiz->valor);
        imprimir(raiz->esquerdo, nivel + 1);
    }
}

int main(){
    int op, val;
    No* root = NULL;

    do{
        printf("\n\n\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n\n");
        scanf("%i", &op);

        switch(op){
            case 0:
                printf("Goodbye!!!");
                break;
            case 1:
                printf("Informe o valor: ");
                scanf("%i", &val);
                root = inserir(root, val);
                break;
            case 2:
                printf("Removendo...");
                break;
            case 3:
                imprimir(root, 1);
                break;
            default:
                printf("Opcao invalida!!!");
        }
    }while(op != 0);

    return 0;
}