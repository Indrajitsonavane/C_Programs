//////////////////////////////////////////////////////
/// program To check Given char is Upper or lower ///
////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter A charector =>");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'Z' && ch ==  'a' || ch == 'z')
    {
        printf("\n\n The char \"\ %c \"\ Is Upper case  ",ch);
    }
    else
    {
        printf("\n\n\t The char \"\ %c \"\ Is Lower case  ",ch);
    }

    getch();
    return 0;
}
