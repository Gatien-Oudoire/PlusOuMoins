#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* Partie pour générer le nombre aléatoire*/
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    /* Fin de partie*/

    int tentativeUtilisateur;

    printf("Vous devez choisir un chiffre entre 1 et 100 \n Entrez la première tentative \n");

    scanf("%d", &tentativeUtilisateur);

    while (tentativeUtilisateur != nombreMystere){

        if (tentativeUtilisateur > nombreMystere){
            printf("Le nombre à trouver est plus petit que %d\n", tentativeUtilisateur);
            scanf("%d", &tentativeUtilisateur);
        }
        else {
            printf("Le nombre à trouver est plus grand que %d\n", tentativeUtilisateur);
            scanf("%d", &tentativeUtilisateur);
        }

    }
    printf("Bien Joue !");
}
