#include <stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18){
        printf("congratulation!, you are eligible for casting your vote.");
    }
    else{
        printf("sorry!, you are not eligible for voting.");
    }
    getch();
    return 0;
}