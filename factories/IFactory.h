#ifndef HOUSE_IFACTORY_H
#define HOUSE_IFACTORY_H

template <typename T>
class IFactory {
protected:
    IFactory() = default;
public:
    virtual T* create() = 0;
};


#endif //HOUSE_IFACTORY_H
