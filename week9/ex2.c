#include<stdio.h>
#include<math.h>

int is_prime(int n){
    int i;

    for(i=2;i< sqrt(n);i++){
        if( n%i == 0) {
                return 0;
    }
    return 1;
}
}

int main(void){
    int num;

    printf("Input your number: \n");
    scanf("%d", &num);

    for(int i=2; i<= num; i++){
        if(is_prime(i)){
            printf("%d\n",i);
        }
    }

    return 0;
}
