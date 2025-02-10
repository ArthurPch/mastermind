#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <stdio.h>
#include <windows.h>
#include <string.h>

void initialiserGrille(char couleur[4][50]);
void verifierGrille(char couleur_a_devine[4][50],char couleur_essai[4][50],int *correct, int *partiellement_correct);
#endif