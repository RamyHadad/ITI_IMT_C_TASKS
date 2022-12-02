#include<stdio.h>
int main()
{
    int ID_NUMBER=1234;
    int PASSWARD=0000;
    char user_name='t';
  int id;
  int pass;
  printf(" enter your ID number : ");
  scanf("%d",&id);
  if (id==ID_NUMBER)
  {
    printf(" enter your PASSWARD : ");
    scanf("%d",&pass);
    if (pass==PASSWARD)
    {
        printf(" the user name is :%c",user_name);
    }
    else
    printf(" passward is incorrect");

   }
   else
   printf("INCORRECT ID ");
}