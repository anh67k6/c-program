#include<stdio.h>
#include<math.h>
int main(){
    int n;

    printf("Enter n: \n");
    scanf("%d", &n);
    if(n == 2){
        printf("Day la so nguyen to\n");
    }
    else {
        for (int i=2; i< sqrt(n); i++){

            if ( n%i == 0){
                printf("Day khong phai la so nguyen to\n");
                return 1;
            }
        }
    }

    printf("Day la so nguyen to\n");
    return 0;

}
