#include<stdio.h>

double ke(double m, double v){
    return m*v*v/2;
}

int main(){
    double m,v;

    scanf("%lf %lf",&m,&v);

    printf("%.3f",ke(m,v));
    return 0;
}
