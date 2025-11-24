#include <stdio.h>
int main(){
    int arr[1000];
    int n;
    printf("Enter no of elements:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter:- ");
        scanf("%d",&arr[i]);
    }
    for (int j =0; j<=n;j++){
        int a = arr[j];
        if(a == arr[j+1]){
            printf("%d",a);
            printf("YES");
        }
        else{
            printf("%d",a);
            printf("NO \n");
        }

    }
}