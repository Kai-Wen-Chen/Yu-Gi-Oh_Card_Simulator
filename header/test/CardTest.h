#include <memory>

#include "../general/Card.h"

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