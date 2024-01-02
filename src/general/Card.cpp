#include <iostream>

#include "../../header/general/Card.h"

namespace card {

Card::Card(const std::vector<std::string>& rule_names): Card(rule_names, rule_names){
    // do nothing
}

Card::Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names): 
    rule_names_(rule_names),
    display_names_(display_names) {
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

std::ostream& operator<< (std::ostream& ostream, Card& card) {
    ostream << "Rule names: " << std::endl;
    for (auto& name : card.GetRuleNames()) {
        ostream << name << std::endl;
    }

    ostream << "Display names: " << std::endl;
    for (auto& name : card.GetDisplayNames()) {
        ostream << name << std::endl;
    }

    return ostream;
}

} // end of namespace card