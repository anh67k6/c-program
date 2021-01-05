#include<stdio.h>

int check(int year){
    if (year % 4 == 0 && year % 100 != 0){
        return 1;
    }
    else if (year % 400 == 0){
        return 1;
    }
    else{return 0;}
}

int main(){
    int year;
    printf("Input year\n");
    scanf("%d", &year );

    if(check(year)){
        printf("This year is leap %d", year);
    }
    else{
        printf("Not leap year");
    }

    return 0;
}
