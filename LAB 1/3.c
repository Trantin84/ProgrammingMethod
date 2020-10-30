/********************************************************************

                Programming Methodlogy LAB Guidance
             Code, Compile, Run and Debug C program.
      For preferences only, it's not the complete solution. 
        Some error might be placed for teaching purposes.

*********************************************************************/

//Ex 3 Print all results calculate from 2 integer numbers.

#include <stdio.h>  //For printf call

int main()
{
    float fHeight1, fHeight2;
    printf("Input height of the rectangle: \n");
    scanf("%f", &fHeight1);
    while(getchar() != '\n');
    scanf("%f", &fHeight2);   
    printf("Chu vi = %8.2f", 2*(fHeight1 + fHeight2));
    printf("Dien tich = %8.2f", (fHeight1 * fHeight2));
        
    return 0;
}
