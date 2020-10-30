/******************************************************************************

                     Programming Methodlogy LAB Guidance
                Code, Compile, Run and Debug C program online.
For preferences only, it's not the complete solution. Some error might be placed for teaching purposes.

*******************************************************************************/

//Ex 1 Print your name, birthday and fone number.

#include <stdio.h>  //For printf call

int main()
{
    int iNum1, iNum2;
    printf("Nhap lan luot 2 so nguyen: \n");
    while(getchar() != "\n");
    scanf("%d", &iNum2);
    while(getchar() != "\n");
    printf("20 Oct 1984\n");
    printf("028-37755046\n");
    return 0;
}
