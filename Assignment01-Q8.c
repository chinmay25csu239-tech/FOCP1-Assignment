#include <stdio.h>
int main(){
    int first=0;
    int second =1;
    int third = first+second;
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    printf("%d ",first);
    printf("%d ",second);
    while(n-2!=0){ 
        printf("   ");
        third = first + second;
        printf("%d",third);
        printf(" ");
        first = second;
        second=third;
        n--;
        
    }
    return 0;
}
