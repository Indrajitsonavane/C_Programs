///////////////////////////////////////////////////////////////////
///           program To check No is devisible by 5            ///
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0;

    printf("\n Enter A charector =>");
    scanf("%d",&No);

   if(No % 5 == 0)
   {
       printf("\n %d is Devisible by  5 ",No);
   }
   else
   {
       printf("\n %d is Not Devisible by  5 ",No);
   }


    getch();
    return 0;
}

