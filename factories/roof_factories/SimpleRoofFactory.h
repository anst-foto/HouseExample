#ifndef HOUSE_SIMPLEROOFFACTORY_H
#define HOUSE_SIMPLEROOFFACTORY_H

#include "RoofFactory.h"
#include "../../models/roof/SimpleRoof.h"

class SimpleRoofFactory : public RoofFactory {
public:
    SimpleRoofFactory(MaterialType material, double width, double length, double height) {
        this->roof = new SimpleRoof(material, width, length, height);
    }

    Roof *create() override {
        return this->roof;
    }
};


#endif //HOUSE_SIMPLEROOFFACTORY_H
