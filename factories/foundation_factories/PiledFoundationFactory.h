#ifndef HOUSE_PILEDFOUNDATIONFACTORY_H
#define HOUSE_PILEDFOUNDATIONFACTORY_H

#include "FoundationFactory.h"
#include "../../models/foundation/PiledFoundation.h"

class PiledFoundationFactory : public FoundationFactory{
public:
    PiledFoundationFactory(MaterialType material, double width, double length) {
        this->foundation = new PiledFoundation(material, width, length);
    }

    Foundation *create() override {
        return this->foundation;
    }
};


#endif //HOUSE_PILEDFOUNDATIONFACTORY_H
