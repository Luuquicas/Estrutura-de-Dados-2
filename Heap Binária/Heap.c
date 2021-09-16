#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"
#define MAX 10
// 16, 14, 10, 8, 7, 9, 3, 2, 4, 1

int Heap_size(heap* a){
    size_t tam = sizeof(a)/sizeof(a->data[0]);
    return (int) tam;
}

int Parent(int i){
    return i/2;
}

int Left(int i){
    return 2*i;
}

int Right(int i){
    return (2*i)+1;
}

void Max_heapfy(heap* a, int i){
    int l = Left(i);
    int r = Right(i);
    int largest, aux;

    if(l <= Heap_size(a) && a->data[l] > a->data[i])
        largest = l;
    else
        largest = i;

    if(r <= Heap_size(a) && a->data[r] > a->data[largest])
        largest = r;
    
    if(largest != i)
        aux = a->data[i];
        a->data[i] = a->data[largest];
        a->data[largest] = aux;
        Max_heapfy(a, largest);
}

int main(){
    
}