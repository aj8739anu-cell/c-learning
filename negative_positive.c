#include <stdio.h>
int main(){
    int number;
    printf("enter the value of number:");
    scanf("%d",&number);
    if(number>0){
        printf("%d is a positive number",number);
    }
    else if(number<0){
        printf("%d is a negative number",number);
    }
    else{
      printf("%d is a zero",number);  
    }
    getch();
    return 0;
}