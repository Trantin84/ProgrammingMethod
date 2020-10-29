// Converts distance in miles to kilometres. 
#include <stdio.h>   /* printf, scanf definitions */ 
#define KMS_PER_MILE 1.609 /* conversion constant */ 
int main(void) { 	
   float miles, kms;  // input – distance in miles  	      		     // output – distance in kilometres 	/* Get the distance in miles */ 	
   printf("Hay nhap vao Miles: "); 	
	 scanf("%f", &miles); 	
	 // Convert the distance to kilometres 	
   kms = KMS_PER_MILE * miles; 	
   // Display the distance in kilometres 	
   printf("That equals %.4f km.\n", kms);
   return 0; 
}
