#include<stdio.h>

void Add(int num1,int num2);
void Sub(int num1,int num2);
void Mul(int num1,int num2);
void Div(int num1,int num2);
void And(int num1,int num2);
void OR (int num1,int num2);
void Xor(int num1,int num2);
void Rem(int num1,int num2);
void Inc(int num1);
void Dec(int num1);
void Not(int num1);

int main()
{
    int num1,num2;
    char op ;
    printf("enter operand : ");
    scanf(" %c",&op);
    printf("enter first number  : ");
    scanf("%d",&num1);
    printf("enter second number  : ");
    scanf("%d",&num2);
    switch(op)
    {
        case '+' : Add(num1,num2);
                   break;
        case '-' : Sub(num1,num2);
                   break;
        case '*' : Mul(num1,num2);
                   break;
        case '/' : Div(num1,num2);
                   break;
        case '&' : And(num1,num2);
                   break;
        case '|' : OR(num1,num2);
                   break;
        case '^' : Xor(num1,num2);
                   break;
        case '%' : Rem(num1,num2);
                   break;
        case 'I' : Inc(num1);
                   break;
        case 'D' : Dec(num1);
                   break;
        case '~' : Not(num1);
                   break;

    }
    
}

void Add(int num1,int num2)
{   
    printf("%d + %d = %d ",num1,num2,num1+num2);
}
void Sub(int num1,int num2)
{   
    printf("%d - %d = %d ",num1,num2,num1-num2);
}
void Mul(int num1,int num2)
{   
    printf("%d * %d = %d ",num1,num2,num1*num2);
}
void Div(int num1,int num2)
{   
  if (num2==0)
  {
    printf("can't divide dy zero ");
  } 
  else
  {
    printf("%d / %d = %d ",num1,num2,num1/num2);
 }
}
void And(int num1,int num2)
{   
    printf("%d & %d = %d ",num1,num2,num1&num2);
}
void OR(int num1,int num2)
{   
    printf("%d | %d = %d ",num1,num2,num1|num2);
}
void Xor(int num1,int num2)
{   
    printf("%d ^ %d = %d ",num1,num2,num1^num2);
}
void Rem(int num1,int num2)
{   
    printf("%d % %d = %d ",num1,num2,num1%num2);
}
void Inc(int num1)
{
    printf("Inc : %d = %d ",num1,++num1);
}
void Dec(int num1)
{
    printf("Dec : %d = %d ",num1,--num1);
}
void Not(int num1)
{
    printf("Not : %d = %d ",num1,~num1);
}
