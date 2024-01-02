#include <cassert>
#include <iostream>

#include "../../header/test/CardTest.h"

bool EmptyCardNameExistencyTest() {
    auto test = std::make_unique<CardTest>();
    return test->ExistencyTest();
}

bool ExistencyTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    auto test = std::make_unique<CardTest>(rule_names, display_names);
    return test->ExistencyTest();
}

int main() {
    assert(EmptyCardNameExistencyTest() && "Card created with empty name error");

    std::cout << std::endl;

    std::vector<std::string> rule_names = {"Hairyu Urara"};
    assert(ExistencyTest(rule_names, rule_names) && "Card created with Hairyu Urara error");

    std::cout << std::endl;

    return 0;
}