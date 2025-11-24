#include <stdio.h>
int main(){
    int arr[10] = {10,20,30,40,50,60,70,80 };
    int count = sizeof(arr) / sizeof(arr[0]);

     arr[0] = 5; // Zero  index
    arr[count - 1] = 5;
    arr[count/2] = 10;
    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}