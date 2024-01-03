#include <iostream>

#include "../../header/test/CardTest.h"

using monstercardtype::MonsterCardType;
using monsterattribute::MonsterAttribute;
using monsterrace::MonsterRace;

CardTest::CardTest(const std::vector<std::string>& rule_names) {
    card_.reset();
    card_ = std::make_unique<card::Card>(rule_names);
}

CardTest::CardTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    card_.reset();
    card_ = std::make_unique<card::Card>(rule_names, display_names);
}

CardTest::CardTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names, cardtype::CardType card_type) {
    card_.reset();
    card_ = std::make_unique<card::Card>(rule_names, display_names, card_type);
}

bool CardTest::ExistencyTest() {
    if (card_) {
        std::cout << *(card_.get());
        return true;
    }
    else {
        std::cout << "Card not created" << std::endl;
        return false;
    }
}

bool CardTest::NamingChangeTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    if (card_) {
        card_->SetRuleNames(rule_names);
        card_->SetDisplayNames(display_names);
        return true;
    } else {
        std::cout << "Card not created" << std::endl;
        return false;
    }
}

// MonsterCardTest
MonsterCardTest::MonsterCardTest(
    const std::vector<std::string>& rule_names,
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
) {
    card_.reset();
    card_ = std::make_unique<card::MonsterCard>(rule_names, monster_card_types, monster_attributes, monster_races);
}

MonsterCardTest::MonsterCardTest(
    const std::vector<std::string>& rule_names,
    const std::vector<std::string>& display_names,
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
) {
    card_.reset();
    card_ = std::make_unique<card::MonsterCard>(rule_names, display_names, monster_card_types, monster_attributes, monster_races);
}

bool MonsterCardTest::ExistencyTest() {
    if (card_) {
        std::cout << *(card_.get());
        return true;
    }
    else {
        std::cout << "Card not created" << std::endl;
        return false;
    }
}

bool MonsterCardTest::NamingChangeTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    if (card_) {
        card_->SetRuleNames(rule_names);
        card_->SetDisplayNames(display_names);
        return true;
    } else {
        std::cout << "Card not created" << std::endl;
        return false;
    }
}