#include<stdio.h>

void swap(int *p, int *q, int  *r){
    int tmp;
    tmp = *p; *p=*q; *q=*r; *r=tmp;
}
int main(){
    int a,b,c;
    a=1;
    b=2;
    c=3;

    swap(&a,&b,&c);
    printf("%d %d %d",a,b,c);

    return 0;

}
