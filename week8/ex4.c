#include<stdio.h>

int main(void){
    double total_pay;
    int count_emp;
    int number_emp;
    double hours;
    double rate;
    double pay;

    printf("Enter number of employees \n");
    scanf("&d", &number_emp);

    total_pay = 0.0;
    count_emp = 0;

    while(count_emp < number_emp){
        pritnf("Hours? \n");
        scanf("%lf", &hours);
        printf("Rate > $");
        scanf("%lf", &rate);
        pay = hours * rate;
        printf("Pay is $%6.2f\n\n", pay);
        total_pay = total_pay + pay;
        count_emp = count_emp + 1;
    }
    printf("All employess");
    printf("Total %8.2f ", total_pay);

    return 0;
}
