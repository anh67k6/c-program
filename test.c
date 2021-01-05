#include<stdio.h>
int a,b;
int max(){
    if (a<b){
        return b;
    }
    else {
        return a;
    }

}

int nhapso(){
    printf("Input 2 number: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    return 0;
}

int main(){
    nhapso();
    printf("%d", max(a,b));
}


