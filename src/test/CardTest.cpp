#include <iostream>

#include "../../header/test/CardTest.h"

CardTest::CardTest() {
    card_.reset();
    
    std::vector<std::string> rule_names = {"Test Card"};
    card_ = std::make_unique<card::Card>(rule_names);
}

CardTest::CardTest(const std::vector<std::string>& rule_names) {
    card_.reset();
    card_ = std::make_unique<card::Card>(rule_names);
}

CardTest::CardTest(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names) {
    card_.reset();
    card_ = std::make_unique<card::Card>(rule_names, display_names);
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