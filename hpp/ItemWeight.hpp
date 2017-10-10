//
// Created by meszi on 2017.10.10..
//

#ifndef CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMWEIGHT_H
#define CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMWEIGHT_H

/** An ItemWeight instance should only contain a single item weight.
 *  This is used so all static data could be loaded when initializing the game.
 */
class ItemWeight {
public:
    ItemWeight(const int& weight) : weight(weight) {}

    const int getWeight() { return weight; }

private:
    const int weight;
};

#endif //CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMWEIGHT_H
