#include <stdio.h>
#include <stdlib.h>

void main (void) 
{
	int x;
	int y;
	int hamming=0;
	printf("Inserire due caratteri");
	
	int a[8] = {0};
	int b[8] = {0};

	x = getchar(); 
	y = getchar();
	
	
	
	int i = 0;  
	int c = x;                  
	while (c > 0) {
	  a[i++] = c % 2;
	  c /= 2;                      	
	}
	
	c = y;
	i = 0;
	while (c > 0) {
	  b[i++] = c % 2;
	  c /= 2;                       
	}
	  for (i = 0; i < 8; i++)
	  {
	  if (a[i] != b[i])
	  {
	    hamming++;	  
	  }
	  }	  
	
	printf ("\nLa distanza di Hamming tra %c e %c e' %d ", x, y, hamming); 
	  

}