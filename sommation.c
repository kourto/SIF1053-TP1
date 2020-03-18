#include "functiontp.h"

/************************************************************************
    *   sommation.c       Auteur: Courteau, Yves                *
    *                                                           *
    *   Propagation des erreurs d'arrondi.                      *
    *                                                           *
    *   Algorithme: sommation ascendante & descendante          *
    *                                                           *
************************************************************************/

//  float_s_asc [Sommation ascendante (float)]
//  INPUT   :   Constantes N_1, N_2, N_3, soit respectivement les valeurs 1, 2 & 3.
//  OUTPUT  :   resultat de la sommation et l'exposant utilise...
float float_s_asc(float n)
{
    float somme = 0;

    for(int i = 1; i <= 32767; i++)
    {
        somme += 1.0 / pow((double)i, (double)n);
    }

    texteVert("Somme asc (float) = ");
    printf("%2.30f\t%2.6f\n", somme, n);
    
    return somme;
}

//  float_s_desc [Sommation descendante (float)]
//  INPUT   :   Constantes N_1, N_2, N_3, soit respectivement les valeurs 1, 2 & 3.
//  OUTPUT  :   resultat de la sommation et l'exposant utilise...
float float_s_desc(float n)
{
    float somme = 0;

    for(int i = 32767; i >= 1; i--)
    {
        somme += 1.0 / pow((double)i, (double)n);
    }

    texteBleu("Somme desc (float) = ");
    printf("%2.30f\t%2.6f\n", somme, n);

    return somme;
}

//  float_s_asc [Sommation ascendante (double)]
//  INPUT   :   Constantes N_1, N_2, N_3, soit respectivement les valeurs 1, 2 & 3.
//  OUTPUT  :   resultat de la sommation et l'exposant utilise...
double double_s_asc(double n)
{
    double somme = 0;

    for(int i = 1; i <= 32767; i++)
    {
        somme += 1.0 / pow((double)i, (double)n);
    }

    texteVert("Somme asc (double) = ");
    printf("%2.30f\t%2.6f\n", somme, n);

    return somme;
}

//  float_s_desc [Sommation ascendante (double)]
//  INPUT   :   Constantes N_1, N_2, N_3, soit respectivement les valeurs 1, 2 & 3.
//  OUTPUT  :   resultat de la sommation et l'exposant utilise...
double double_s_desc(double n)
{
     float somme = 0;

    for(int i = 32767; i >= 1; i--)
    {
        somme += 1.0 / pow((double)i, (double)n);
    }

    texteBleu("Somme desc (double) = ");
    printf("%2.30f\t%2.6f\n", somme, n);

    return somme;
}
