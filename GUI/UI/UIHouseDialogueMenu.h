#pragma once

#include <cstdint>

#include "Engine/Objects/PlayerEnums.h"


#define SKILL_TO_LEARNING_DIALOGUE_ID(skill)  36 + skill

enum HOUSE_DIALOGUE_MENU : int32_t {
    HOUSE_DIALOGUE_NULL = 0,
    HOUSE_DIALOGUE_MAIN = 1,
    HOUSE_DIALOGUE_SHOP_BUY_STANDARD = 2,
    HOUSE_DIALOGUE_SHOP_SELL = 3,
    HOUSE_DIALOGUE_SHOP_IDENTIFY = 4,
    HOUSE_DIALOGUE_SHOP_REPAIR = 5,
    HOUSE_DIALOGUE_SHOP_6 = 6,
    HOUSE_DIALOGUE_BANK_PUT_GOLD = 7,
    HOUSE_DIALOGUE_BANK_GET_GOLD = 8,
    HOUSE_DIALOGUE_USE_HIRED_NPC_ABILITY = 9,
    HOUSE_DIALOGUE_TEMPLE_HEAL = 10,
    HOUSE_DIALOGUE_TEMPLE_DONATE = 11,
    HOUSE_DIALOGUE_12 = 12,
    HOUSE_DIALOGUE_13_hiring_related = 13,
    HOUSE_DIALOGUE_14 = 14,
    HOUSE_DIALOGUE_TAVERN_REST = 15,
    HOUSE_DIALOGUE_TAVERN_BUY_FOOD = 16,
    HOUSE_DIALOGUE_TRAININGHALL_TRAIN = 17,
    HOUSE_DIALOGUE_GUILD_BUY_BOOKS = 18,
    //...
    HOUSE_DIALOGUE_LEARN_STAFF = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_STAFF), // 36
    HOUSE_DIALOGUE_LEARN_SWORD = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_SWORD),
    HOUSE_DIALOGUE_LEARN_DAGGER = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_DAGGER),
    HOUSE_DIALOGUE_LEARN_AXE = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_AXE),
    HOUSE_DIALOGUE_LEARN_SPEAR = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_SPEAR),
    HOUSE_DIALOGUE_LEARN_BOW = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_BOW),
    HOUSE_DIALOGUE_LEARN_MACE = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MACE),
    HOUSE_DIALOGUE_LEARN_BLASTER = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_BLASTER),
    HOUSE_DIALOGUE_LEARN_SHIELD = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_SHIELD),
    HOUSE_DIALOGUE_LEARN_LEATHER = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_LEATHER),
    HOUSE_DIALOGUE_LEARN_CHAIN = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_CHAIN),
    HOUSE_DIALOGUE_LEARN_PLATE = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_PLATE),
    HOUSE_DIALOGUE_LEARN_FIRE = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_FIRE),
    HOUSE_DIALOGUE_LEARN_AIR = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_AIR),
    HOUSE_DIALOGUE_LEARN_WATER = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_WATER),
    HOUSE_DIALOGUE_LEARN_EARTH = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_EARTH),
    HOUSE_DIALOGUE_LEARN_SPIRIT = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_SPIRIT),
    HOUSE_DIALOGUE_LEARN_MIND = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MIND),
    HOUSE_DIALOGUE_LEARN_BODY = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_BODY),
    HOUSE_DIALOGUE_LEARN_LIGHT = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_LIGHT),
    HOUSE_DIALOGUE_LEARN_DARK = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_DARK),
    HOUSE_DIALOGUE_LEARN_ITEM_ID = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_ITEM_ID),
    HOUSE_DIALOGUE_LEARN_MERCHANT = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MERCHANT),
    HOUSE_DIALOGUE_LEARN_REPAIR = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_REPAIR),
    HOUSE_DIALOGUE_LEARN_BODYBUILDING = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_BODYBUILDING),
    HOUSE_DIALOGUE_LEARN_MEDITATION = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MEDITATION),
    HOUSE_DIALOGUE_LEARN_PERCEPTION = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_PERCEPTION),
    HOUSE_DIALOGUE_LEARN_DIPLOMACY = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_DIPLOMACY),
    HOUSE_DIALOGUE_LEARN_THIEVERY = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_TIEVERY),
    HOUSE_DIALOGUE_LEARN_TRAP_DISARM = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_TRAP_DISARM),
    HOUSE_DIALOGUE_LEARN_DODGE = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_DODGE),
    HOUSE_DIALOGUE_LEARN_UNARMED = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_UNARMED),
    HOUSE_DIALOGUE_LEARN_MONSTER_ID = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MONSTER_ID),
    HOUSE_DIALOGUE_LEARN_ARMSMASTER = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_ARMSMASTER),
    HOUSE_DIALOGUE_LEARN_STEALING = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_STEALING),
    HOUSE_DIALOGUE_LEARN_ALCHEMY = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_ALCHEMY),
    HOUSE_DIALOGUE_LEARN_LEARNING = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_LEARNING), // 72
    HOUSE_DIALOGUE_LEARN_CLUB = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_CLUB),
    HOUSE_DIALOGUE_LEARN_MUSC = SKILL_TO_LEARNING_DIALOGUE_ID(PLAYER_SKILL_MISC), // 74
    //...
    HOUSE_DIALOGUE_SHOP_DISPLAY_EQUIPMENT = 94,
    HOUSE_DIALOGUE_SHOP_BUY_SPECIAL = 95,
    HOUSE_DIALOGUE_LEARN_SKILLS = 96,
    HOUSE_DIALOGUE_97 = 97,
    HOUSE_DIALOGUE_98 = 98,
    HOUSE_DIALOGUE_TOWNHALL_MESSAGE = 99,
    HOUSE_DIALOGUE_TOWNHALL_PAY_FINE = 100,
    HOUSE_DIALOGUE_TAVERN_ARCOMAGE_MAIN = 101,
    HOUSE_DIALOGUE_TAVERN_ARCOMAGE_RULES = 102,
    HOUSE_DIALOGUE_TAVERN_ARCOMAGE_VICTORY_CONDITIONS = 103,
    HOUSE_DIALOGUE_TAVERN_ARCOMAGE_RESULT = 104,
    HOUSE_DIALOGUE_TRANSPORT_SCHEDULE_1 = 105,
    HOUSE_DIALOGUE_TRANSPORT_SCHEDULE_2 = 106,
    HOUSE_DIALOGUE_TRANSPORT_SCHEDULE_3 = 107,
    HOUSE_DIALOGUE_TRANSPORT_SCHEDULE_4 = 108,

    HOUSE_DIALOGUE_OTHER = -1
};

#undef SKILL_TO_LEARNING_DIALOGUE_ID


inline bool IsSkillLearningDialogue(HOUSE_DIALOGUE_MENU menu) {
    return menu >= HOUSE_DIALOGUE_LEARN_STAFF && menu <= HOUSE_DIALOGUE_LEARN_LEARNING;
}

inline PLAYER_SKILL_TYPE GetLearningDialogueSkill(HOUSE_DIALOGUE_MENU menu) {
    Assert(IsSkillLearningDialogue(menu));
    return (PLAYER_SKILL_TYPE)(menu - HOUSE_DIALOGUE_LEARN_STAFF);
}