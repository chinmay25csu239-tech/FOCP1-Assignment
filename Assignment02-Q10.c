#include <stdio.h>
int main(){
    int arr[10]={10,20,22,99,89,99,100,78,56,34};
    int count=0;
    for (int i =0;i<10;i++){
        if (arr[i]==99){
            count++;
        }
    }
    printf("The number 99 appears %d times in the array.\n",count);
}