#include<stdio.h>

//Function count 0
int count(int arr[], int size){
    int count = 0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count=count+1;
        }
    }
    return count;

}

//Function max
int max(int arr[],int size){
    int max=0, n=0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            n = n+1;
        }
        if(arr[i] != 0){
            if(n>max){
                max = n;
                n =0;
            }
        }
    }
    if(n>max) max=n;
    return max;
}

int main(){
    int arr[20];
    int size;

    printf("Input size\n"); scanf("%d", &size);

    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    };

    printf("So lan 0 xuat hien la %d\n", count(arr,size));
    printf("Max la %d \n", max(arr,size));
    return 0;
}
