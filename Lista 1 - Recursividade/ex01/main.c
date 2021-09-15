#include <stdio.h>

unsigned long long int sumValues(unsigned long long int n){
    if(n<=1)
        return 1;
    else
        return n + umValues(n-1);
}

int main(){
    unsigned long long int num = 5;
    unsigned long long int res = sumValues(num);
    printf("A soma dos valores eh: %llu", res);
    return 0;
}