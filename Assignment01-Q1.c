// Check whether Armstrong number.
#include <stdio.h> 
#include <math.h> 
int main(){
   int num;
   int lastDigit;
   int count =0;
   int sum =0;
   int num2;
   printf("Enter Number:- ");
   scanf("%d",&num);
   num2 = num; 
   while(num!=0){
      lastDigit=num%10;
      printf("%d",lastDigit);
      num/=10;
      count++;
   }
   lastDigit =0;
   while(num2!=0){
         lastDigit=num2%10;
         sum = pow(lastDigit,count)+sum;
         printf("%d\n \n ",sum);
         num2/=10;
      }
   printf("The Sum:- %d",sum);
   if (num == sum){
      printf("Yes! It is an Armstrong number!");
   }
   else{
      printf("No! It is not an Armstrong number!");
   }
   return 0;
}
