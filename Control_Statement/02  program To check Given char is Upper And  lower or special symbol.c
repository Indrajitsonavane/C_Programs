//////////////////////////////////////////////////////
/// program To check Given char is Upper or lower ///
///            And special  symbol               ///
////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter A charector =>");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'Z' )
    {
        printf("\n\n The char \"\ %c \"\ Is Upper case  ",ch);
    }
    else if( ch ==  'a' || ch == 'z')
    {
        printf("\n\n\t The char \"\ %c \"\ Is Lower case  ",ch);
    }
    else
    {
        printf("\n\n\t The char \"\ %c \"\ Is Special symbol  ",ch);
    }

    getch();
    return 0;
}

