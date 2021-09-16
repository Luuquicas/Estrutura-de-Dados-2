#ifndef HEAP_H
#define HEAP_H
#define MAX 10

typedef struct no{
    int data[MAX];
}heap;

int Parent(int);
int Right(int);
int Left(int);
int Heap_size(heap*);
void Max_heapfy(heap*, int);

#endif