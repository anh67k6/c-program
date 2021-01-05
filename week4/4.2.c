#include<stdio.h>
#include<limits.h>

int main(){
    int i;
    long int k;
    float x;
    double z;

    printf("Enter an integer (between %i and %i):\n", INT_MIN, INT_MAX);
    scanf("%i", &i);
    printf("Your input is: %i\n", i);

    printf("Enter a long integer (between %d and %d)", SHRT_MIN, SHRT_MAX);


    return 0;


}
