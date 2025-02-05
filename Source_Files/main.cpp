// File : main.cpp
// Author : Mandled
// Created on 4 février 2025, 17 h 39

#include "Ascenseur.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main ()
{
    srand(time(0)); 
    int etageAleatoire = rand() % 7;
    // Création de deux ascenseurs à des étages differents
    Ascenseur ascenseur1(etageAleatoire);
    Ascenseur ascenseur2(etageAleatoire);

    // Affichage des étages
    cout << "Ascenseur 1 : ";
    ascenseur1.afficher();
    cout << endl;
    
    cout << "Ascenseur 2 : ";
    ascenseur2.afficher();
    cout << endl;

    // Etage où nous sommes 
    int etageActuel;
    cout << "A quel etage sommes nous ?" << endl;
    cin >> etageActuel;
    
    // Vérification étage valide
    if (etageActuel < 0 || etageActuel > 6) 
    {
        cout << "Erreur : L'etage doit etre entre 0 et 6." << endl;
        return 1;
    }

    /*
    int etageVoulu;
    cout << "A quel étage voulons nous aller ?" << endl;
    cin >> etageVoulu;
    
    // Vérification étage valide
    if (etageVoulu < 0 || etageVoulu > 6) 
    {
        cout << "Erreur : L'étage doit être entre 0 et 6." << endl;
        return 1;
    }
    */
    return 0;
}



