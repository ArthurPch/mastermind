#include "mastermind.h"

void initialiserGrille(char couleur_a_devine[4][50]){
    printf("Choisis une combinaison de 4 couleurs : ");
    scanf("%s %s %s %s", &couleur_a_devine[0], &couleur_a_devine[1], &couleur_a_devine[2], &couleur_a_devine[3]);

}

void verifierGrille(char couleur_a_devine[4][50],char couleur_essai[4][50],int *correct, int *partiellement_correct){
    
    *correct=0;
    *partiellement_correct=0;
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(couleur_a_devine[i], couleur_essai[i])==0)
        {
            *correct+=1;
        }
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(couleur_a_devine[j],couleur_essai[i])==0)
            {
                *partiellement_correct+=1;
            }   
        }        
    }    
}