#include "mastermind.h"

int couleurValide(char color[50]) {
    char couleurs[8][50] = {"rouge", "jaune", "bleu", "orange", "vert", "blanc", "violet", "rose"};
    for (int i = 0; i < 8; i++) { 
        if (strcmp(color, couleurs[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void initialiserGrille(char couleur[4][50]){
    int couleurs_valides = 0;
    while (!couleurs_valides) {
        printf("Choisis une combinaison de 4 couleurs ");
        printf("parmis : rouge, jaune, bleu, orange, vert, blanc, violet, rose\n");
        
        scanf("%s %s %s %s", couleur[0], couleur[1], couleur[2], couleur[3]);

        couleurs_valides = 1;
        for (int i = 0; i < 4; i++) {
            if (!couleurValide(couleur[i])) {
                couleurs_valides = 0;
                break;
            }
        }
        if (!couleurs_valides) {
            printf("Veuillez choisir parmi les couleurs valides\n");
        }
        Sleep(1000);
    }
}

void verifierGrille(char couleur_a_devine[4][50], char couleur_essai[4][50], int *correct, int *partiellement_correct) {
    *correct = 0;
    *partiellement_correct = 0;
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(couleur_a_devine[i], couleur_essai[i]) == 0)
        {
            *correct += 1;
        }
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(couleur_a_devine[j],couleur_essai[i]) == 0)
            {
                *partiellement_correct += 1;
            }   
        }        
    }    
}