#include<stdio.h>

int main(){
    int i;
    int count = 0;

    for (int i=1; i<=100;i++){
        if(i>27){
            count = count+1;
        }
    }
    printf("The numbers is %d", count);
}
