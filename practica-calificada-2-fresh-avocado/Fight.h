//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"

struct Fight {
    Fighter* fighter1;
    Fighter* fighter2;
    Fighter* winner;
    int fighter1_score = 0;
    int fighter2_score = 0;

    Fight(Fighter* fighter1, Fighter* fighter2): fighter1{fighter1}, fighter2{fighter2}, winner{nullptr} {}
    friend ostream& operator<<(ostream &os, const Fight& fight) {
        os << fight.fighter1->get_name() << " vs " << fight.fighter2->get_name() << endl;
        os << "The winner is: " << fight.winner;
        return os;
    }

    friend bool operator==(Fight& lhs, Fight& rhs) {
        return lhs.fighter1 == rhs.fighter1 && lhs.fighter2 == rhs.fighter2 && lhs.winner == rhs.winner;
    }
};


#endif //PC2_FIGHT_H
