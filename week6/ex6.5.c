#include<stdio.h>
#include <stdlib.h>

int main(void){
    int ranNumber;

    ranNumber = rand() % 9 + 1;

    printf("%d", ranNumber);

    return 0;
}
