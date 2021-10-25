#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[] = "(7(5()(6))(10()(12)))";
    int num = strtol(a, NULL, 10);
    printf("num == %i\n", num);
}