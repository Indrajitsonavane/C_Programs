////////////////////////////////////////////////////////////
///              Accept String Using loop               ///
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0 ;
    char csrc[50]={};

    printf("Enter string =>");
    gets(csrc);

    while(csrc[i]!= '\0')
    {
        i++;
    }
    printf("string Length =>%d",i);

getch();
return 0;
}
