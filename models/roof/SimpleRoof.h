#ifndef HOUSE_SIMPLEROOF_H
#define HOUSE_SIMPLEROOF_H

#include "Roof.h"

class SimpleRoof : public Roof{
public:
    SimpleRoof(MaterialType material, double width, double length, double height) : Roof(RoofType::SIMPLE_ROOF,
                                                                                         material,
                                                                                         width, length, height) {}
};


#endif //HOUSE_SIMPLEROOF_H
