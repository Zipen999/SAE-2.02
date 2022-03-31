#ifndef RESEAU_HPP
#define RESEAU_HPP
#include <vector>
#include "objet.hpp"

namespace transformers{
	class Reseau{
		public:
            virtual std::vector<Objet> DonneMoiLeSuivant(const Objet& o ) =0; //RENVOI UN TABLEAU D'OBJET QUI VA CONTENIR LES PROCHAINES TRANSFO
			
	};
}

#endif