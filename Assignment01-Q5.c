#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinate:- ");
    scanf("%d %d",&x,&y);
    printf("%d \n",x);
    printf("%d \n",y);
    if (x>0 && y>0){
        printf("The point  %d %d lie in the first quadrant.",x,y);
    }
    else if (x<0 && y>0){
        printf("The point %d %d lie in the second quadrant.",x,y);
    }
    else if (x<0 && y<0){
        printf("The point %d %d lie in the third quadrant.",x,y);
    }
    else if (x>0 && y<0){
        printf("The point %d %d lie in the fourth quadrant.",x,y);
    }
    else if (x==0 && y==0){
        printf("The point %d %d is the origin.",x,y);
    }
    else if (x>0 && y==0 || x<0 && y==0){
        printf("The point %d %d lie in the x axis.",x,y);
    }
    else if (x==0 && y>0 || x==0 && y<0){
        printf("The point %d %d lie in the y axis.",x,y);
    }
    else{
        printf("Invalid input! ");
    }
}