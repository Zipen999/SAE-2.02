#include <iostream>
#include "objet.hpp"

using namespace std;

namespace transformers{
    
    Objet::Objet(string nom)
	    : nom{nom}
    {}

    string Objet::getNom() const {
	    return nom;
    }

    bool operator==(const Objet& o1,const Objet& o2){
        return (o1.getNom()==o2.getNom());
    }

    
}