#include"algo.hpp"
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace transformers{
    //Cette fonction est notre algo principale, il fonctionne avec les 2 réseaux, il vérifie si l'ojet voulu est trouver sinon il appelle DonneMoiLeSuivant pour pouvoir ce rappeller en récursive mais avec la transformation suivante, l'opération ce répète j'usqu'a l'objet voulu trouver ou si le chemin n'est pas possible, ensuite la fonction affiche le chemin enregistrer dans le vector Chemin
    void algo(const Objet& ObjetVoulu,const Objet& ObjetDonnee, Reseau &res, vector<Objet> Chemin,int *cpt){
        vector<Objet> V = res.DonneMoiLeSuivant(ObjetDonnee);
        Chemin.push_back(ObjetDonnee);
        if(ObjetDonnee == ObjetVoulu){
            for (auto af : Chemin)
                if(af == Chemin.back())
                    cout << af.getNom() << endl;
                else
                    cout << af.getNom() << "->";
            *cpt+=1;
            return;
        }
        if(V.empty())
            return;
        for(auto i : V){
            vector<Objet>::iterator it = find(Chemin.begin(), Chemin.end(), i );
            if(it == Chemin.end())
                algo(ObjetVoulu, i,res,Chemin,cpt);
        }

    }
}