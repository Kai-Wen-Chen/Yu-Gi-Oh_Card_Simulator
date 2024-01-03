#include <iostream>

#include "../../header/test/EffectTest.h"

EffectTest::EffectTest(const std::shared_ptr<card::Card>& owner) {
    effect_.reset();
    effect_ = std::make_unique<effect::Effect>(owner);
}

bool EffectTest::ExistencyTest() {
    if (effect_) {
        std::cout << *(effect_.get());
        return true;
    }
    else {
        std::cout << "Effect not created" << std::endl;
        return false;
    }
}