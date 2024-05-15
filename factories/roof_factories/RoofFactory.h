#ifndef HOUSE_ROOFFACTORY_H
#define HOUSE_ROOFFACTORY_H

#include "../IFactory.h"
#include "../../models/roof/Roof.h"

class RoofFactory : public IFactory<Roof>{
protected:
    Roof* roof;

    RoofFactory() = default;
};


#endif //HOUSE_ROOFFACTORY_H
