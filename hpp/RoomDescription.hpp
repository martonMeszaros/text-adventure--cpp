#ifndef CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_AREA_HPP
#define CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_AREA_HPP

#include <string>

using namespace std;

/** An area instance should only contain a single room description.
 *  This is used so all static data could be loaded when initializing the game.
 *  @param descLong  : displayed when visiting room for first time.
 *  @param descShort : displayed when room has already been visited.
 */
class RoomDescription {
public:
    RoomDescription(const string& descLong) :
            descriptionLong(descLong),
            descriptionShort(descLong) {}

    RoomDescription(const string& descLong, const string& descShort) :
            descriptionLong(descLong),
            descriptionShort(descShort) {}

    const string getDescLong()  { return descriptionLong;   }
    const string getDescShort() { return descriptionShort;  }

private:
    const string descriptionLong;
    const string descriptionShort;
};

#endif //CPP_2ND_TW_MIGHTY_TEXT_ADVENTURE_AREA_HPP
