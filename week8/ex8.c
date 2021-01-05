#include<stdio.h>

int main(void){
    int n;
    int count = 1;
    int result = 1;

    printf("Input n: \n");
    scanf("%d", &n);

    do{
        result = result * count;
        count = count + 1;
    }while (count <= n );

    printf("%d", result);
    return 0;

}
