#include <stdio.h>

void main ()
{
    int n = 15, l = 0, sommap = 0, sommad = 0, sommatot = 0, div, pro, l_f;
    char c[n], cpari[7], cdisp[8];

    //inserimento della sequenza in un unico vettore
    for (int i = 0; i < n; i++)
    {
        printf("inserire la sequenza del codice fiscale: \n");
        scanf("%s", &c[i]);

    }

    //inserimento dei pari e dispari nei vettori
    for (int i = 1; i < n; i = i + 2)
    {
        cpari[l] = c[i];
        l++;
    }

    l = 0;

    for (int i = 0; i < n; i = i + 2)
    {
        cdisp[l] = c[i];
        l++;
    }

    //in output i pari e i dispari
    for (int l = 0; l < 7; l++)
    {
        printf("%c ", cpari[l]);
    }
    for (int l = 0; l < 8; l++)
    {
        printf("%c ", cdisp[l]);
    }

    //da lettere a numeri per i pari

    for (int i = 0; i < 7; i++)
    {
        switch (cpari[i])
        {
            case 'A':
            cpari[i] = 0;
            break;

            case 'B':
            cpari[i] = 1;
            break;

            case 'C':
            cpari[i] = 2;
            break;

            case 'D':
            cpari[i] = 3;
            break;

            case 'E':
            cpari[i] = 4;
            break;

            case 'F':
            cpari[i] = 5;
            break;

            case 'G':
            cpari[i] = 6;
            break;

            case 'H':
            cpari[i] = 7;
            break;

            case 'I':
            cpari[i] = 8;
            break;

            case 'J':
            cpari[i] = 9;
            break;

            case 'K':
            cpari[i] = 10;
            break;

            case 'L':
            cpari[i] = 11;
            break;

            case 'M':
            cpari[i] = 12;
            break;

            case 'N':
            cpari[i] = 13;
            break;

            case 'O':
            cpari[i] = 14;
            break;

            case 'P':
            cpari[i] = 15;
            break;

            case 'Q':
            cpari[i] = 16;
            break;

            case 'R':
            cpari[i] = 17;
            break;

            case 'S':
            cpari[i] = 18;
            break;

            case 'T':
            cpari[i] = 19;
            break;

            case 'U':
            cpari[i] = 20;
            break;

            case 'V':
            cpari[i] = 21;
            break;

            case 'W':
            cpari[i] = 22;
            break;

            case 'X':
            cpari[i] = 23;
            break;

            case 'Y':
            cpari[i] = 24;
            break;

            case 'Z':
            cpari[i] = 25;
            break;

            default:
            cpari[i] = cpari[i];
            break;

        }
        sommatot = sommatot + cpari[i];
    }

    for (int i = 0; i < 8; i++)
    {
        switch (cdisp[i])
        {

            case 0:
            cdisp[i] = 1;
            break;

            case 1:
            cdisp[i] = 0;
            break;

            case 2:
            cdisp[i] = 5;
            break;

            case 3:
            cdisp[i] = 7;
            break;

            case 4:
            cdisp[i] = 9;
            break;

            case 5:
            cdisp[i] = 13;
            break;

            case 6:
            cdisp[i] = 15;
            break;

            case 7:
            cdisp[i] = 17;
            break;

            case 8:
            cdisp[i] = 19;
            break;

            case 9:
            cdisp[i] = 21;
            break;
            
            case 'A':
            cdisp[i] = 1;
            break;

            case 'B':
            cdisp[i] = 0;
            break;

            case 'C':
            cdisp[i] = 5;
            break;

            case 'D':
            cdisp[i] = 7;
            break;

            case 'E':
            cdisp[i] = 9;
            break;

            case 'F':
            cdisp[i] = 13;
            break;

            case 'G':
            cdisp[i] = 15;
            break;

            case 'H':
            cdisp[i] = 17;
            break;

            case 'I':
            cdisp[i] = 19;
            break;

            case 'J':
            cdisp[i] = 21;
            break;

            case 'K':
            cdisp[i] = 2;
            break;

            case 'L':
            cdisp[i] = 4;
            break;

            case 'M':
            cdisp[i] = 18;
            break;

            case 'N':
            cdisp[i] = 20;
            break;

            case 'O':
            cdisp[i] = 11;
            break;

            case 'P':
            cdisp[i] = 3;
            break;

            case 'Q':
            cdisp[i] = 6;
            break;

            case 'R':
            cdisp[i] = 8;
            break;

            case 'S':
            cdisp[i] = 12;
            break;

            case 'T':
            cdisp[i] = 14;
            break;

            case 'U':
            cdisp[i] = 16;
            break;

            case 'V':
            cdisp[i] = 10;
            break;

            case 'W':
            cdisp[i] = 22;
            break;

            case 'X':
            cdisp[i] = 25;
            break;

            case 'Y':
            cdisp[i] = 24;
            break;

            case 'Z':
            cdisp[i] = 23;
            break;

        }
        sommatot = sommatot + cdisp[i];
    }

    div = sommatot/ 26;
    pro = div * 26;
    l_f = sommatot - pro;

    printf("\n %d \n", sommatot);

    switch (l_f)
    {
        case 0:
        l_f = 'A';
        break;

        case 1:
        l_f = 'B';
        break;

        case 2:
        l_f = 'C';
        break;

        case 3:
        l_f = 'D';
        break;

        case 4:
        l_f = 'E';
        break;

        case 5:
        l_f = 'F';
        break;

        case 6:
        l_f = 'G';
        break;

        case 7:
        l_f = 'H';
        break;

        case 8:
        l_f = 'I';
        break;

        case 9:
        l_f = 'J';
        break;

        case 10:
        l_f = 'K';
        break;

        case 11:
        l_f = 'L';
        break;

        case 12:
        l_f = 'M';
        break;

        case 13:
        l_f = 'N';
        break;

        case 14:
        l_f = 'O';
        break;

        case 15:
        l_f = 'P';
        break;

        case 16:
        l_f = 'Q';
        break;

        case 17:
        l_f = 'R';
        break;

        case 18:
        l_f = 'S';
        break;

        case 19:
        l_f = 'T';
        break;

        case 20:
        l_f = 'U';
        break;

        case 21:
        l_f = 'V';
        break;

        case 22:
        l_f = 'W';
        break;

        case 23:
        l_f = 'X';
        break;

        case 24:
        l_f = 'Y';
        break;

        case 25:
        l_f = 'Z';
        break;
    }

    printf("la lettera finale è %c", l_f);


}