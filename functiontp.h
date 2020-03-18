#ifndef __FUNCTIONTP_H
#define __FUNCTIONTP_H

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//  Constantes de mes fonctions
#define N_1 1
#define N_2 2
#define N_3 3
#define N_100 100
#define N_1000 1000
#define N_10000 10000

//  Constantes de la fonction RTBIS
#define MAXIT 100
#define PI 3.14159
#define G 9.81
#define PRECISIONX 0.00000000000000000001
#define PRECISIONX2 1e-7
#define PRECISIONX3 1e-15
#define PRECISIONX4 1e-27
#define PRECISIONX5 1e-28
#define PRECISIONZERO 0.0000000000000000001
#define PRECISIONZERO2 0.001
#define PRECISIONZERO3 0.00001

//  Prototypes de mes fonctions
short additionSINT(short int n1, short int n2);
float epsilonf();
double epsilond();
float sommef(float tmp);
double sommed(double tmp);
float float_s_asc(float n);
float float_s_desc(float n);
double double_s_asc(double n);
double double_s_desc(double n);

//  Prototypes des fonctions de couleurs
void texteJauneGras(char *texte);
void texteVert(char *texte);
void texteRouge(char *texte);
void texteBleu(char *texte);

//  Prototypes des fonctions ecrites par le professeur Francois Meunier
short lireShortValidationETConversion();
double rtbis(double x1, double x2, double theta0, double v0, double y0, double xacc, double zeroacc);
double rtbis2(double x1, double x2, double theta0, double v0, double y0, double xacc, double zeroacc);

#endif