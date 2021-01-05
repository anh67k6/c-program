#include<stdio.h>
#define max 100

int main(){
    int a[max];

    int i,min,sum;
    for(i=0;i < max; i++){
        scanf("%d",a[i]);
    }
    min = a[0]; sum =0;
    for(i=0;i<max;i++){
        if(i%2 ==1){
            max = max + a[i];
        }
        if(a[i]< min){
            min = a[i];
        }

    }



    return 0;
}

