#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()

{

    int nombreMystere = 0, nombreEntre = 0, choixMode = 0;

    printf("1. Mode 1 joueur\n2. Mode 2 joueurs\n");
    printf("Votre choix ? ");
    scanf("%d", &choixMode);

    if (choixMode == 1)
{
        const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

     if (nombreEntre > nombreMystere)
       {
           printf("C'est moins!\n\n");

       }

     else if (nombreEntre < nombreMystere)
     {
         printf("C'est plus!\n\n");


     }
     else
        printf("Bravo, vous avez trouve le nombre mystere !!\n\n");


     } while (nombreEntre != nombreMystere);
} else if (choixMode == 2)
    {
      printf("Choisissez le nombre mystere : ");
      scanf("%d", &nombreMystere);

      do
    {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

     if (nombreEntre > nombreMystere)
       {
           printf("C'est moins!\n\n");

       }

     else if (nombreEntre < nombreMystere)
     {
         printf("C'est plus!\n\n");


     }
     else
        printf("Bravo, vous avez trouve le nombre mystere !!\n\n");


    } while (nombreEntre != nombreMystere);

    }










    return 0;

}
