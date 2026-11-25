#include "donnees_annee.h"

// Initialisation des statistiques de chaque donnees_annee

void initialiser_donnees_annees(DonneesAnnees *donnees) {
    int i, j;
    
    for(i = 0; i < NB_ANNEES; i++) {
        donnees->annees[i].annee = ANNEE_MIN + i;
        donnees->annees[i].nombre_accidents = 0;
        
        for (j = 0; j < NB_GRAVITES; j++) {
            donnees->annees[i].victimes[j] = 0;
        }
    }
}


//  Ajout d'un accident distinct

void ajouter_accident(DonneesAnnees *donnees, int annee) {
    int indice;
    
    if(annee >= ANNEE_MIN && annee <= ANNEE_MAX) {
        indice = annee - ANNEE_MIN;
        donnees->annees[indice].nombre_accidents++;
    }
}


// Ajout d'une personne selon sa gravite

void ajouter_victime(DonneesAnnees *donnees, int annee, int gravite) {
    int indice;
    
    if(annee >= ANNEE_MIN && annee <= ANNEE_MAX) {
        indice = annee - ANNEE_MIN;
        
     if (gravite < 1 || gravite >= NB_GRAVITES) {
            gravite = 0;
        }
        
        donnees->annees[indice].victimes[gravite]++;
    }
}
