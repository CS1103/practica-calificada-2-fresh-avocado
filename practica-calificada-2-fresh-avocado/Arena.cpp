//
// Created by Gabriel Spranger Rojas on 2019-05-10.
//

#include <fstream>
#include "Arena.h"

void Arena::run(Fighter* fighter1, Fighter* fighter2) {
    Fight fight(fighter1, fighter2);

    /*
     (𝑠𝑐𝑜𝑟𝑒 𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 1) = ∑(𝑑𝑒𝑓𝑒𝑛𝑠𝑎 𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 1) − ∑(𝑎𝑡𝑎𝑞𝑢𝑒 𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 2)
     (𝑠𝑐𝑜𝑟𝑒 𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 2) = ∑(𝑑𝑒𝑓𝑒𝑛𝑠𝑎 𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 2) − ∑(𝑎𝑡𝑎𝑞𝑢𝑒𝑝𝑒𝑙𝑒𝑎𝑑𝑜𝑟 1)
     */

    cout << "Pelea entre " << fighter1->get_name() << " y " << fighter2->get_name() << "..." << endl;

    fight.fighter1_score = fighter1->defense() - fighter2->attack();
    fight.fighter2_score = fighter2->defense() - fighter1->attack();

    if (fight.fighter1_score > fight.fighter2_score) {
        fight.winner = fighter1;
        cout << "Ganó " << fight.winner->get_name() << "!" << endl << endl;
    } else if (fight.fighter1_score < fight.fighter2_score) {
        fight.winner = fighter2;
        cout << "Ganó " << fight.winner->get_name() << "!" << endl << endl;
    } else {
        cout << "Empate!" << endl << endl;
    }
}

vector<Fight> Arena::get_fights() {
    return fights;
}

void Arena::load_fights(const string& filename) {
    ifstream peleas(filename);

    if (peleas.is_open()) {
//        string peleador;
//        string defensa1, defensa2, defensa3;
//        string ataque1, ataque2, ataque3;
//
//        for (int i = 0; i < 2; ++i) {
//            getline(peleas, peleador);
//            getline(peleas, defensa1, ',');
//            getline(peleas, defensa2, ',');
//            getline(peleas, defensa3, '\n');
//            getline(peleas, ataque1, ',');
//            getline(peleas, ataque2, ',');
//            getline(peleas, ataque3, '\n');
//        }

    } else {
        cout << "No se pudo abrir " << filename << "." << endl;
    }
}

void Arena::run_all() {
    for (int i = 0; i < fights.size(); ++i) {
        run(fights[i].fighter1, fights[i].fighter2);
    }
}
