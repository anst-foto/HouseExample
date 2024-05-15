#ifndef HOUSE_FOUNDATIONFACTORY_H
#define HOUSE_FOUNDATIONFACTORY_H

#include "../IFactory.h"
#include "../../models/foundation/Foundation.h"

class FoundationFactory : public IFactory<Foundation> {
protected:
    Foundation* foundation;

    FoundationFactory() = default;
};


#endif //HOUSE_FOUNDATIONFACTORY_H
