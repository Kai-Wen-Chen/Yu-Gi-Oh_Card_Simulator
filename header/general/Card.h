#pragma once

#include <string>
#include <vector>

#include "CardType.h"

namespace effect {

class Effect;

} // end of namespace effect

namespace card {

class Card {

public:
    Card() = delete;
    //Card(const Card& card) = delete;
    //Card& operator= (const Card& card) = delete;

    Card(const std::vector<std::string>& rule_names);
    Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names);
    Card(const std::vector<std::string>& rule_names, cardtype::CardType card_type);
    Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names, cardtype::CardType card_type);

    const std::vector<std::string>& GetRuleNames() { return rule_names_; }
    const std::vector<std::string>& GetDisplayNames() { return display_names_; }
    const std::vector<effect::Effect*>& GetEffects() { return effects_; }
    cardtype::CardType GetCardType() { return card_type_; }    

    void SetRuleNames(const std::vector<std::string>& names);
    void AppendRuleName(const std::string& name);
    void SetDisplayNames(const std::vector<std::string>& names);
    void AppendDisplayName(const std::string& name);
    void SetEffects(const std::vector<effect::Effect*>& effects);
    void AppendEffect(effect::Effect* effect);
    void SetCardType(cardtype::CardType card_type);


    friend std::ostream& operator<< (std::ostream& ostream, Card& card);

private:
    std::vector<std::string> rule_names_;
    std::vector<std::string> display_names_;
    std::vector<effect::Effect*> effects_; 
    cardtype::CardType card_type_;
};

} // end of namespace card