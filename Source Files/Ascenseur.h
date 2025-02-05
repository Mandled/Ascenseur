#ifndef ASCENSEUR_H
#define ASCENSEUR_H

#include <iostream>

using namespace std;

class Ascenseur
{   
// Etat d'un objet : décrit par ses attributs
// Attributs dans la section privée
private:
    int m_etageAscenseur; // Etage de l'ascenseur

// Comportement de l'objet
// Méthodes dans la section publique      
public:
    // Constructeurs
    Ascenseur(); // Constructeur par défaut
    Ascenseur(int etageAleatoire);

    // Méthodes
    void afficher() const;
    // int selectionnerAscenseur() const;
    
    // Getter et Setter
    int getEtageAcscenseur() const;
    void setEtageAscenseur(int etageAleatoire);

 
};

#endif // ASCENSEUR_H
