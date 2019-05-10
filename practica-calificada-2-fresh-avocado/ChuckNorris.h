//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_CHUCKNORRIS_H
#define PC2_CHUCKNORRIS_H

#include "Fighter.h"

class ChuckNorris: public Fighter {
public:
    ChuckNorris(vector<Defense> defenses, vector<Attack> attacks, string name): Fighter(defenses, attacks, name) {}
};


#endif //PC2_CHUCKNORRIS_H
