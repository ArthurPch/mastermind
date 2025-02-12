#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <stdio.h>
#include <windows.h>
#include <string.h>

void initialiserCouleurs(char couleur[][50], int nb_couleurs);
void verifierGrille(char couleur_a_devine[][50], char couleur_essai[][50], int *correct, int *partiellement_correct, int nb_couleurs);

#endif