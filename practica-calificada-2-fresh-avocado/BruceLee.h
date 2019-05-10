//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_BRUCELEE_H
#define PC2_BRUCELEE_H

#include "Fighter.h"

class BruceLee: public Fighter {
public:
    BruceLee(vector<Defense> defenses, vector<Attack> attacks, string name): Fighter(defenses, attacks, name) {}
};


#endif //PC2_BRUCELEE_H
