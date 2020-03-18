#include "functiontp.h"

/************************************************************************
    *   lireShortValidationETConversion.c                       *
    *                             Auteur: Francois Meunier      *
    *                                                           *
    *   Fonction qui permet une lecture securitaire de short    *
    *                                                           *
    *   J'ai fais de mini ajout de message pour les entrees     *
    *   invalides...                                            *
    *                                                           *
************************************************************************/

short lireShortValidationETConversion(char *exception)
{
    char chaineAconvertir[100];
    int i, imin, nbCar = 0;
    int retVal = 0;
    int valide = 0;
    int chiffre = 0;
    int negatif = 0;
    int positif = 0;

    while (!valide)
    {
        negatif = 0;
        positif = 0;
        retVal = 0;

        if (fgets(chaineAconvertir, sizeof(chaineAconvertir), stdin) != NULL)
        {
            nbCar = strlen(chaineAconvertir);

            if (chaineAconvertir[0] == '-')
                negatif = 1;
            if (chaineAconvertir[0] == '+')
                positif = 1;

            if (nbCar <= 7) // nombre decimal trop grand
            {
                i = nbCar - 2;
                if (negatif || positif)
                    imin = 1;
                else
                    imin = 0;

                while (i >= imin)
                {
                    if (chaineAconvertir[i] >= '0' && chaineAconvertir[i] <= '9')
                    {
                        chiffre = chaineAconvertir[i] - '0';
                        retVal += chiffre * (int)(pow(10.0, nbCar - i - 2));
                        if ((negatif && (retVal > SHRT_MAX)) || (!negatif && (retVal > (SHRT_MAX-1))))
                        {
                            i = 0;
                            valide = 0;
                            retVal = 0;
                            printf("Entree invalide, essayer encore: ");
                        }
                        else
                        {
                            valide = 1;
                        }
                    }
                    else
                    {
                        i = 0;
                        valide = 0;
                        retVal = 0;
                        printf("Entree invalide, essayer encore: ");
                    }
                    i--;
                }
            }
        }
    }
    if (!negatif)
        return(retVal);
    else
        return(-retVal);
}
