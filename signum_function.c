#include <stdio.h>
int main(){
    int  m , n;
    printf("enter the value of number:");
    scanf("%d",&m);
    if(m>0){
        n=1;
    }
    else if(m<0){
        n=-1;
    }
    else{
        n = 0;  
    }
    printf("value of n = %d",n);

    getch();
    return 0;
}