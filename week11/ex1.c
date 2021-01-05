#include<stdio.h>

int main(){
    int x,y,z;

    int *ptr;

    printf("Input 3 integers: \n");

    scanf("%d %d %d", &x,&y,&z);

    printf("Three integers are: \n");
    ptr = &x;
    printf("%p\n", *ptr);

    ptr = &y;
    printf("%p\n", *ptr);

    ptr = &z;
    printf("%p\n", *ptr);


    return 0;
}
