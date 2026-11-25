#ifndef DONNEES_ANNEE_H
#define DONNEES_ANNEE_H

#define ANNEE_MIN 2005
#define ANNEE_MAX 2024
#define NB_ANNEES 2024
#define NB_GRAVITES 5


// Statistiques pour une annee

typedef struct {
    int annee;
    int nombre_accidents;
    int victimes[NB_GRAVITES];
} StatistiquesAnnee;


// Tableau contenant les statistiques des 20 NB_ANNEES

typedef struc {
    StatistiquesAnnee annees[NB_ANNEES];
} DonneesAnnee;


// Prototypes des fonctions

void initialiser_donnees_annees(DonneesAnnees *donnees);

void ajouter_accident(DonneesAnnees *donnees, int annee);

void ajouter_victime(DonneesAnnees *donnees, int annee, int gravite);

#endif





