//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H

class Defense {
protected:
    int level;

public:
    explicit Defense(int level): level{level} {}
    virtual int defense() { return level; }
};


#endif //PC2_DEFENSE_H
