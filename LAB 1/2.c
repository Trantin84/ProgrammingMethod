/********************************************************************

                Programming Methodlogy LAB Guidance
             Code, Compile, Run and Debug C program.
      For preferences only, it's not the complete solution. 
        Some error might be placed for teaching purposes.

*********************************************************************/

//Ex 2 Print all results calculate from 2 integer numbers.

#include <stdio.h>  //For printf call

int main()
{
    int iNum1, iNum2;
    printf("Nhap lan luot 2 so nguyen: \n");
    while(getchar() != '\n');
    scanf("%d", &iNum1);
    while(getchar() != '\n');
    scanf("%d", &iNum2);
    printf("%d + %d = %d\n", iNum1, iNum2, iNum1 + iNum2);
    printf("%d - %d = %d\n", iNum1, iNum2, iNum1 - iNum2);
    printf("%d * %d = %d\n", iNum1, iNum2, iNum1 * iNum2);
    if(iNum2) 
    {
        printf("%d / %d = %d\n", iNum1, iNum2, iNum1 / iNum2);
        printf("%d %% %d = %d\n", iNum1, iNum2, iNum1 % iNum2);
    }
    else
        printf("Khong thuc hien phep chia cho 0\n");
        
    return 0;
}
