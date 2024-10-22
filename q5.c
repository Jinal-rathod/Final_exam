//write a c program to find the sum of all elements of the array.

#include<stdio.h>

int main(){
    int r,c;
    printf("Enter array row : \n");           scanf("%d",&r);
    printf("Enter array column : \n");        scanf("%d",&c);
    int array[r][c];
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
            sum+=array[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}