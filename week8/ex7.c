#include<stdio.h>

int main(void){
    int n;
    int count = 1;
    int sum;

    printf("Input n: \n");
    scanf("%d", &n);

    while(n>0){
        sum += n;
        count = count + 1;
        printf("Input n: \n");
        scanf("%d", &n);
        printf("%g\n", sum/count);
    }
    printf("%\n", sum/count);

    return 0;
}
