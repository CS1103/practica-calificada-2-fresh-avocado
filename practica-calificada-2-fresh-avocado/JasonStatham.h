//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_JASONSTATHAM_H
#define PC2_JASONSTATHAM_H

#include "Fighter.h"

class JasonStatham: public Fighter {
public:
    JasonStatham(vector<Defense> defenses, vector<Attack> attacks, string name): Fighter(defenses, attacks, name) {}
};


#endif //PC2_JASONSTATHAM_H
