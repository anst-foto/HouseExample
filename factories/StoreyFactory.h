//
// Created by Elena on 15.05.2024.
//

#ifndef HOUSE_STOREYFACTORY_H
#define HOUSE_STOREYFACTORY_H


#include "IFactory.h"
#include "../models/storey/Storey.h"
#include "RoomFactory.h"

class StoreyFactory : public IFactory<Storey> {
private:
    Storey* _storey;

public:
    StoreyFactory(int level) {
        _storey = new Storey();
    }

    StoreyFactory* addRoom(RoomFactory* roomFactory) {
        _storey->addRoom(roomFactory->create());
        return this;
    }

    Storey *create() override {
        return _storey;
    }
};


#endif //HOUSE_STOREYFACTORY_H
