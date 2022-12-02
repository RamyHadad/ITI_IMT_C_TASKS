#include<stdio.h>
int main()
{
    int ID_NUMBER[3]={1234,5678,9870};
    int PASSWARD[3]={7788,5566,1122};

    char arr_user[][6]={
        {"AHMED"},
        {"AMR"},
        {"WAEL"}

    };


  int id;
  int pass;
  printf(" enter your ID number : ");
  scanf("%d",&id);
  for(int i=0 ;i<3 ;i++)
{
     if (id==ID_NUMBER[i])
        { 
            printf(" enter your PASSWARD : ");
            scanf("%d",&pass);
           
             if (pass==PASSWARD[i])
            {
            printf(" the user name is :%s",arr_user[i]);
            }
            else
            printf(" passward is incorrect");

            
        }
    else if (id!=ID_NUMBER[i] && i == 3)
        printf("\n INCORRECT ID ");
}


}