#include <stdio.h>

int main()
{
    int (scelta);
    printf("\nPremi:\n1 per le nostre offerte\n2 per parlare con un operatore\n");
    scanf("%d", &scelta);
    switch(scelta)
    {
        case 1:
        printf("\nTutto incluso, All day, All Night");
        break;
        case 2:
        printf("\nAttenda in linea");
        break;
        default:
        printf("Non ha effettuato alcuna selezione, arrivederci");
    }
    return 0;
}