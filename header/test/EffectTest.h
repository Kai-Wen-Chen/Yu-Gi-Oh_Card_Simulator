#pragma once

#include <memory>

#include "../general/Effect.h"

class EffectTest {

public:
    EffectTest() = delete;
    EffectTest(const std::shared_ptr<card::Card>& owner);

    bool ExistencyTest();

private:
    std::unique_ptr<effect::Effect> effect_;

};