#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()

{

    int nombreMystere = 0, nombreEntre = 0, essais = 0, continuerPartie = 2, choixMode = 1, choixDiff = 1;

    printf("======= FIND THE NUMBER =======\n\n\n");


while (continuerPartie == 2)


{

printf("1. Solo\n2. Duo\nVotre choix : ");
scanf("%d", &choixMode);
printf("\n");

if (choixMode == 1)

{

int MAX = 100, MIN = 1;

printf("1. Easy\n2. Medium\n3. Hard\nVotre choix : ");
scanf("%d", &choixDiff);
printf("\n");

switch(choixDiff)
{
case 1:
MAX = 100;
break;

case 2:
MAX = 1000;
break;

case 3:
MAX = 10000;
break;
}

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
}

else if(choixMode == 2);

{

printf("Choisissez le nombre mystere : ");
scanf("%d", &nombreMystere);
printf("\n");

}
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

    printf("1. Quit\n2. Restart\nVotre choix : ");
    scanf("%d", &continuerPartie);
    essais = 0;
    printf("\n");
}








    return 0;

}
