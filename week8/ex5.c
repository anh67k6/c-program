#include<stdio.h>

int main(void){
    int pass = 0;
    int fail = 0;
    int student = 1;
    int result;

    while(student < 10){
        printf("Enter result (1=pass, 0=fail)\n");
        scanf("%d",&result);

        if(result == 1){
            pass = pass + 1;
        }
        if (result == 0){
            fail = fail + 1;
        }

        student = student + 1;
    }

    printf("Pass %d\n", pass);
    printf("Fail %d", fail);

    return 0;

}
