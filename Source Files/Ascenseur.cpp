#include "Ascenseur.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Constructeur par défaut (ascenseur au rdc)
// Ascenseur::Ascenseur() : m_etageAscenseur(0) {}

// Constructeur avec un étage aléatoire
srand(time(0));
int etageAleatoire = rand() % 6;
Ascenseur::Ascenseur(int etageAleatoire) : m_etageAscenseur(etageAleatoire) {}

// Affiche l'étage de l'ascenseur
void Ascenseur::afficher() const 
{
    cout << "L'ascenseur est à l'étage " << m_etageAscenseur << "." << endl;
}


// Getter pour l'étage de l'ascenseur
int Ascenseur::getEtageAscenseur() const 
{
    return m_etageAscenseur;
}

// Setter pour changer l'étage actuel
void Ascenseur::setEtageAscenseur(int etageAleatoire) 
{
    if (etageAleatoire >= 0 && etageAleatoire <= 6) 
    {
        m_etageAscenseur = etageAleatoire;
    } 
    else 
    {
        cout << "Erreur : L'étage doit être entre 0 et 6." << endl;
    }
}



