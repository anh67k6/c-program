#include<stdio.h>

void printnchars(char ch, int n){
    int i;
    for( i=0; i<n ; i++){
        printf("%c",ch);

    }
    printf("\n");
}

int main(){
    char ch;
    int n;
    printf("Input char: ");
    scanf("%c", &ch);

    printf("Input n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printnchars(ch,i);
    }

    return 0;
}
