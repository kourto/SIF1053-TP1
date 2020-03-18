#include "functiontp.h"

/************************************************************************
    *   main.c       Auteur: Courteau, Yves                     *
    *                                                           *
    *   SIF1053, TP1.                                           *
    *                                                           *
    *   Le fichier principal du TP, un simple menu qui donne    *
    *   a l'utilisateur le choix entre plusieurs fonctions...   *
    *                                                           *
************************************************************************/

int main()
{
    short choix;
    bool continuer = true;

    //  Titre ASCII ART
    printf("\n\n███████╗██╗███████╗ ██╗ ██████╗ ███████╗██████╗               ████████╗██████╗  ██╗\n");
    printf("██╔════╝██║██╔════╝███║██╔═████╗██╔════╝╚════██╗              ╚══██╔══╝██╔══██╗███║\n");
    printf("███████╗██║█████╗  ╚██║██║██╔██║███████╗ █████╔╝    █████╗       ██║   ██████╔╝╚██║\n");
    printf("╚════██║██║██╔══╝   ██║████╔╝██║╚════██║ ╚═══██╗    ╚════╝       ██║   ██╔═══╝  ██║\n");
    printf("███████║██║██║      ██║╚██████╔╝███████║██████╔╝                 ██║   ██║      ██║\n");
    printf("╚══════╝╚═╝╚═╝      ╚═╝ ╚═════╝ ╚══════╝╚═════╝                  ╚═╝   ╚═╝      ╚═╝\n\n");

    printf("\tChoix des fonctions a tester:\n\n");
    printf("\t[1] - Verificateur d'overflow\n\t[2] - Epsilon\n\t[3] - Somme successive (float)\n\t[4] - Somme successive (double)\n");
    printf("\t[5] - Somme asc/desc (float)\n\t[6] - Somme asc/desc (double)\n\t[7] - rtbis (PRECISIONX)\n\t[8] - rtbis (PRECISIONZERO)\n\n");

    while(continuer == true)
    {
        texteJauneGras("CTRL+C pour arreter le programme.\n\n");
        
        printf("[+] Selection (1 a 8): ");
        choix = lireShortValidationETConversion();
        while(choix<1 || choix > 8)
        {
            printf("Selection (1 a 8): ");
            choix = lireShortValidationETConversion();
        }
        printf("\n\n");

        if(choix == 1)
        {
            short int n1, n2;

            //  Demande deux nombres entier et les affecte a des short int
            printf("Ecrire un premier nombre entre %d et %d: ", SHRT_MIN+1, SHRT_MAX-1);
            n1 = lireShortValidationETConversion();

            printf("Ecrire un deuxieme nombre entre %d et %d: ", SHRT_MIN+1, SHRT_MAX-1);
            n2 = lireShortValidationETConversion();

            additionSINT(n1, n2);
        }
        else if(choix == 2)
        {
            epsilonf();
            epsilond();
        }
        else if(choix == 3)
        {
            sommef(N_100);
            sommef(N_1000);
            sommef(N_10000);
        }
        else if(choix == 4)
        {
            sommed(N_100);
            sommed(N_1000);
            sommed(N_10000);
        }
        else if(choix == 5)
        {
            //  Sous-menu
            short int choixSommation;
            printf("\t[1] - Sommation ascendante (float)\n\t[2] - Sommation descendante (float)\n\n");
            printf("\t[-] Selection (1 ou 2): ");
            choixSommation = lireShortValidationETConversion();
            while(choixSommation < 1 || choixSommation > 2)
            {
                printf("\t[1] - Sommation ascendante (float)\n\t[2] - Sommation descendante (float)\n\n");
                printf("\t[-] Selection (1 ou 2): ");
                choixSommation = lireShortValidationETConversion();
            }

            if(choixSommation == 1)
            {
                printf("\n\n");
                float_s_asc(N_1);
                float_s_asc(N_2);
                float_s_asc(N_3);
                printf("\n");
            }
            else
            {
                printf("\n\n");
                float_s_desc(N_1);
                float_s_desc(N_2);
                float_s_desc(N_3);
                printf("\n");
            }
        }
        else if(choix == 6)
        {
            //  Sous-menu
            short int choixSommation;
            printf("\t[1] - Sommation ascendante (double)\n\t[2] - Sommation descendante (double)\n\n");
            printf("\t[-] Selection (1 ou 2): ");
            choixSommation = lireShortValidationETConversion();
            while(choixSommation < 1 || choixSommation > 2)
            {
                printf("\t[1] - Sommation ascendante (double)\n\t[2] - Sommation descendante (double)\n\n");
                printf("\t[-] Selection (1 ou 2): ");
                choixSommation = lireShortValidationETConversion();
            }

            if(choixSommation == 1)
            {
                printf("\n\n");
                double_s_asc(N_1);
                double_s_asc(N_2);
                double_s_asc(N_3);
                printf("\n");
            }
            else
            {
                printf("\n\n");
                double_s_desc(N_1);
                double_s_desc(N_2);
                double_s_desc(N_3);
                printf("\n");
            }
        }
        else if(choix == 7)
        {
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis(1, 300, 30, 50, 2, PRECISIONX, PRECISIONZERO));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis(1, 300, 30, 50, 2, PRECISIONX2, PRECISIONZERO));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis(1, 300, 30, 50, 2, PRECISIONX3, PRECISIONZERO));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis(1, 300, 30, 50, 2, PRECISIONX4, PRECISIONZERO));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis(1, 300, 30, 50, 2, PRECISIONX5, PRECISIONZERO));
            printf("________________________\n\n");
        }
        else
        {
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis2(1, 300, 30, 50, 2, PRECISIONX4, PRECISIONZERO));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis2(1, 300, 30, 50, 2, PRECISIONX4, PRECISIONZERO2));
            printf("________________________\n\n");
            printf("Valeur de la racine (bissection) = %lf m.\n", rtbis2(1, 300, 30, 50, 2, PRECISIONX4, PRECISIONZERO3));
            printf("________________________\n\n");
        }
    }

    return 0;
}
