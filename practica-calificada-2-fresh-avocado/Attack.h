//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H


class Attack {
protected:
    int power;
public:
    explicit Attack(int power): power{power} {}
    virtual int attack() { return power; }
};


#endif //PC2_ATTACK_H
