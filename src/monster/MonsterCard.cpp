#include "../../header/monster/MonsterCard.h"

namespace card {

using cardtype::CardType;
using monstercardtype::MonsterCardType;
using monsterattribute::MonsterAttribute;
using monsterrace::MonsterRace;

MonsterCard::MonsterCard(
    const std::vector<std::string>& rule_names,
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
):
    Card(rule_names, CardType::MONSTER) {
    InitMonster(monster_card_types, monster_attributes, monster_races);
}

MonsterCard::MonsterCard(
    const std::vector<std::string>& rule_names,
    const std::vector<std::string>& display_names,
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
): 
    Card(rule_names, display_names, CardType::MONSTER) {
    InitMonster(monster_card_types, monster_attributes, monster_races);
}

void MonsterCard::SetCardType(const std::vector<MonsterCardType>& monster_card_types) {
    monster_card_types_.clear();
    monster_card_types_.assign(monster_card_types.begin(), monster_card_types.end());
}

void MonsterCard::SetAttribute(const std::vector<MonsterAttribute>& monster_attributes) {
    monster_attributes_.clear();
    monster_attributes_.assign(monster_attributes.begin(), monster_attributes.end());
}

void MonsterCard::SetRace(const std::vector<MonsterRace>& monster_races) {
    monster_races_.clear();
    monster_races_.assign(monster_races.begin(), monster_races.end());
}

//protected
void MonsterCard::InitMonster(
    const std::vector<MonsterCardType>& monster_card_types,
    const std::vector<MonsterAttribute>& monster_attributes,
    const std::vector<MonsterRace>& monster_races
) {
    SetCardType(monster_card_types);
    SetAttribute(monster_attributes);
    SetRace(monster_races);
}

} // end of namespace card
