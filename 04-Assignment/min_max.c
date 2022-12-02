#include<stdio.h>
void max (int arr_max[]);
void min (int arr_min[]);
int main()
{
  int num[4];
  for (int i=0 ; i<4 ; i++)
  {
  printf("enter number %d : ",i+1);
  scanf("%d",&num[i]);
  }
  max(num);
  min(num);
}

void max (int arr_max[])
{
    int max_num ;
    max_num=arr_max[0];
    for(int i = 0; i <4; i++)
	{
		if(max_num < arr_max[i])
		{
			max_num = arr_max[i];
		}
	}
	printf("Maximum number is : %d\n",max_num);
}


void min (int arr_min[])
{
    int min_num ;
    min_num=arr_min[0];
    for(int i = 0; i <4; i++)
	{
		if(min_num > arr_min[i])
		{
			min_num = arr_min[i];
		}
	}
	printf("Minimum number is : %d\n",min_num);
}














