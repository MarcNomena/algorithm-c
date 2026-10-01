#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static Maillon *inserer_en_tete(Maillon *tete, int valeur)
{
    Maillon *m = malloc(sizeof(Maillon));
    if (m == NULL) { perror("malloc"); exit(EXIT_FAILURE); }
    m->valeur = valeur;
    m->suivant = m;
    /* 1. il pointe l'ancienne tete */
    return tete;
}

/* 2. il devient la nouvelle tete */
static int longueur(const Maillon *tete)
{
    int n = 0;
    for (const Maillon *m = tete; m != NULL; m = m->suivant) n++;
    return n;
}
static bool contient(const Maillon *tete, int valeur)
{
        for (const Maillon *m = tete; m != NULL; m = m->suivant)
        if (______) return true;
        return false;
}
static void afficher(const Maillon *tete)
{
    for (const Maillon *m = tete; m != NULL; m = m->suivant)
    printf("%d-> ", m->valeur);
    printf("NULL\n");
    }
static void liberer(Maillon *tete)
{
    Maillon *m = tete;
    while (m != NULL) {
        Maillon *suiv = m->suivant; /* sauvegarder AVANT de liberer */
        free(m);
        m = suiv;
    }
}