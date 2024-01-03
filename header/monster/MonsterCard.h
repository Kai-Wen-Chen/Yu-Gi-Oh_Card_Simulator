#pragma once

#include "../general/Card.h"

namespace card {

class MonsterCard : public Card {

public:
    MonsterCard() = delete;
    MonsterCard(
        const std::vector<std::string>& rule_names,
        const std::vector<monstercardtype::MonsterCardType>& monster_card_types,
        const std::vector<monsterattribute::MonsterAttribute>& monster_attributes,
        const std::vector<monsterrace::MonsterRace>& monster_races
    );
    MonsterCard(
        const std::vector<std::string>& rule_names,
        const std::vector<std::string>& display_names,
        const std::vector<monstercardtype::MonsterCardType>& monster_card_types,
        const std::vector<monsterattribute::MonsterAttribute>& monster_attributes,
        const std::vector<monsterrace::MonsterRace>& monster_races
    );

    void SetCardType(const std::vector<monstercardtype::MonsterCardType>& monster_card_types);
    void SetAttribute(const std::vector<monsterattribute::MonsterAttribute>& monster_attributes);
    void SetRace(const std::vector<monsterrace::MonsterRace>& monster_races);

protected:
    void InitMonster(
        const std::vector<monstercardtype::MonsterCardType>& monster_card_types,
        const std::vector<monsterattribute::MonsterAttribute>& monster_attributes,
        const std::vector<monsterrace::MonsterRace>& monster_races
    );

private:
    std::vector<monstercardtype::MonsterCardType> monster_card_types_;
    std::vector<monsterattribute::MonsterAttribute> monster_attributes_;
    std::vector<monsterrace::MonsterRace> monster_races_;
};

} // end of namespace card