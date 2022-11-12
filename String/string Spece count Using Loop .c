///////////////////////////////////////////////////////////
///            string Spece count Using Loop           ///
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 ,cnt = 0 ;
    char csrc[50]={};

    printf("\n Enter string =>");
    gets(csrc);

    while(csrc[i]!= '\0')
    {
        if(csrc[i] == ' ')
        {
            cnt++;
        }
        i++;
    }
    printf(" spece Length =>%d",cnt);

getch();
return 0;
}
