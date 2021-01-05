#include<stdio.h>

int main(void){
    char a,b,c;
    char first;

    printf("Enter 3 lowercase or uppercase words\n");
    scanf("%c %c %c",&a,&b,&c);

    if(a<b){
       first = a;
    } else {
        first = b;
    }

    if(first > c){
        first = c;
    }

    printf("The first word is %c", first);
    return 0;
}
