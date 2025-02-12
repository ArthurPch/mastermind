#include "mastermind.h"

int main() {
    char couleur_a_devine[5][50]; 
    char couleur_essai[5][50];
    int correct = 0;
    int partiellement_correct = 0;
    int tentatives = 1;
    int nb_couleurs;
    int choix;

    system("cls");
    printf("+----------- Bienvenue dans le MASTERMIND -----------+\n"); 
    printf("|  A quelle difficulte voulez-vous vous confronter ? |\n");
    printf("|                 1. MasterMind                      |\n");
    printf("|              2. Super MasterMind                   |\n");
    printf("+----------------------------------------------------+\n\n");
    scanf("%d", &choix);
    if (choix == 1) {
        nb_couleurs = 4;
    }
    else if (choix == 2) {
        nb_couleurs = 5;
    }
    else {
        printf("Erreur de saisie : entrez 1 ou 2 apres avoir relance le programme !");
        return 0;
    }

    initialiserCouleurs(couleur_a_devine, nb_couleurs);
    system("cls");
    
    while (correct != nb_couleurs && tentatives <= 10) {
        if (nb_couleurs == 4) {
            printf("Essais : %d/10\n", tentatives);
        }
        else {
            printf("Essais : %d/12\n", tentatives);
        }
        initialiserCouleurs(couleur_essai, nb_couleurs);        
        verifierGrille(couleur_a_devine, couleur_essai, &correct, &partiellement_correct, nb_couleurs);
        printf("Il y a %d correct(s) et %d partiellement correct(s)\n\n", correct, partiellement_correct);
        Sleep(1000);
        tentatives++;
    }

    if (tentatives == 10) {
        printf("Dommage, vous n'avez pas ete assez rapide !");
    }
    else {
        printf("Bravo vous avez trouve la bonne combinaison !");
    }
    
    return 0;
}