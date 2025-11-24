#include <stdio.h>
int main(){
    for(int i =0;i<5;i++){
        for (int j=0;j<i;j++){
            if(j==0 || j==1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}