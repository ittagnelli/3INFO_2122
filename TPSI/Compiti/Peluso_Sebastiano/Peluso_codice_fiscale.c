/**************************************************************************************************************************************
Si richiede di scrivere un programma in C che fornita da linea di comando una stringa di 15 cifre, che
rappresenta il codice fiscale italiano di una persona, calcoli il check digit o cifra di controllo che rappresenta la
16ma ed ultima cifra di un codice fiscale valido

L’utente specifica da linea di comando i primi 15 caratteri del codice fiscale ed il programma stampa in output
su console il check digit calcolato.

Il programma deve verificare che la stringa inserita sia esattamente di 15 caratteri.
***************************************************************************************************************************************/

#include<stdio.h>
#include<string.h>
#define PD 36
#define R 26

struct char_valori
{
    char carattere;
    int valore;
};






int main(int argc, char *argv[])
{
    char *sequenza = argv[1];

    char lettere_pari[7];
    char lettere_dispari[8];

    int i=0;
    int sommap = 0;
    int sommad = 0;
    int contp = 0;
    int contd = 0;
    int sommatot = 0;
    int resto = 0;
    

    struct char_valori tabella_pari[PD] = {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},{'F',5},{'G',6},{'H',7},{'I',8},{'J',9},{'K',10},{'L',11},
    {'M',12},{'N',13},{'O',14},{'P',15},{'Q',16},{'R',17},{'S',18},{'T',19},{'U',20},{'V',21},{'W',22},{'X',23},{'Y',24},{'Z',25}};
    struct char_valori tabella_dispari[PD] = {{'0',1},{'1',0},{'2',5},{'3',7},{'4',9},{'5',13},{'6',15},{'7',17},{'8',19},{'9',21},{'A',1},{'B',0},{'C',5},{'D',7},{'E',9},{'F',13},{'G',15},{'H',17},{'I',19},{'J',21},{'K',2},{'L',4},
    {'M',18},{'N',20},{'O',11},{'P',3},{'Q',6},{'R',8},{'S',12},{'T',14},{'U',16},{'V',10},{'W',22},{'X',25},{'Y',24},{'Z',23}}; 
    struct char_valori tabella_resto[R] = {{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},{'F',5},{'G',6},{'H',7},{'I',8},{'J',9},{'K',10},{'L',11},
    {'M',12},{'N',13},{'O',14},{'P',15},{'Q',16},{'R',17},{'S',18},{'T',19},{'U',20},{'V',21},{'W',22},{'X',23},{'Y',24},{'Z',25}};




    while (sequenza[i] != '\0') //stai scorrendo la parola dove i sarebbe la posizione del carettere in quella stringa
    {

        if (i%2 == 1)
        {
            
            
            lettere_pari[contp] = sequenza[i]; //dentro l'array di lettere_pari[] metti i caratteri che stiamo analizzando nella sequenza[i]
            contp++;
            
        }
        else if(i%2 == 0)
        {
            
            lettere_dispari[contd] = sequenza[i]; //dentro l'array di lettere_pari[] vuoi mettere i caratteri della sequenza alla posizione pari
            contd++;
        }

       
        i++;
    }
    

    for (int i = 0; i < 7; i++) //stai scorrendo l'array lettere_pari[]    
    {
        for (int j = 0; j < PD; j++) //stai scorrendo la tabella pari
        {
            if (lettere_pari[i] == tabella_pari[j].carattere)
            {
                sommap = sommap + tabella_pari[j].valore;
            }
            
            
        }
        
        printf("i caratteri pari sono: %c\n", lettere_pari[i]);
    }

    for (int i = 0; i < 8; i++) //stai scorrendo l'array lettere_dispari[]    
    {
        for (int j = 0; j < PD; j++) //stai scorrendo la tabella dispari
        {
            if (lettere_dispari[i] == tabella_dispari[j].carattere)
            {
                sommad = sommad +tabella_dispari[j].valore;
            }
            
            
        }
        
        printf("\ni caratteri dispari sono: %c", lettere_dispari[i]);
    }
    

    sommatot = sommap + sommad;

    resto = sommatot % 26;



    for (int i = 0; i < R; i++) //stai scorrendo la tabella_resto[]
    {
        if (resto == tabella_resto[i].valore)
            {
                sommad = sommad +tabella_dispari[i].valore;

                printf("\ncheck digit: %c", tabella_resto[i].carattere);
            }
    }
    



    printf("\nla somma totale e' : %d", sommatot);
    printf("\nil resto e' : %d", resto);

    

    
}