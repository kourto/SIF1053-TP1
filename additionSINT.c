#include "functiontp.h"

/************************************************************************
    *   additionSINT.c       Auteur: Courteau, Yves             *
    *                                                           *
    *   Fonction qui additionne deux variables de type short    *
    *   int et verifie si la somme donne un cas d'overflow      *
    *   positif, d'overflow negatif ou encore s'il n'y a        *
    *   aucun overflow.                                         *
************************************************************************/


//  additionSINT
//  INPUT   :   n1 & n2 (short int choisi par l'utilisateur)
//  OUTPUT  :   somme & si il y a overflow positif, negatif ou aucun  
short additionSINT(short int n1, short int n2)
{
    short int somme;
    somme = n1 + n2;

    if (n1 > 0 && n2 > 0 && somme < 0)
    {
        printf("\n%hd + %hd = %hd\t->", n1, n2, somme);
        texteRouge("\tOverflow positif.\n\n");
    }
    else if (n1 < 0 && n2 < 0 && somme >= 0)
    {
        printf("\n%hd + %hd = %hd\t->", n1, n2, somme);
        texteRouge("\tOverflow negatif.\n\n");
    }
    else
    {
        printf("\n%hd + %hd = %hd\t->", n1, n2, somme);
        texteRouge("\tAucun overflow.\n\n");
    }
    
    return somme;
}
