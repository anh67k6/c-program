#include<stdio.h>
#define month 12

int main(){
    int rain[month];

    int i;

    for(i=0; i< month; i++){
        scanf("%d",&rain[i]);
    }
    printf("End");
    for(i=0;i<month;i++){
        printf("%5d",rain[i]);
    }

    return 0;
}
