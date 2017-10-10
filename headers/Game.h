#ifndef CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_GAME_H
#define CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_GAME_H

#include <vector>
#include "../hpp/RoomDescription.hpp"
#include "../hpp/ItemDescription.hpp"
#include "../hpp/ItemName.hpp"
#include "../hpp/ItemWeight.hpp"

using namespace std;

class Game {
public:
    void init();
    void run();

private:
    vector<RoomDescription> roomDescriptions;
    vector<ItemDescription> itemDescriptions;
    vector<ItemName> itemNames;
    vector<ItemWeight> itemWeights;

    void loadRoomDescriptions();
    void loadItemDescriptions();
    void loadItemNames();
    void loadItemWeights();

    bool step();
};


#endif //CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_GAME_H
