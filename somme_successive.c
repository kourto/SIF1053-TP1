#include "functiontp.h"

/************************************************************************
    *   somme_successive.c       Auteur: Courteau, Yves         *
    *                                                           *
    *   Propagation des erreurs d'arrondi.  IEEE754             *
    *                                                           *
    *   Algorithme: Sommation successive                        *
    *                                                           *
************************************************************************/

//  sommef [Sommation succesive (float)]
//  INPUT   :   Constantes: N_100, N_1000 & N_10000, soit respectivement les valeurs 100, 1000 & 10 000.
//  OUTPUT  :   Somme successive + la constante qui a ete utilisee.
float sommef(float tmp)
{
    float somme = 0;
    float N = tmp;

    for(int i=1; i <= N; i++)
    {
        somme += 1.0 / N; // 1.0/N = saut
    }
    texteVert("Somme successive (float): ");
    printf("%2.30f", somme);
    texteVert(" pour N = ");
    printf("%5.f\n", tmp);
    texteRouge("Erreur (float): ");
    printf("%2.30f ", 1.0-somme);
    texteRouge("pour N = ");
    printf("%5.f\n\n", tmp);

    return somme;
}

//  sommed [Sommation succesive (double)]
//  INPUT   :   Constantes: N_100, N_1000 & N_10000, soit respectivement les valeurs 100, 1000 & 10 000.
//  OUTPUT  :   Somme successive + la constante qui a ete utilisee.
double sommed(double tmp)
{
    double somme = 0;
    double N = tmp;

    for(int i = 1; i <= N; i++)
    {
        somme += 1.0 / N; // 1.0/N = saut
    }
    texteVert("Somme successive (double): ");
    printf("%2.30lf", somme);
    texteVert(" pour N = ");
    printf("%5.lf", tmp);
    texteRouge("\nErreur (double): ");
    printf("%2.30lf ", 1.0-somme);
    texteRouge("pour N = ");
    printf("%5.lf\n\n", tmp);

    return somme;
}
