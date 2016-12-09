#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()

{

    int nombreMystere = 0, nombreEntre = 0, niveauChoisi = 0;

    printf("Level 1\nLevel 2\nLevel 3\nVotre choix ? ");
    scanf("%d", &niveauChoisi);

    if (niveauChoisi == 1)
    {
        int MAX = 100, MIN = 1;
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
    }

    if (niveauChoisi == 2)
    {
        int MAX = 1000, MIN = 1;
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
    }

     if (niveauChoisi == 3)
    {
        int MAX = 10000, MIN = 1;
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
    }









    return 0;

}
