#include <stdio.h>
#define tam 10
//4, 1, 3, 2, 16, 9, 10, 14, 8, 7

int Parent(int i){
    return i/2;
}

int Left(int i){
    return 2*i;
}

int Right(int i){
    return 2*i+1;
}

void Swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Insert(int a[], int data, int* n){
    if(*n >= tam){
        puts("O Heap está cheio!");
        return;
    }else{
        a[*n] = data;
        *n = *n + 1;

        int i = *n - 1;
        while(i != 0 && a[Parent(i)] < a[i]){
            Swap(&a[Parent(i)], &a[i]);
            i = Parent(i);
        }
    }
}

void Max_Heapfy(int a[], int i, int n){
    int l = Left(i);
    int r = Right(i);
    int largest = i, aux;

    if(l <= n && a[l] > a[largest]){
        largest = l;
    }

    if(r <= n && a[r] > a[largest]){
        largest = r;
    }

    if(largest != i){
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        Max_Heapfy(a, largest, n);
    }
}

int Get_max(int a[], int* n){
    printf("Valor na raiz: %i\n", a[0]);
    return a[0];
}

int Get_min(int a[], int*n){
    printf("Último valor no heap: %i\n", a[*n-1]);
    return a[*n-1];
}

int Extract_max(int a[], int* n){
    int maxItem = a[0];

    a[0] = a[*n-1];
    *n = *n - 1;

    Max_Heapfy(a, 0, *n);
    return maxItem;
}

void Print_heap(int a[], int n){
    for(int i=0; i<n; i++){
        printf("Posição %i: %i\n", i+1, a[i]);
    }
    printf("\n");
}

int main(){
    int n = 0;
    int a[tam];
    int v[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

    for(int i=0; i<tam; i++){
        Insert(a, v[i], &n);
    }
    Print_heap(a, n);
    return 0;
}