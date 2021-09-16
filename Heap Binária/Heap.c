#include <stdio.h>
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

int main(){
    int v[] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
    int left = Left(2);
    int right = Right(2);
    int parent = Parent(2);
    printf("left: %d\nright: %d\nparent: %d", v[left-1], v[right-1], v[parent-1]);
}