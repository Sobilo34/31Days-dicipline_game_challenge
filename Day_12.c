#include <stdio.h> 
  
 /** This is a program used to explain the introduction to Bit field. 
  * It defines a structure with bit fields 
  */ 
 typedef struct
{ 
	unsigned int mode : 5;
} field;
  
int main(void)
{
	field bitFlags = {5};
  
	printf("Mode bit: %d\n", bitFlags.mode); 
  
	return 0; 
 }
