#include<stdio.h>

int main(){
    char z[9];
    printf("Enter string: \n");
    scanf("%[^\n]",z);
    printf("%s",z);
}
