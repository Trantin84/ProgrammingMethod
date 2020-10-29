// Tính đoi USD ra VND
// 29.10.2020 
// ABC 

#include <stdio.h>   /* printf, scanf definitions */ 
#define TYGIA 23090 /* conversion constant */ 
int main() { 	
   float USD, VND;  //  	      		 
   printf("Nhap so tien USD: "); 	
   scanf("%f", &USD);
   VND = USD * TYGIA;
   printf("VND: %f*TYGIA = %f",USD,VND);
   return 0; 
}
