// write a c program to calculate profite and loss on a transaction.

#include<stdio.h>

int main(){
    float s_price,c_price;
    float profite,loss;
    
    printf("Enter your company selling price : \n");
    scanf("%f",&s_price);
    printf("Enter your company cost price : \n");
    scanf("%f",&c_price);
    
    profite = s_price - c_price;
    loss =  c_price - s_price;

    if(s_price>c_price){
        printf("Your Company profite : %.2f\n",profite);
    }else if(c_price>s_price){
        printf("Your Company loss : %.2f\n",loss);
    }else{
        printf("YOur Company has no profite and loss\n");
    }
    return 0;
}