#include <algorithm>
#include <iostream>
#include "menu.hpp"
#include "test.hpp"

using namespace std;

namespace transformers{

    int choixReseau(){
        // Fonction qui demande a l'utilisateur de choisir le réseau voulu
        system("clear");
        int choix;
        cout << "#########################################################\n";
        cout << "#\t\t\t\t\t\t\t#\n";
        cout << "# Choisissez le type de reseau a utiliser: \t\t#\n";
        cout << "#\t 1) Reseau 1. \t\t\t\t\t#\n";
        cout << "#\t 2) Reseau 4. \t\t\t\t\t#\n";
        cout << "#\t\t\t\t\t\t\t#\n";
        cout << "#########################################################\n";

        cout << "Votre choix : ";
        cin >> choix;
        while(choix != 1 && choix != 2){ // Vérification de saisie
            cout << "Erreur, réessayer  : ";
            cin >> choix;
        }
        return choix;
    }

    void choixTransformation(vector<Objet>& vObjets, int *posDepart,int *posArrivee){
        // Fonction qui demande a l'utilisateur de choisir la transformation voulu (objet de depart -> objet d'arrivee)
        string objetDepart, objetArrivee;
        cout << "Entrer l'objet que vous avez : ";
        cin >> objetDepart;
        Objet objetD{objetDepart};
        vector<Objet>::iterator it1 = find(vObjets.begin(), vObjets.end(), objetD );
        while(it1 == vObjets.end()){ // Verification de saisie
            cout << "Nom d'objet incorrect (Respecter les majuscules), réessayer : ";
            cin >> objetDepart;
            Objet objetD{objetDepart};
            it1 = find(vObjets.begin(), vObjets.end(), objetD );
        }
        size_t pos1 = it1 - vObjets.begin(); // Calcul de la position de l'objet
        *posArrivee = static_cast<int>(pos1); // Conversion du size_t en int
            
        cout << "Entrer l'objet voulu : ";
        cin >> objetArrivee;
        Objet objetA{objetArrivee};
        vector<Objet>::iterator it2 = find(vObjets.begin(), vObjets.end(), objetA );
        while(it2 == vObjets.end()){
            cout << "Nom d'objet incorrect (Respecter les majuscules), réessayer : ";
            cin >> objetArrivee;
            Objet objetA{objetArrivee};
            it2 = find(vObjets.begin(), vObjets.end(), objetA );
        }
        size_t pos2 = it2 - vObjets.begin();
        *posDepart = static_cast<int>(pos2);
        cout << endl;
    }

    void menu(){
        vector<Objet> vObjets = Remplissage(); // Crée les objets et les mets dans un vector
        int choix=choixReseau(); // Récupere le choix de l'utilisateur
        int cpt;
        int posDepart, posArrivee;
        vector<Objet> chemin= {};
        // Vérification du choix, Création du réseau x, execution de l'algorithme
        if(choix == 1){ 
            Reseau1 res1=testReseau1(vObjets);
            choixTransformation(vObjets,&posDepart,&posArrivee);
            algo(vObjets[posDepart],vObjets[posArrivee],res1,chemin,&cpt);
        }
        if(choix == 2){
            Reseau2 res2=testReseau2(vObjets);
            choixTransformation(vObjets,&posDepart,&posArrivee);
            algo(vObjets[posDepart],vObjets[posArrivee],res2,chemin,&cpt);
        }
        // Si aucune transformation possible, message d'erreur
        if(cpt==0)
                cout << "Aucun chemin trouvé." << endl;
        cout << endl;
    }

}