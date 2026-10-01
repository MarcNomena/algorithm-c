#ifndef LIST_H
#define LIST_H

typedef struct Maillon {
int valeur;
Maillon* next;
} Maillon;

Maillon *inserer_en_tete(Maillon *tete, int valeur);
int longueur(const Maillon *tete);
bool contient(const Maillon *tete, int valeur);
void afficher(const Maillon *tete);
void liberer(Maillon *tete);
void exercice_6(void);

#endif /* LIST_H */
