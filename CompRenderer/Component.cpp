#include "Component.h"

namespace CompRenderer {
    unsigned int Component::generateID()
    {
        static unsigned int currentID = -1;
        currentID++;
        return currentID;
    }

    bool Component::operator==(const Component& other)
    {
        return this->getID() == other.getID();
    }
}