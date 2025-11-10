#include <stdio.h>
int main(){
    int number;
    printf("enter the value of number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    getch();
    return 0;
}