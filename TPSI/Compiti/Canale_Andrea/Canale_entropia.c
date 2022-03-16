#include <stdio.h>
#include <string.h>
#include<math.h>
#define N 20
void main()
{
  	char str[N], ch;
  	int i;
 	int p=0;
	 int u=0;
  	printf("Inserire i simboli:  ");
  	gets(str);
  	float prob=0,qty=0,entropia=0;
	  float ni=strlen(str);
	  while(p!=ni){
		  int conto=0;
  	for(i = 1; i <= ni; i++)
		{
				if(str[i] == str[p]&&str[p]!='\0'&&str[i]!='\0')  
				{
					str[i]='\0';
					conto++;
				}
				
			
			
		}
		if(conto==0){
			p++;
		}else{
		str[p]='\0';
		prob=conto/ni;
        qty=log2(prob)*-1;
		entropia=entropia+(prob*qty);
		p++;
		}

		
	  }
	printf("L'entropia è %f bit/s\n", entropia);

}
