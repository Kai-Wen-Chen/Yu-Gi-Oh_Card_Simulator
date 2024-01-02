#include <string>
#include <vector>

namespace card {

class Card {

public:
    Card() = default;
    Card(const Card& card) = delete;
    Card& operator= (const Card& card) = delete;

    Card(const std::vector<std::string>& rule_names);
    Card(const std::vector<std::string>& rule_names, const std::vector<std::string>& display_names);

    const std::vector<std::string>& GetRuleNames() { return rule_names_; }
    const std::vector<std::string>& GetDisplayNames() { return display_names_; }

    void SetRuleNames(const std::vector<std::string>& names);
    void AppendRuleName(const std::string& name);
    void SetDisplayNames(const std::vector<std::string>& names);
    void AppendDisplayName(const std::string& name);

    friend std::ostream& operator<< (std::ostream& ostream, Card& card);

private:
    std::vector<std::string> rule_names_;
    std::vector<std::string> display_names_;
};

} // end of namespace card