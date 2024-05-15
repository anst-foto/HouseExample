#ifndef HOUSE_HOUSEBUILDER_H
#define HOUSE_HOUSEBUILDER_H

#include "./models/House.h"
#include "./factories/foundation_factories/FoundationFactory.h"
#include "./factories/roof_factories/RoofFactory.h"
#include "./factories/RoomFactory.h"
#include "./factories/StoreyFactory.h"

class HouseBuilder {
private:
    House* _house;

public:
    HouseBuilder() {
        _house = new House();
    }

    HouseBuilder* setFoundation(FoundationFactory* foundationFactory) {
        _house->setFoundation(foundationFactory->create());
        return this;
    }

    HouseBuilder* setRoof(RoofFactory* roofFactory) {
        _house->setRoof(roofFactory->create());
        return this;
    }

    HouseBuilder* setStorey(StoreyFactory* storeyFactory) {
        _house->addStorey(storeyFactory->create());
        return this;
    }

    House* build() {
        return _house;
    }
};


#endif //HOUSE_HOUSEBUILDER_H
