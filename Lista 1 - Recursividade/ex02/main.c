#include <stdio.h>

/**
 * Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
 * números naturais de 0 até N em ordem decrescente.
 * */

void printNum(int n){
    if(n<0)
        return;
    else{
        printf("%d, ",n);
        printNum(n-1);
    }
}

int main(){
    int num = 100;
    printNum(num);
    return 0;
}