#include <stdio.h>
int main(){
    int arr[10000];
    int n;
    printf("Enter no of elements:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        if (arr[j]==99){
            printf("The first occurence of 99 is at :- %d\n",j);
            break;
        }
    }
    return 0;
}