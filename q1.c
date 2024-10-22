// write a program in c check whether a number is even or odd using defined function.

#include<stdio.h>

int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d :- It's a even number...",num);
    }else if(num%2!=0){
        printf("%d :- It's a odd number...",num);
    }
    
    return 0;
}