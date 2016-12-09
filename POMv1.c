#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()

{

    int nombreMystere = 0, nombreEntre = 0, continuerPartie = 1;
do
{
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

    if (nombreEntre > nombreMystere)
        printf("C'est moins!\n\n");

    else if (nombreEntre < nombreMystere)
        printf("C'est plus!\n\n");

    else
        printf("Bravo, vous avez trouve le nombre mystere!!\n");


    } while (nombreEntre != nombreMystere);

    printf("0. Arreter\n1. Recommencer\n\nVotre choix ? \n\n");
    scanf("%d", &continuerPartie);

} while (continuerPartie>=1);

return 0;
}

