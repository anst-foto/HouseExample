#ifndef HOUSE_STOREY_H
#define HOUSE_STOREY_H

#include <map>

#include "../room/Room.h"

using namespace std;

class Storey {
private:
    int _level;
    map<RoomType, Room*> _rooms;

public:
    Storey() = default;

    void addRoom(Room* room) {
        _rooms.insert(pair<RoomType, Room*>(room->getType(), room));
    }

    Room* getRoom(RoomType type) {
        return _rooms.at(type);
    }

    map<RoomType, Room*> getRooms() {
        return _rooms;
    }

    int getLevel() const {
        return _level;
    }

    void setLevel(int level) {
        _level = level;
    }
};


#endif //HOUSE_STOREY_H
