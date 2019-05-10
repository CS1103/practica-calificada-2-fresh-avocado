//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_FIREARM_H
#define PC2_FIREARM_H

#include "Attack.h"

class Firearm: public Attack {
public:
    Firearm(): Attack(10) {}
};


#endif //PC2_FIREARM_H
