#include<stdio.h>

int check(int n){
    int odd= 1, even =1;

    while(n>0){
        int figure;
        figure = n % 10;

        if(figure % 2 == 0) odd *= 0;
        else even *= 0;

        n = (n - figure)/10;

    }
    if(odd == 0 && even == 0) return 0;
    else return 1;

}

int main(){
    int n;
    printf("Input your num\n");
    scanf("%d",&n);

    if(check(n)) printf("Yes\n");
    else printf("No\n");

    return 0;
}
