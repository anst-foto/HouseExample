#include <iostream>

#include "HouseBuilder.h"

#include "./factories/foundation_factories/GirderFoundationFactory.h"
#include "./factories/foundation_factories/PiledFoundationFactory.h"

#include "./factories/roof_factories/SimpleRoofFactory.h"
#include "./factories/roof_factories/TerraceRoofFactory.h"

#include "./factories/RoomFactory.h"
#include "./factories/StoreyFactory.h"

using namespace std;

int main() {
    auto* builder = new HouseBuilder();
    builder
    ->setFoundation(new PiledFoundationFactory(MaterialType::WOOD, 100, 100))
    ->setRoof(new SimpleRoofFactory(MaterialType::WOOD, 100, 100,10 ));

    auto* storeyLevelOneFactory = new StoreyFactory(1);
    storeyLevelOneFactory->addRoom(new RoomFactory(RoomType::BED_ROOM, 50,50));
    storeyLevelOneFactory->addRoom(new RoomFactory(RoomType::BATH_ROOM, 50,50));

    auto* storeyLevelTwoFactory = new StoreyFactory(2);
    storeyLevelTwoFactory->addRoom(new RoomFactory(RoomType::BED_ROOM, 50,50));
    storeyLevelTwoFactory->addRoom(new RoomFactory(RoomType::BATH_ROOM, 50,50));

    builder->setStorey(storeyLevelOneFactory);
    builder->setStorey(storeyLevelTwoFactory);

    auto* house = builder->build();

    cout << house->getFoundation()->getType() << endl;
    cout << house->getRoof()->getType() << endl;
    cout << house->getStorey(1)->getRooms().size() << endl;

    return 0;
}
