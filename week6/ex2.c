#include<stdio.h>

int main(){
    double heading;

    printf("Input heading.\n");
    scanf("%lf", &heading);

    if(heading < 0){
        printf("Your input is wrong. \n");
    } else if(heading < 89.99){
        printf("North East");
    } else if(heading < 179.99) {
        printf("South East");
    } else if(heading < 269.99) {
        printf("South West");
    } else if(heading <= 360)
        printf("North West");
    }else{
        printf("Your input is wrong");
    }

    return 0;
}
