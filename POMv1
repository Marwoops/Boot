#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()

{

    int nombreMystere = 0, nombreEntre = 0, essais = 0;

    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        (essais ++);

     if (nombreEntre > nombreMystere)
       {
           printf("C'est moins!\n\n");

       }

     else if (nombreEntre < nombreMystere)
     {
         printf("C'est plus!\n\n");


     }
     else
        printf("Bravo, vous avez trouve le nombre mystere en %d coups!!\n\n", essais);


    } while (nombreEntre != nombreMystere);







    return 0;

}
