#ifndef HOUSE_TERRACEROOFFACTORY_H
#define HOUSE_TERRACEROOFFACTORY_H


#include "RoofFactory.h"
#include "../../models/roof/TerraceRoof.h"

class TerraceRoofFactory : public RoofFactory {
public:
    TerraceRoofFactory(MaterialType material, double width, double length, double height) {
        this->roof = new TerraceRoof(material, width, length, height);
    }

    Roof *create() override {
        return this->roof;
    }
};


#endif //HOUSE_TERRACEROOFFACTORY_H
