#include<stdio.h>

int a,b,c,d,e;

void getData(){
    printf("Enter 5 point:\n ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

}

int min(int a, int b){
    if(a<b) return a;
    else return b;

}

int max (int a, int b){
    if(a<b) return b;
    else return a;

}

void calcScore(){
    getData();
    int maxsc, minsc;
    double sum;

    maxsc = max(a,max(b,max(c,max(d,e))));
    minsc = min(a,min(b,min(c,min(d,e))));

    sum = a+b+c+d+e-maxsc-minsc;

    printf("Max is %d", maxsc);
    printf("Min is %d", minsc);
    printf("Final is %.3f", sum/3);
}

int main(){
    calcScore();
    return 0;
}
