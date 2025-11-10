#include <stdio.h>
int main(){
    int height ;
    printf("enter your height:");
    scanf("%d",&height);
    if(height>135){
       printf("you are tall");
    }
    else if(height<135){
       printf("you are average");
    } 
    
    getch();
    return 0;
}