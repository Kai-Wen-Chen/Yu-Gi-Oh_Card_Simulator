#include <memory>

namespace card{

class Card;

} // end of namespace card

namespace effect {

class Effect {

public:
    Effect() = delete;
    Effect(const std::shared_ptr<card::Card>& owner);

    const card::Card* GetOwner();

    bool SetOwner(const std::shared_ptr<card::Card>& owner);

    friend std::ostream& operator<< (std::ostream& ostream, Effect& effect);
    
//protected:

private:
    std::weak_ptr<card::Card> owner_;

};

} // end of namespace effect