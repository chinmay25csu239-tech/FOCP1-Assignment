#include <stdio.h> 
int main(){
    int even_arr[1000];
    int odd_arr[1000];
    int n;
    int counte=0;
    int counto=0;
    printf("How many elements do you want to check:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter:- ");
        scanf("%d",&i);
        if(i%2==0){
            even_arr[counte]=n;
        }
        else{
            odd_arr[counto]=n;
        }
    }
    printf("Display of Even array:- ");
    for(int e=0;e<counte;e++){
        printf("%d,",even_arr[e]);
    }
    printf("Display of Odd array:- ");
    for(int o=0;o<counto;o++){
        printf("%d,",odd_arr[o]);
    }

}
