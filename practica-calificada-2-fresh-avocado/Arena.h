//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <iostream>
#include <vector>
#include "Fight.h"
#include "Fighter.h"

using namespace std;

class Arena {
    vector<Fight> fights;
public:
    explicit Arena(vector<Fight> fights): fights{fights} {}
    void run(Fighter* fighter1, Fighter* fighter2);
    vector<Fight> get_fights();
    void load_fights(const string& filename);
    void run_all();
};


#endif //PC2_ARENA_H
