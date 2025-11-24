#include <stdio.h>
// Find HCF of two numbers! 
int main(){
    int n1;
    printf("Enter a number: ");
    scanf("%d",&n1);
    int n2;
    printf("Enter a number: ");
    scanf("%d",&n2);
    int numnum=0;
    if (n1<n2){
        printf("Please exit and type it again such that first number is greater than the second!! "); 
    }
    else{
        for(int i=1;i<=n2;i++){
            if (n1%i ==0 && n2%i==0){
                numnum = i;
            }
        }
        
    }
    printf("The HCF is %d",numnum);
    return 0;
} 