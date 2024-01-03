#pragma once

#include <memory>

#include "../general/Card.h"
#include "../monster/MonsterCard.h"
class CardTest {

public:
    CardTest() = delete;
    CardTest(const std::vector<std::string>& rule_names);
    CardTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names);
    CardTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names, cardtype::CardType card_type);

    bool ExistencyTest();
    bool NamingChangeTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names);

private:
    std::unique_ptr<card::Card> card_;

};

class MonsterCardTest {

public:
    MonsterCardTest() = delete;
    MonsterCardTest(
        const std::vector<std::string>& rule_names,
        const std::vector<monstercardtype::MonsterCardType>& monster_card_types,
        const std::vector<monsterattribute::MonsterAttribute>& monster_attributes,
        const std::vector<monsterrace::MonsterRace>& monster_races
    );
    MonsterCardTest(
        const std::vector<std::string>& rule_names,
        const std::vector<std::string>& display_names,
        const std::vector<monstercardtype::MonsterCardType>& monster_card_types,
        const std::vector<monsterattribute::MonsterAttribute>& monster_attributes,
        const std::vector<monsterrace::MonsterRace>& monster_races
    );

    bool ExistencyTest();
    bool NamingChangeTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names);

private:
    std::unique_ptr<card::MonsterCard> card_;

};