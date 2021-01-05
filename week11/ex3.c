#include<stdio.h>

int main(){
    int x=1,y=2,z=3;
    int *ptr;

    printf("The value of x,y,z is %d %d %d\n",x,y,z);

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    printf("%d %d %d",x,y,z);

    return 0;
}
