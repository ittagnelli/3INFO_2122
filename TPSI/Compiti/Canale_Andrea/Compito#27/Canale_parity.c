#include<stdio.h>

int conto(int sim[],int dim) {
	int count = 0;
	for (int i = 0; i < dim; i++) {
		if (sim[i] == 1) {
			count++;
		}
	}
	printf("\n");
	return count;
}
void controlloparit(int conto,char tipo,char *numeri) {
	if (tipo == 'P') {
		if (conto % 2 == 0) {
			printf("Il bit di parità per la parola %s è 0\n", numeri);

		}
		else {
			printf("Il bit di parità per la parola %s è 1\n", numeri);

		}
	}else if(tipo == 'D') {
		if (conto % 2 == 0) {
			printf("Il bit di parità per la parola %s è 1\n", numeri);
		}
		else {
			printf("Il bit di parità per la parola %s è 0\n", numeri);
		}
	}
	else {
		printf("Valore invalido, specificare P o D");
	}
	
}
void main(int argc, char* argv[])
{
	char tipo;
    int counter;
    if (argc == 1) {
        printf("Usage: ./Compito#27 P|D <parola binaria>\n");
    }
    else {
		int binari[sizeof(argv[2])];
		for (int i = 0; i < sizeof(argv[2])-1; i++)
		{
			binari[i] = argv[2][i] - '0';
		}
		controlloparit(conto(binari,sizeof(binari)),argv[1][0],argv[2]);
    }
	 
}