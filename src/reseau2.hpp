/*
 \file	        reseau2.hpp
 \author	    Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
             Header Reseau2, dérivé de Reseau
*/


#ifndef RESEAU2_HPP
#define RESEAU2_HPP
#include "objet2.hpp"
#include "reseau.hpp"

namespace transformers{
    class Reseau2 : public Reseau {
        std::vector<Objet2> vectorObjets;
        std::vector<std::vector<int>> m;
        
        public:
            Reseau2(std::vector<Objet2> vectorObjets,std::vector<std::vector<int>> mat);
            std::vector<Objet> DonneMoiLeSuivant(const Objet& o);
            std::vector<Objet2> getVector()const;
            std::vector<std::vector<int>> getMatrice()const;
    };
    std::ostream& operator<<(std::ostream& os,const Reseau2& r);
}

#endif
