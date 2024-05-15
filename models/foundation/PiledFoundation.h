#ifndef HOUSE_PILEDFOUNDATION_H
#define HOUSE_PILEDFOUNDATION_H

#include "Foundation.h"

class PiledFoundation : public Foundation{
public:
    PiledFoundation(MaterialType material, double width, double length) : Foundation(FoundationType::PILED_FOUNDATION,
                                                                                                          material,
                                                                                                          width,
                                                                                                          length) {}
};


#endif //HOUSE_PILEDFOUNDATION_H
