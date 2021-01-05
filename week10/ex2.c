#include<stdio.h>

int check(int arr1[], int arr2[], int size){
    for(int i=0;i<size;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    return 0;
}
