/*
 \file		objet1.hpp
 \author	Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
		Header Objet1, dérivé de Objet
*/

#ifndef OBJET1_HPP
#define OBJET1_HPP
#include"objet.hpp"
#include <vector>

namespace transformers {

	class Objet1 : public Objet {
        
        std::vector<Objet> objets;

        public:
        
            Objet1(std::string nom, std::vector<Objet> objets);
            std::vector<Objet> getObjets() const;

    };
    std::ostream& operator<<(std::ostream& os,const Objet1& o);
}

#endif // OBJET1_HPP
