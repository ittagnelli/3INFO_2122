#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int alfapari[2][36] = {
		{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I', 'J', 'K', 'L','M','N','O', 'P','Q','R','S','T','U','V','W','X','Y','Z'},
		{ 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  1,  2  ,3,  4,  5,  6,  7,  8,  9,  10, 11, 12,  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,24,25}
};
int alfadispari[2][36] = {
{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I', 'J', 'K', 'L','M','N','O', 'P','Q','R','S','T','U','V','W','X','Y','Z'},
{ 1,  0,  5,  7,  9,  13,  15, 17, 19, 21,  1, 0,  5  ,7,  9, 13,  15, 17, 19,  21,  2,  4,  18, 20, 11 , 3,  6,  8 , 12, 14, 16, 10, 22, 25,24,23}
};
int m = 0, d = 0;
void paridisp() {
	for (int i = 0; i < 15; i++) {
		if (i % 2)
			m++;
		else
			d++;
	}
}
int somme(char frasepari[], char frasedispari[]) {
	int sommapari = 0, sommadispari = 0;
	for (int k = 0; k < 36; k++) {
		for (int i = 0; i < strlen(frasepari); i++) {
			if (frasepari[i] == alfapari[0][k])
				sommapari = sommapari + alfapari[1][k];
		}
	}
	for (int k = 0; k < 36; k++) {
		for (int i = 0; i < strlen(frasedispari); i++) {
			if (frasedispari[i] == alfadispari[0][k])
				sommadispari = sommadispari + alfadispari[1][k];
		}
	}
	sommapari = (sommapari + sommadispari) % 26;
	return sommapari;
}
void intoarr(char up[]) {
	char frasepari[m];
	char frasedispari[d];
	m = 0;
	d = 0;
	for (int i = 0; i < 15; i++) {
		if (i % 2) {
			frasepari[m] = up[i];
			m++;
		}
		else {
			frasedispari[d] = up[i];
			d++;
		}
	}
	printf("La cifra da aggiungere è %c", somme(frasepari, frasedispari) + 65);
}
int main(int argc ,char *argv[]) {


	if (argc != 2) {
		printf("Usage: ./Canale_codice_fiscale <codice fiscale di 15 caratteri>");
		exit(1);
	}
	if ( strlen( argv[1] ) != 15) {
		printf("Il codice fiscale inserito ha meno di 15 caratteri o di più, avviare nuovamente il programma e assicurarsi di inserire 15 caratteri");
		exit(1);
	}
	char* up = argv[1];
	for (int i = 0; i < 15; i++)
		up[i] = toupper(up[i]);

	paridisp();

	intoarr(up);

}