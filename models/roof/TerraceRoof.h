#ifndef HOUSE_TERRACEROOF_H
#define HOUSE_TERRACEROOF_H

#include "Roof.h"

class TerraceRoof : public Roof {
public:
    TerraceRoof(MaterialType material, double width, double length, double height) : Roof(RoofType::TERRACE_ROOF,
                                                                                          material,
                                                                                          width, length, height) {}
};


#endif //HOUSE_TERRACEROOF_H
