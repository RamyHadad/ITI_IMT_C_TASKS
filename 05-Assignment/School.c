#include<stdio.h>

int Passed(int arr[]);
int Failed(int arr[]);
int Max(int arr[]);
int Min(int arr[]);
float Average(int arr[]);

int main()
{
    int passed=0,failed=0,highest,lowest;
    float avg;
    int class_1[10]={52,63,54,52,41,84,54,45,41,48};
    int class_2[10]={55,13,54,42,24,54,64,45,41,81};
    int class_3[10]={51,83,59,42,71,88,74,45,74,48};
    passed=Passed(class_1)+Passed(class_2)+Passed(class_3);
    failed=Failed(class_1)+Failed(class_2)+Failed(class_3);
    avg=Average(class_1)+Average(class_2)+Average(class_3);

    if(Min(class_1) < Min(class_2) && Min(class_1) < Min(class_3))
	{
		printf("Minimum Grade   : %d\n",Min(class_1));
	}
	else if(Min(class_2) < Min(class_1) && Min(class_2) < Min(class_3))
	{
		printf("Minimum Grade   : %d\n",Min(class_2));
	}
	else
	{
		printf("Minimum Grade   : %d\n",Min(class_3));
	}

	if(Max(class_1) > Max(class_2) && Max(class_1) > Max(class_3))
	{
		printf("Maximum Grade   : %d\n",Max(class_1));
	}
	else if(Max(class_2) > Max(class_1) && Max(class_2) > Max(class_3))
	{
		printf("Maximum Grade   : %d\n",Max(class_2));
	}
	else
	{
		printf("Maximum Grade   : %d\n",Max(class_3));
	}
    printf(" Passed students : %d\n",passed);
    printf(" Failed students : %d\n",failed);
    printf(" Average students : %0.3f\n",avg);
    return 0 ;
    
}

int Passed(int arr[])
{
    int passed=0;
    for(int i=0 ; i<10 ; i++)
    {
        if(arr[i]>=50)
        passed++;
    }
        return passed;
}

int Failed(int arr[])
{
    int failed=0;
    for(int i=0 ; i<10 ; i++)
    {
        if(arr[i]<50)
        failed++;
    }
        return failed;
}

int Max(int arr[])
{
	int max;
	max = arr[0];
	
	for(int i = 0; i <10; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	    return max;
}

int Min(int arr[])
{
	int min;
	min = arr[0];
	
	for(int i = 0; i <10; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	    return min ;
}

float Average(int arr[])
{
	float avg;
	int sum =0;
	
	for(int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	
	avg = (float)sum / 10;
	return avg ;
	
}