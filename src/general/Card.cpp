#include <iostream>

#include "../../header/general/Card.h"

namespace card {

using cardtype::CardType;

std::string CardTypeToString(CardType card_type) {
    switch (card_type)
    {
        case CardType::MONSTER:
        {
            return "Monster";
        }
        break;

        case CardType::MAGIC:
        {
            return "Magic";
        }
        break;

        case CardType::TRAP:
        {
            return "Trap";
        }
        break;

        default:
        {
            return "Unknown";
        }
        break;
    }
}

Card::Card(const std::vector<std::string>& rule_names): Card(rule_names, rule_names){
    // do nothing
}

Card::Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names): 
    Card(rule_names, display_names, CardType::UNKNOWN) {
    // do nothing
}

Card::Card(const std::vector<std::string>& rule_names, CardType card_type): 
    Card(rule_names, rule_names, card_type) {
    // do nothing
}

Card::Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names, CardType card_type): 
    rule_names_(rule_names),
    display_names_(display_names),
    card_type_(card_type) {
    // do nothing
}

void Card::SetRuleNames(const std::vector<std::string>& names) {
    rule_names_.clear();
    rule_names_.assign(names.begin(), names.end());
}

void Card::AppendRuleName(const std::string& name) {
    rule_names_.push_back(name);
}

void Card::SetDisplayNames(const std::vector<std::string>& names) {
    display_names_.clear();
    display_names_.assign(names.begin(), names.end());
}

void Card::AppendDisplayName(const std::string& name) {
    display_names_.push_back(name);
}

void Card::SetEffects(const std::vector<effect::Effect*>& effects) {
    effects_.clear();
    effects_.assign(effects.begin(), effects.end());
}

void Card::AppendEffect(effect::Effect* effect) {
    effects_.push_back(effect);
}

void Card::SetCardType(CardType card_type) {
    card_type_ = card_type;
}

std::ostream& operator<< (std::ostream& ostream, Card& card) {
    ostream << "Rule names: " << std::endl;
    for (auto& name : card.GetRuleNames()) {
        ostream << name << std::endl;
    }

    ostream << std::endl;

    ostream << "Display names: " << std::endl;
    for (auto& name : card.GetDisplayNames()) {
        ostream << name << std::endl;
    }

    ostream << std::endl;

    ostream << "Card type: " << std::endl << CardTypeToString(card.GetCardType()) << std::endl;

    ostream << std::endl;

    ostream << "Number of effects: " << std::endl << card.GetEffects().size() << std::endl;

    ostream << std::endl;

    return ostream;
}

} // end of namespace card