#ifndef HOUSE_FOUNDATION_H
#define HOUSE_FOUNDATION_H

#include "../MaterialType.h"

enum FoundationType {
    GIRDER_FOUNDATION,
    PILED_FOUNDATION
};

class Foundation {
private:
    FoundationType _type;
    MaterialType _material;

    double _width;
    double _length;

protected:
    Foundation(FoundationType type, MaterialType material, double width, double length) : _type(type),
                                                                                          _material(material),
                                                                                          _width(width),
                                                                                          _length(length) {}

public:
    FoundationType getType() const {
        return _type;
    }

    MaterialType getMaterial() const {
        return _material;
    }

    double getWidth()  {
        return _width;
    };

    double getLength() const {
        return _length;
    }

};


#endif //HOUSE_FOUNDATION_H