#ifndef HOUSE_HOUSE_H
#define HOUSE_HOUSE_H

#include <string>
#include <map>

#include "./foundation/Foundation.h"
#include "./roof/Roof.h"
#include "./storey/Storey.h"

using namespace std;

class House {
private:
    Foundation* _foundation;
    Roof* _roof;
    map<int, Storey*> _storeys;

public:
    House() {}

    Foundation *getFoundation() const {
        return _foundation;
    }

    void setFoundation(Foundation *foundation) {
        if (foundation == nullptr) {
            throw "Foundation cannot be null";
        }
        _foundation = foundation;
    }

    Roof *getRoof() const {
        return _roof;
    }

    void setRoof(Roof *roof) {
        if (roof == nullptr) {
            throw "Roof cannot be null";
        }

        _roof = roof;
    }

    void addStorey(Storey *storey) {
        if (storey == nullptr) {
            throw "Storey cannot be null";
        }

        _storeys.insert(pair<int, Storey*>(storey->getLevel(), storey));
    }

    Storey *getStorey(int level) const {
        return _storeys.at(level);
    }
};


#endif //HOUSE_HOUSE_H
