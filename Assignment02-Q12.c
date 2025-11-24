#include <stdio.h>
int main(){
    int n;
    int arr[1000];
    printf("Enter no of elements:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter element:- ");
        scanf("%d",&arr[i]);
    }
    int max =0;
    int min =0;
    for (int j=0;j<=n;j++){
        if(arr[j] > arr[j+1]){
            min = arr[j];
        }
        else{
            max = arr[j];
        }
    }
    printf("The maximum value: %d",max);
    printf("\n");
    printf("The minimum value: %d",min);
}