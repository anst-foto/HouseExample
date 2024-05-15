#ifndef HOUSE_ROOM_H
#define HOUSE_ROOM_H

enum RoomType {
    BED_ROOM,
    BATH_ROOM
};

class Room {
private:
    RoomType _type;

    double _length;
    double _width;

public:
    Room(RoomType type, double length, double width) : _type(type), _length(length), _width(width) {}

    RoomType getType() const {
        return _type;
    }

    double getLength() const {
        return _length;
    }

    double getWidth() const {
        return _width;
    }

};


#endif //HOUSE_ROOM_H
