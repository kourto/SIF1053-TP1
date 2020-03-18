#include "functiontp.h"

/************************************************************************
    *   couleur.c       Auteur: Courteau, Yves                  *
    *                                                           *
    *   Petites fonctions ultra simple pour changer la          *
    *   couleur du texte dans le terminal.                      *
    *                                                           *
************************************************************************/

void texteJauneGras(char *texte)
{
    printf("\033[1;33m");
    printf("%s", texte);
    printf("\033[0m");
}

void texteVert(char *texte)
{
    printf("\033[0;32m");
    printf("%s", texte);
    printf("\033[0m");
}

void texteRouge(char *texte)
{
    printf("\033[1;31m");
    printf("%s", texte);
    printf("\033[0m");
}

void texteBleu(char *texte)
{
    printf("\033[1;34m");
    printf("%s", texte);
    printf("\033[0m");
}
