#include<stdio.h>
int main()
{
   int arr[3];
   for(int i=0 ; i<3 ; i++)
   {
        printf("please enter number %d :",i+1);
        scanf("%d",&arr[i]);
   }
    for(int i=2 ; i>=0 ; i--)
    {
        printf(" number %d : %d \n",i,arr[i]);
    }


}