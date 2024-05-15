cmake_minimum_required(VERSION 3.28)
project(House)

set(CMAKE_CXX_STANDARD 17)

add_executable(House main.cpp
        models/foundation/Foundation.h
        models/MaterialType.h
        models/foundation/GirderFoundation.h
        models/foundation/PiledFoundation.h
        models/roof/Roof.h
        models/roof/TerraceRoof.h
        models/roof/SimpleRoof.h
        models/room/Room.h
        models/storey/Storey.h
        models/House.h
        factories/foundation_factories/FoundationFactory.h
        factories/IFactory.h
        factories/foundation_factories/GirderFoundationFactory.h
        factories/foundation_factories/PiledFoundationFactory.h
        factories/roof_factories/RoofFactory.h
        factories/roof_factories/SimpleRoofFactory.h
        factories/roof_factories/TerraceRoofFactory.h
        factories/RoomFactory.h
        factories/StoreyFactory.h
        HouseBuilder.h)
