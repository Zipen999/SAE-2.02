#ifndef MENU_HPP
#define MENU_HPP
#include "objet.hpp"
#include <vector>

namespace transformers{
    void menu();
    int choixReseau();
    void choixTransformation(std::vector<Objet>& vObjets, int *posDepart,int *posArrivee);
}

#endif