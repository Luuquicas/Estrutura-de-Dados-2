#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"
#define MAX 10
// 16, 14, 10, 8, 7, 9, 3, 2, 4, 1

int Parent(int i){
    return i/2;
}

int Left(int i){
    return 2*i;
}

int Right(int i){
    return (2*i)+1;
}

void Max_heapfy(int* a, int i){
    int l = Left(i);
    int r = Right(i);
    int largest, aux;

    if(l <= 10 && a[l] > a[i])
        largest = l;
    else
        largest = i;

    if(r <= 10 && a[r] > a[largest])
        largest = r;
    
    if(largest != i)
        aux = a[i];
        a[i] = a[largest];
        a[largest] = aux;
        Max_heapfy(a, largest);
}

int main(){
    int a[] = {2,8,4,1,7,14,16,10,9,3};
    Max_heapfy(a, 10);
    for(int i=0; i<10; i++){
        printf("%i, ", a[i]);
    }
        
}