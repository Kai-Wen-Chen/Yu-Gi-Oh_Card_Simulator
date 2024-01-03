#include <cassert>
#include <iostream>

#include "../../header/test/CardTest.h"
#include "../../header/test/EffectTest.h"

using monstercardtype::MonsterCardType;
using monsterattribute::MonsterAttribute;
using monsterrace::MonsterRace;

bool CardExistencyTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names, cardtype::CardType card_type) {
    auto test = std::make_unique<CardTest>(rule_names, display_names, card_type);
    return test->ExistencyTest();
}

bool MonsterCardExistencyTest(
    const std::vector<std::string>& rule_names,
    const std::vector<std::string>& display_names,
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
) {
    auto test = std::make_unique<MonsterCardTest>(
        rule_names,
        display_names,
        monster_card_types,
        monster_attributes,
        monster_races
    );
    return test->ExistencyTest();
}

bool NamingChangeTest(std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    std::vector<std::string> original_rule_names = { "Hairyu Urara" };
    auto test = std::make_unique<CardTest>(original_rule_names, original_rule_names, cardtype::CardType::MONSTER);
    return test->NamingChangeTest(rule_names, display_names) && test->ExistencyTest();
}

bool EffectExistencyTest() {
    std::vector<std::string> rule_names = { "Hairyu Urara" };
    auto card = std::make_shared<card::Card>(rule_names, rule_names, cardtype::CardType::MONSTER);
    auto test = std::make_unique<EffectTest>(card);
    return test->ExistencyTest();
}

int main() {
    std::vector<std::string> rule_names = { "Hairyu Urara" };
    std::vector<MonsterCardType> monster_card_types = { MonsterCardType::DEFAULT };
    std::vector<MonsterAttribute> monster_attributes = { MonsterAttribute::FIRE };
    std::vector<MonsterRace> monster_races = { MonsterRace::ZOMBIE };
    assert(MonsterCardExistencyTest(rule_names, rule_names, monster_card_types, monster_attributes, monster_races) && "Card created with Hairyu Urara error");

    std::cout << "------------" << std::endl;

    std::vector<std::string> display_names = {"Black Magician"};
    assert(NamingChangeTest(rule_names, display_names) && "Change name with Black Magician error");

    std::cout << "------------" << std::endl;

    assert(EffectExistencyTest() && "Effect created with Hairyu Urara error");

    std::cout << "------------" << std::endl;

    return 0;
}