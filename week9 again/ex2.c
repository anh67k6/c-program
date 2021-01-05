#include<stdio.h>
#include<math.h>

int is_prime(int n){
    int i=0;

    for(i=2; i< sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i=2;
    int n;
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        if(is_prime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
