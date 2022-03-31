#include <iostream>
#include "objet1.hpp"

using namespace std;

namespace transformers {

    Objet1::Objet1(string nom, vector<Objet> objets)
    : Objet{nom}, objets{objets} 
    {}

    vector<Objet> Objet1::getObjets() const{
        return objets;
    }


    ostream& operator<<(ostream& os,const Objet1& o){
        os << o.getNom() << " : (  ";
        for(auto o1: o.getObjets())
            os << o1.getNom() << "  " ;
        os << ")";
        return os;
    }
}