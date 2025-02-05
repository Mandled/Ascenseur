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
    // Création de deux ascenseurs à des étages differents
    srand(time(0));
    Ascenseur ascenseur1;
    Ascenseur ascenseur2; 

    // Affichage des étages
    cout << "Ascenseur 1 : ";
    ascenseur1.afficher();
    cout << endl;
    
    cout << "Ascenseur 2 : ";
    ascenseur2.afficher();
    cout << endl;

    // Etage où nous sommes 
    int etageActuel;
    do
    {
        cout << "A quel etage sommes nous ?" << endl;
        cin >> etageActuel;

        if (cin.fail())
        {
            cout << "Erreur 1 : Ce n'est pas un etage valide" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (etageActuel < 0 || etageActuel > 6) 
        {
            cout << "Erreur 2 : L'etage doit etre entre 0 et 6." << endl;
        }  

    }   while (etageActuel < 0 && etageActuel > 6 || cin.fail()); // Ca marchais pas pour les fail

    
    // Vérification étage valide
    // else if (etageActuel < 0 || etageActuel > 6) 
    // {
    //    cout << "Erreur 2 : L'etage doit etre entre 0 et 6." << endl;
    //    return 1;
    //}

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



