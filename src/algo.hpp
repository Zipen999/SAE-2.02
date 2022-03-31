#ifndef ALGO_HPP
#define ALGO_HPP
#include"reseau1.hpp"
#include"reseau2.hpp"
#include <vector>

namespace transformers{
    void algo(const Objet& ObjetVoulu, const Objet& ObjetDonnee, Reseau &res, std::vector<Objet> Chemin,int *cpt);
}

#endif