#include<stdio.h>
int main()
{
        int arr[10];
        int search_num;
    for(int i=1 ; i<11 ; i++)
    {
        printf("enter number %d : ",i);
        scanf("%d",&arr[i]);
        
    }
    
    printf("enter the value to search : ");
    scanf("%d",&search_num);
     for(int i=1 ; i<11 ; i++)
    { 
        if(arr[i]==search_num)
        {
            printf("value is exist at element number %d\n",i);
        }
        // else 
        // printf("number not exist");

    }

       







}
