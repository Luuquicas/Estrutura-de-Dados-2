#include <stdio.h>

/**
 * Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os 
 * números naturais de 0 até N em ordem crescente.
 * */

int printNum(int n, int y){
    printf("%d, ", y);
    if(n>y)
        return printNum(n,y+1);
    else
        return 0;
}

int main(){
    int num = 5, aux = 0;
    printNum(num,aux);
    return 0;
}