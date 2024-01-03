namespace cardtype {

    enum CardType {
        MONSTER = 0,
        MAGIC,
        TRAP,
        UNKNOWN // for null card
    };

} // end of namespace cardtype

namespace monstercardtype {
    
    enum MonsterCardType {
        DEFAULT = 0, // normal or effect monster from main deck
        TOKEN,
        RITUAL,
        FUSION,
        SYNCHRO,
        XYZ,
        PENDULUM,
        LINK
    };

} // end of namespace monstercardtype

namespace monsterattribute {
    
    enum MonsterAttribute {
        FIRE = 0,
        WATER,
        LIGHT,
        DARK,
        WIND,
        EARTH,
        DIVINE
    };

} // end of namespace monsterattribute

namespace monstertype {
    
    enum MonsterType {
        AQUA = 0,
        BEAST,
        BEAST_WARRIOR,
        CREATOR_GOD,
        CYBERSE,
        DINOSAUR,
        DIVINE_BEAST, // God
        DRAGON,
        FAIRY, // Angel
        FIEND,
        FISH,
        ILLUSION,
        INSECT,
        MACHINE,
        PLANT,
        PSYCHIC,
        PYRO,
        REPTILE,
        ROCK,
        SEA_SERPENT,
        SPELLCASTER,
        THUNDER,
        WARRIOR,
        WINGED_BEAST,
        WYRM,
        ZOMBIE // Undead
    };

} // end of namespace monstertype

namespace magiccardtype {
    
    enum MagicCardType {
        NORMAL = 0,
        QUICK,
        ETERNAL,
        FIELD,
        EQUIP,
        PENDULUM
    };

} // end of namespace magiccardtype

namespace trapcardtype {
    
    enum TrapCardType {
        NORMAL = 0,
        ETERNAL,
        COUNTER
    };

} // end of namespace trapcardtype