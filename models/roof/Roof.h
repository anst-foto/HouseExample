#ifndef HOUSE_ROOF_H
#define HOUSE_ROOF_H

#include "../MaterialType.h"

enum RoofType {
    TERRACE_ROOF,
    SIMPLE_ROOF
};

class Roof {
private:
    RoofType _type;
    MaterialType _material;

    double _width;
    double _length;
    double _height;

protected:
    Roof(RoofType type, MaterialType material, double width, double length, double height) : _type(type),
                                                                                             _material(material),
                                                                                             _width(width),
                                                                                             _length(length),
                                                                                             _height(height) {

    }

public:
    RoofType getType() const {
        return _type;
    }

    MaterialType getMaterial() const {
        return _material;
    }

    double getWidth() const {
        return _width;
    }

    double getLength() const {
        return _length;
    }

    double getHeight() const {
        return _height;
    }
};


#endif //HOUSE_ROOF_H
