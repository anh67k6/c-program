#include<stdio.h>
double m,v;
double ke(){
    return m*v*v/2;
}

int main(){
    printf("Input m and v:\n");
    scanf("%lf %lf",&m,&v);

    printf("%f", ke(m,v));

    return 0;
}
