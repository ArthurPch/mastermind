#include "mastermind.h"

int main() {
    char couleur_a_devine[4][50];
    char couleur_essai[4][50];
    int correct = 0;
    int partiellement_correct = 0;
    int tentatives = 1;
    system("cls");
    printf("Bienvenue dans le MASTERMIND !\n");
    initialiserGrille(couleur_a_devine);
    system("cls");
    
    while (correct != 4 && tentatives < 10) {
        printf("Essais : %d/10\n", tentatives);
        initialiserGrille(couleur_essai);        
        verifierGrille(couleur_a_devine, couleur_essai, &correct, &partiellement_correct);
        printf("Il y a %d correct(s) et %d partiellement correct(s)\n\n", correct, partiellement_correct);
        Sleep(2000);
        tentatives++;
    }
    
    return 0;
}