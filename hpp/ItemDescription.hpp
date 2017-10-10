//
// Created by meszi on 2017.10.10..
//

#ifndef CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMDESCRIPTION_H
#define CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMDESCRIPTION_H

#include <string>

using namespace std;

/** An ItemDescription instance should only contain a single item description.
 *  This is used so all static data could be loaded when initializing the game.
 */
class ItemDescription {
public:
    ItemDescription(const string& desc) : description(desc) {}

    const string getDesc() { return description; }

private:
    const string description;
};

#endif //CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_ITEMDESCRIPTION_H
