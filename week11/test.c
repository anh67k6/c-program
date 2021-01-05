#include<stdio.h>

void incomeplus(long *current,int year){
    if(year>3) *current = *current + 300000;
}

int main(){
    long current;
    int year;

    printf("Input year: \n");
    scanf("%d",&year);

    printf("Input current salary:\n");
    scanf("%ld",&current);

    incomeplus(&current,year);

    printf("Your current now is %ld", current);

    return 0;
}
