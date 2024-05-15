#ifndef HOUSE_GIRDERFOUNDATIONFACTORY_H
#define HOUSE_GIRDERFOUNDATIONFACTORY_H

#include "FoundationFactory.h"
#include "../../models/foundation/GirderFoundation.h"

class GirderFoundationFactory : public FoundationFactory{
public:
    GirderFoundationFactory(MaterialType material, double width, double length) {
        this->foundation = new GirderFoundation(material, width, length);
    }

    Foundation *create() override {
        return this->foundation;
    }
};


#endif //HOUSE_GIRDERFOUNDATIONFACTORY_H
