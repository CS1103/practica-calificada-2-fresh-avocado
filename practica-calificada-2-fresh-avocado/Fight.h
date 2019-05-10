//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"

struct Fight {
    Fighter* fighter1;
    Fighter* fighter2;
    Fighter* winner = nullptr;
    int fighter1_score = 0;
    int fighter2_score = 0;

    Fight(Fighter* fighter1, Fighter* fighter2): fighter1{fighter1}, fighter2{fighter2} {}
};


#endif //PC2_FIGHT_H
