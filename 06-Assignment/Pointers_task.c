#include<stdio.h>
int main()
{
    int x=10 , y=20 , z=30;
    int *p ;
    int *q ;
    int *r ;
    p=&x ;
    q=&y ;
    r=&z;
    printf("before swapping\n");
    printf("x= %d \n",x);
    printf("y= %d \n",y);
    printf("z= %d \n",z);

    printf("p= %d \n",p);
    printf("q= %d \n",q);
    printf("r= %d \n",r);


    printf("*p= %d \n",*p);
    printf("*q= %d \n",*q);
    printf("*r= %d \n",*r);

    int temp=*r;
    *r=*p;
	*p=*q;
	*q=temp;

    printf("after swapping\n");


    printf("x= %d \n",x);
    printf("y= %d \n",y);
    printf("z= %d \n",z);

    printf("p= %d \n",p);
    printf("q= %d \n",q);
    printf("r= %d \n",r);


    printf("*p= %d \n",*p);
    printf("*q= %d \n",*q);
    printf("*r= %d \n",*r);











}