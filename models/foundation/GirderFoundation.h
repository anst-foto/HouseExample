#ifndef HOUSE_GIRDERFOUNDATION_H
#define HOUSE_GIRDERFOUNDATION_H

#include "Foundation.h"

class GirderFoundation : public Foundation {
public:
    GirderFoundation(MaterialType material, double width, double length) : Foundation(FoundationType::GIRDER_FOUNDATION,
                                                                                                           material,
                                                                                                           width,
                                                                                                           length) {}
};


#endif //HOUSE_GIRDERFOUNDATION_H
