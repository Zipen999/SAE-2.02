/*
 \file	        reseau1.hpp
 \author	    Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
             Header Reseau1, dérivé de Reseau
*/

#ifndef RESEAU1_HPP
#define RESEAU1_HPP
#include "objet1.hpp"
#include "reseau.hpp"

namespace transformers{
    class Reseau1 : public Reseau {
        private:
            std::vector<Objet1> vectorObjets;
        public:
            Reseau1(std::vector<Objet1> vectorObjets1);
            std::vector<Objet> DonneMoiLeSuivant(const Objet& o);
            std::vector<Objet1> getVector()const;
    };
    std::ostream& operator<<(std::ostream& os,const Reseau1& r);
}

#endif
