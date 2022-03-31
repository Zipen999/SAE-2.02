#include <iostream>
#include "reseau1.hpp"

using namespace std;

namespace transformers{

    Reseau1::Reseau1(vector<Objet1> vectorObjets1)
        :vectorObjets{vectorObjets1}
    {}

    vector<Objet1> Reseau1::getVector()const{
        return vectorObjets;
    }

    vector<Objet> Reseau1::DonneMoiLeSuivant(const Objet& o ){

        for(Objet1 obj : vectorObjets)
            if(o == obj){
                Objet *pt = &obj;
                Objet1 *ptO = dynamic_cast<Objet1 *> (pt);//objet1 donc dynamic cast pour avoir acces à la méthode
                if(ptO != nullptr)
                    return ptO->getObjets();    
            }
       return vector<Objet>{};
    }

    ostream& operator<<(ostream& os,const Reseau1& r){
        for(auto o : r.getVector())
            os << o << endl;
        return os;
    }
}
