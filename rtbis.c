/************************************************************************
    *   rtbis.c                                                 *
    *                             Auteur: Francois Meunier      *
    *                                                           *
    *   Fonctions utilitaires permettant de calculer la         *
    *   racine d'une fonction parabolique donnant la distance   *
    *   horizontale (x) parcourue par une balle.                *
    *                                                           *
************************************************************************/

#include "functiontp.h"

/*
Fonction qui calcule la valeur de la fonction parabolique, qui calcul la position y (hauteur) d'une balle sur sa 
trajectoire en x
*/
double F(double x, double theta0, double v0, double y0)
{
    return (tan(theta0*PI/180.0)*x-((G/(2.0*v0*v0*cos(theta0*PI / 180.0)*cos(theta0*PI / 180.0)))*x*x)+y0);
}

/*
Fonction qui calcule la valeur de la position x  pour y = 0 donnant la distance parcourue  d'une balle 
*/
double rtbis(double x1, double x2, double theta0, double v0, double y0, double xacc, double zeroacc)
{
    int j;
    float dx, f, fmid, xmid, rtb;

    f = F(x1, theta0, v0, y0);
    fmid = F(x2, theta0, v0, y0);
    if (f*fmid >= 0.0) printf("Racine absente de cet intervalle dans RTBIS\n\n");
    rtb = f < 0.0 ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (j = 1; j <= MAXIT; j++) {
        fmid = F(xmid = rtb + (dx *= 0.5), theta0, v0, y0);
        if (fmid <= 0.0) rtb = xmid;
        if (fabs(dx) < xacc || fabs(fmid) < zeroacc)
        {
            texteVert("Nombre d'iterations: ");
            printf("%d", j);
            texteBleu(" dx: ");
            printf("%17.25lf", dx);
            texteRouge(" f(rtb): ");
            printf("%17.15lf\n", fmid);
            return rtb;                          
        }
    }
    texteRouge("Trop de bissections dans RTBIS\n\n");
    return rtb;
}
/*  Pratiquement la meme fonction que rtbis, mais avec la condition "fabs(fmid) < zeroacc" en moins pour 
voir les impacts des changements sur PRECISIONZERO  */
double rtbis2(double x1, double x2, double theta0, double v0, double y0, double xacc, double zeroacc)
{
    int j;
    float dx, f, fmid, xmid, rtb;

    f = F(x1, theta0, v0, y0);
    fmid = F(x2, theta0, v0, y0);
    if (f*fmid >= 0.0) printf("Racine absente de cet intervalle dans RTBIS\n\n");
    rtb = f < 0.0 ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (j = 1; j <= MAXIT; j++) {
        fmid = F(xmid = rtb + (dx *= 0.5), theta0, v0, y0);
        if (fmid <= 0.0) rtb = xmid;
        if (fabs(fmid) < zeroacc)
        {
            texteVert("Nombre d'iterations: ");
            printf("%d", j);
            texteBleu(" dx: ");
            printf("%17.25lf", dx);
            texteRouge(" f(rtb): ");
            printf("%17.15lf\n", fmid);
            return rtb;                          
        }
    }
    texteRouge("Trop de bissections dans RTBIS\n\n");

    return rtb;
}
