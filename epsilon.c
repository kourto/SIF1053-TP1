#include "functiontp.h"

/************************************************************************
    *   epsilon.c       Auteur: Courteau, Yves                  *
    *                                                           *
    *   Fonctions qui trouve l'epsilon de la machine ainsi que  *
    *   le nombre de chiffres significatifs.                    *
    *                                                           *
************************************************************************/

//  epsilonf (float)
//  
//  OUTPUT  :   L'epsilon de la machine, le nombre de chiffres significatifs
//              ainsi que l'affichage de la constante FLT_EPSILON (pour verifier si le resultat est bon)
float epsilonf()
{
    float eps = 1.0;
    int n = 0;
    float unpluseps = 1 + eps;

    while(unpluseps>1.0)
    {
        eps = eps / 2.0;
        unpluseps = 1 + eps;
        n++;
    }
    eps = eps * 2.0;
    n--;
    texteVert("\nEpsilon (float): ");
    printf("%2.30f", eps);
    texteBleu("\nNombre de chiffres significatifs (float): ");
    printf("%d\n\n", n);
    texteRouge("Constante FLT_EPSILON provenant de <float.h> pour verification des resultats: ");
    printf("%2.30f\n\n", FLT_EPSILON);
    
    return eps;
}

//  epsilond (double)
//
//  OUTPUT  :   L'epsilon de la machine, le nombre de chiffres significatifs
//              ainsi que l'affichage de la constante DBL_EPSILON (pour verifier si le resultat est bon)
double epsilond()
{
    double eps = 1.0;
    int n = 0;
    double unpluseps = 1 + eps;

    while(unpluseps>1.0)
    {
        eps = eps / 2.0;
        unpluseps = 1 + eps;
        n++;
    }
    eps = eps * 2.0;
    n--;
    texteVert("\nEpsilon (double): ");
    printf("%2.30lf", eps);
    texteBleu("\nNombre de chiffres significatifs (double): ");
    printf("%d\n\n", n);
    texteRouge("Constante DBL_EPSILON provenant de <float.h> pour verification des resultat: ");
    printf("%2.30lf\n\n", DBL_EPSILON);

    return eps;
}