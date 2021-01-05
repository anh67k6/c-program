#include<stdio.h>
int sum;
int cube(int n){
    sum =0;
    for (int i=1; i <= n; i++){
        sum = sum + i*i*i;
    }
    return sum;
}

int sub(int n){
    for(int i=1; i<= n ; i++){
        if( n%i == 0){printf("%d\n",i);}
    }
}

int per(int n){
    for(int i=1; i<= n ; i++){
        printf("%d\n",i*i);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n",cube(n));
    sub(n);
    per(n);

    return 0;
}
