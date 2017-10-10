//
// Created by meszi on 2017.10.10..
//

#ifndef CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMNAME_H
#define CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMNAME_H

#include <string>

using namespace std;

/** An ItemName instance should only contain a single item name.
 *  This is used so all static data could be loaded when initializing the game.
 */
class ItemName {
public:
    ItemName(const string& name) : name(name) {}

    const string getName() { return name; }

private:
    const string name;
};

#endif //CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMNAME_H
