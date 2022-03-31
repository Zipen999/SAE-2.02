#include <iostream>
#include "objet2.hpp"

using namespace std;

namespace transformers {

    Objet2::Objet2(string nom, int numObj)
    : Objet{nom}, numObj{numObj} 
    {}

    int Objet2::getNumObjet() const{
        return numObj;
    }

    ostream& operator<<(std::ostream& os,const Objet2& o){
        os << o.getNom() << "=" << o.getNumObjet() <<" ";
        return os;
    }
}