#include <iostream>

#include "../../header/general/Card.h"
#include "../../header/general/Effect.h"

namespace effect {

Effect::Effect(const std::shared_ptr<card::Card>& owner) {
    owner_.reset();
    owner_ = owner;
}

const card::Card* Effect::GetOwner() {
    if (owner_.expired() || !owner_.lock())
        return nullptr;

    return owner_.lock().get();
}

bool Effect::SetOwner(const std::shared_ptr<card::Card>& owner) {
    if (!owner) {
        std::cout << __FUNCTION__ << "(): owner is null";
        return false;
    }

    owner_.reset();
    owner_ = owner;
    return true;
}

std::ostream& operator<< (std::ostream& ostream, Effect& effect) {
    if (!effect.GetOwner()) {
        ostream << "Effect doesn't have owner";
        return ostream;
    }

    auto owner = *(effect.GetOwner());
    ostream << "Effect owner is: " << std::endl;
    ostream << owner;

    return ostream;
}

} // end of namespace effect