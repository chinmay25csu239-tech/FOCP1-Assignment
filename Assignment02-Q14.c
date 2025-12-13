#include <stdio.h>
int main(){
    int arr[10]={10,20,22,99,89,99,100,78,56,34};
    int flag = 1;
    int count =0;
    for (int i =0;i<10;i++){
        for (int j = 2; i < arr[i]; i++) {
        if (arr[i] % i == 0) {
            flag = 0;
            break;
        }
    }
        if (flag == 1){
            count++;
            //printf("%d is prime\n",arr[i]);
        }
        flag = 1;                       
    }
    printf("Total prime numbers in the array: %d\n",count);
    return 0;
}