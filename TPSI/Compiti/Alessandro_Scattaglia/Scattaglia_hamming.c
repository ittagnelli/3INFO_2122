#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
	int a, b, hamm;                             
	
	printf("Introduci due caratteri consecutivamente:   ");
  
	
	a = getchar(); 
	b = getchar();
	
	
	int va[8] = {0}, vb[8] = {0};
	
	
	int i = 0;  
	int t = a;                    
	while (t > 0) {
	  va[i++] = t % 2;
	  t /= 2;                     
	}
	
	t = b;
	i = 0;
	while (t > 0) {
	  vb[i++] = t % 2;
	  t /= 2;                      
	}
	
	printf("\ncarattere in binario: %d\n", a);
	for (i=7; i>=0; i--){
     printf ("%d", va[i]);
  }
	 
	

	printf("\ncarattere in binario: %d\n", b);
	for (i=7; i>=0; i--){
     printf ("%d", vb[i]);
  }
	 
	hamm = 0;                       
	for (i = 0; i < 8; i++)
  {
    if (va[i] != vb[i])
    {
       hamm++;	
    }
	    
  }
	   	  
printf ("\nLa distanza di Hamming tra %c e %c e' : %d ", a, b, hamm); 
printf("\n\n\n"); 	  
return 0;
}