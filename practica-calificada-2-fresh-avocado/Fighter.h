//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <iostream>
#include <vector>
#include "Defense.h"
#include "Attack.h"

using namespace std;

class Fighter {
protected:
    vector<Defense> defenses;
    vector<Attack> attacks;
    string name;

public:
    Fighter(vector<Defense> defenses, vector<Attack> attacks, string name): defenses{defenses}, attacks{attacks}, name{name} {}

    virtual int attack() {
        int total_attack = 0;
        for (int i = 0; i < attacks.size(); ++i) {
            total_attack += attacks[i].attack();
        }
        return total_attack;
    }
    virtual int defense() {
        int total_defense = 0;
        for (int i = 0; i < defenses.size(); ++i) {
            total_defense += defenses[i].defense();
        }
        return total_defense;
    }

    virtual string get_name() {
        return name;
    }
};


#endif //PC2_FIGHTER_H
