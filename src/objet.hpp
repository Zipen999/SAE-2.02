/*
 \file		menu.hpp
 \author	Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
 		 Header objet
*/
#ifndef OBJET_HPP
#define OBJET_HPP

#include <string>
#include <list>

namespace transformers {

	class Objet {
		std::string nom;
	public:
		Objet(std::string nom);
        std::string getNom() const;
        virtual ~Objet() = default;
	};
    
    bool operator==(const Objet& o1,const Objet& o2);

}

#endif
