#include <stdio.h>
int main()
{
    int number;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);

    printf("\n Octal Number of a Given Number =  %o", number);

    printf("\n Please Enter the Number :  ");
    scanf("%d", &number);

    printf("\n Hexadecimal Number  =  %h", number);

    return 0;
}
