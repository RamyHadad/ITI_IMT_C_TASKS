#include <stdio.h>
void bubble(int arr[], int n);
 int main()
{
    int arr[100],size,swap;
    printf(" Enter number of elements : ");
    scanf("%d",&size);
    printf("Enter %d Numbers :",size);
    for (int i=0 ; i<size ; i++ )
    scanf("%d",&arr[i]);
    bubble(arr,size);
    printf("Array after sorting : ");
    for(int i=0 ; i<size ; i++)
    printf("%d",arr[i]);
}

void bubble(int arr[], int n)
{
    int i,j,temp;
    for(i=0 ; i<(n-1);i++)
    {
        for(j=0 ; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }


        }




    }







}