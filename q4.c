// write a program to check whether an alphabet is a vowel or constant.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter any alphabet : \n");
    scanf("%c",&ch);

    if( ch =='a' || ch =='e' || ch =='i' || ch =='u' || ch =='o'){
        printf("An alphabet is a vowel...\n");
    }else{
        printf("An alohbet is a constant...\n");
    }
    return 0;
}