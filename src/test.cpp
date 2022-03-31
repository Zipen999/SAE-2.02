#include <iostream>
#include "test.hpp"

using namespace std;
using namespace transformers;

Reseau1 testReseau1(vector<Objet> &vObjets){
    //Charge les vectors de reseau1 et test en appelant la fonction algo 
	Reseau1 res1 {
        vector<Objet1>{
            Objet1{vObjets[0].getNom(),vector<Objet>{vObjets[1],vObjets[2]}}, 
            Objet1{vObjets[1].getNom(),vector<Objet>{vObjets[2],vObjets[8]}}, 
            Objet1{vObjets[2].getNom(),vector<Objet>{vObjets[3],vObjets[7]}}, 
            Objet1{vObjets[3].getNom(),vector<Objet>{vObjets[5],vObjets[6],vObjets[4],vObjets[2]}}, 
            Objet1{vObjets[4].getNom(),vector<Objet>{vObjets[6],vObjets[7]}},
            Objet1{vObjets[5].getNom(),vector<Objet>{vObjets[2],vObjets[6],vObjets[4]}},
            Objet1{vObjets[6].getNom(),vector<Objet>{vObjets[9]}},
            Objet1{vObjets[7].getNom(),vector<Objet>{vObjets[9]}},
            Objet1{vObjets[8].getNom(),vector<Objet>{vObjets[7],vObjets[9]}},
            Objet1{vObjets[9].getNom(),vector<Objet>{}}
        }
    };

    cout << res1 << endl;
    return res1;
}

Reseau2 testReseau2(vector<Objet> &vObjets){
        //Charge les vectors de reseau2 pour créer la matrice et test en appelant la fonction algo 
    vector<Objet2> vObjets2;

    for(int i = 0; i < static_cast<int>(vObjets.size()); i++)
        vObjets2.push_back(Objet2{vObjets[i].getNom(),i});
    
    int taille = static_cast<int>(vObjets2.size());
    vector<vector<int>> matrice(taille,vector<int>(taille,0)) ;
    matrice[0][1] = 1;
    matrice[0][2] = 1;
    matrice[1][2] = 1;
    matrice[1][8] = 1;
    matrice[2][3] = 1;
    matrice[2][7] = 1;
    matrice[3][2] = 1;
    matrice[3][4] = 1;
    matrice[3][5] = 1;
    matrice[3][6] = 1;
    matrice[4][6] = 1;
    matrice[4][7] = 1;
    matrice[5][2] = 1;
    matrice[5][6] = 1;
    matrice[5][4] = 1;
    matrice[6][9] = 1;
    matrice[7][9] = 1;
    matrice[8][7] = 1;
    matrice[8][9] = 1;

    Reseau2 res2{vObjets2,matrice};

    cout << res2 << endl;
    return res2;
}

vector<Objet> Remplissage(){  // Crée les objets et les mets dans un vector
    vector<Objet> vObjets { 
        Objet{"Arbre"}, //0
        Objet{"Buche"}, //1
        Objet{"Planche"}, //2 
        Objet{"Table"}, //3
        Objet{"Bouclier"}, //4
        Objet{"Porte"}, //5
        Objet{"Plateau"}, //6
        Objet{"Epee"}, //7
        Objet{"Gourdin"}, //8
        Objet{"Couteau"} //9
    };
 return vObjets;
}