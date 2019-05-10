#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

#include "Defense.h"
#include "Attack.h"
#include "Fighter.h"
#include "Fight.h"
#include "Arena.h"
#include "Elude.h"
#include "Shield.h"
#include "Armor.h"
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"
#include "BruceLee.h"
#include "JasonStatham.h"
#include "ChuckNorris.h"

int main() {

    //// Bruce Lee
    vector<Defense> bruce_lee_defenses = {Elude(), Armor()};
    vector<Attack> bruce_lee_attacks = {Punch(), Saber(), Firearm()};

    Fighter* bruce_lee = new BruceLee(bruce_lee_defenses, bruce_lee_attacks, "Bruce Lee");

    //// Chuck Norris
    vector<Defense> chuck_norris_defenses = {Elude(), Shield(), Armor()};
    vector<Attack> chuck_norris_attacks = {Punch(), Firearm()};

    Fighter* chuck_norris = new ChuckNorris(chuck_norris_defenses, chuck_norris_attacks, "Chuck Norris");

    //// Jason Statham
    vector<Defense> jason_statham_defenses = {Elude(), Shield()};
    vector<Attack> jason_statham_attacks = {Punch(), Firearm()};

    Fighter* jason_statham = new JasonStatham(jason_statham_defenses, jason_statham_attacks, "Jason Statham");
    //// Jason Statham

    //// Fights
    Fight BLvsCN(bruce_lee, chuck_norris);
    Fight JSvsCN(jason_statham, chuck_norris);

    vector<Fight> fights = {BLvsCN, JSvsCN};

    //// Arena
    Arena arena(fights);
    arena.run_all();

    //// Assert
    assert(bruce_lee->attack() == 16);
    assert(bruce_lee->defense() == 9);

    assert(chuck_norris->attack() == 11);
    assert(chuck_norris->defense() == 13);

    assert(jason_statham->attack() == 11);
    assert(jason_statham->defense() == 5);

    assert(arena.get_fights()[0] == fights[0]);
    assert(arena.get_fights()[1] == fights[1]);

    assert(Elude().defense() == 1);
    assert(Shield().defense() == 4);
    assert(Armor().defense() == 8);

    assert(Punch().attack() == 1);
    assert(Saber().attack() == 5);
    assert(Firearm().attack() == 10);

    assert(Defense(8).defense() == 8);
    assert(Attack(15).attack() == 15);

    assert(BLvsCN.fighter1 == bruce_lee);
    assert(BLvsCN.fighter2 == chuck_norris);

    assert(JSvsCN.fighter1 == jason_statham);
    assert(JSvsCN.fighter2 == chuck_norris);

    delete bruce_lee;
    delete chuck_norris;
    delete jason_statham;

    return 0;
}