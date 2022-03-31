/*
 \file		objet2.hpp
 \author	Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
		Header Objet2, dérivé de Objet
*/

#ifndef OBJET2_HPP
#define OBJET2_HPP
#include"objet.hpp"
#include <vector>

namespace transformers {

	class Objet2 : public Objet {
        
        int numObj;

        public:
        
            Objet2(std::string nom, int numObj);
            int getNumObjet() const;

    };
    
    std::ostream& operator<<(std::ostream& os,const Objet2& o);
}

#endif // OBJET2_HPP
