#include <iostream>
#include <algorithm>
#include "reseau2.hpp"

using namespace std;

namespace transformers{

    Reseau2::Reseau2(vector<Objet2> vectorObjets2,vector<vector<int>> mat)
        :vectorObjets{vectorObjets2},m{mat}
    {}
   
    vector<Objet> Reseau2::DonneMoiLeSuivant(const Objet& o){
        vector<Objet> suivants;
        int num;
        int taille = static_cast<int>(vectorObjets.size());
        vector<Objet2>::iterator it = find(vectorObjets.begin(), vectorObjets.end(), o );
        if(it != vectorObjets.end()){
            num = it->getNumObjet();

            for(int i = 0; i < taille; i++){
                if(m[num][i] == 1)
                    suivants.push_back(vectorObjets[i]);


            }
        }
        return suivants;
    }
   
    vector<Objet2> Reseau2::getVector()const{
        return vectorObjets;
    }

    vector<vector<int>> Reseau2::getMatrice()const{
        return m;
    }

   ostream& operator<<(ostream& os,const Reseau2& r){
        int taille = static_cast<int>(r.getVector().size());
        os << "{ ";
        for(auto o : r.getVector())
            os << o;
        os <<"}"<<endl;
        for(int i = 0; i < taille; i++){
            if(i == 0)
                os << "/ ";
            else if(i == taille - 1)
                    os << "\\ ";
                else
                    os << "| ";
            for(int j = 0; j < taille; j++)
                os << r.getMatrice()[i][j] <<" ";
            if(i == 0)
                os << "\\ " << endl;
            else if(i == taille - 1)
                    os << "/" << endl;
                else
                    os << "|" << endl;
        }
        return os;
    }
}