#ifndef HOUSE_ROOMFACTORY_H
#define HOUSE_ROOMFACTORY_H

#include "IFactory.h"
#include "../models/room/Room.h"

class RoomFactory : public IFactory<Room> {
private:
    Room* _room;

public:
    RoomFactory(RoomType type, double length, double width) {
        _room = new Room(type, length, width);
    }

    Room *create() override {
        return _room;
    }
};


#endif //HOUSE_ROOMFACTORY_H
