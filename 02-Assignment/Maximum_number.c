#include<stdio.h>
int main()
{
    int num1 ,num2 , num3 ;
    printf("Enter three numbers to find maximum: ");
    scanf("%d%d%d", &num1, &num2,&num3);
    if (num1>num2 && num1>num3)
    printf("maximum number is : %d ",num1);
    else if (num2>num1 && num2>num3)
     printf("maximum number is : %d ",num2);
     else 
     printf("maximum number is : %d ",num3);
















}
