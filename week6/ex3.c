#include<stdio.h>

int main(void){
    int age;

    printf("Input your age. \n");
    scanf("%d", &age);

    if(age>0){
        if(age<18){
            printf("You are child");
        } else if(age<=65){
            printf("You are adult");
        } else {
            printf("You are senior citizen");
        }
    } else {
        printf("Wrong input");
    }
    return 0;
}
