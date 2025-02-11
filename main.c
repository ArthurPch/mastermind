#include "mastermind.h"

int main() {
    char couleur_a_devine[4][50];
    char couleur_essai[4][50];
    int correct = 0;
    int partiellement_correct = 0;
    
    initialiserGrille(couleur_a_devine);
    
    while (correct != 4) {
        printf("Choisis une combinaison de 4 couleurs : ");
        scanf("%s %s %s %s", couleur_essai[0], couleur_essai[1], couleur_essai[2], couleur_essai[3]);
        
        verifierGrille(couleur_a_devine, couleur_essai, &correct, &partiellement_correct);
        printf("Il y a %d correct(s) et %d partiellement correct(s)\n", correct, partiellement_correct);
        Sleep(1000);
    }
    
    return 0;
}