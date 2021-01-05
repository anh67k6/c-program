#include<stdio.h>

int main() {
    int n;
    printf("Input n\n");
    scanf("%d",&n);
    for (int i=0; i<=n;i++){
        printf("%d %d\n",i, i*i);
    };

    return 0;

}
