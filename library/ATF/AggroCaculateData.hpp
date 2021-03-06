// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct AggroCaculateData
    {
        enum Default_Value
        {
            eGen = 0x0,
            eForce = 0x1,
            eLong_Attack = 0x2,
            eShort_Attack = 0x3,
            eClass_Skill = 0x4,
            eCurse_SkillForce = 0x5,
            eProfitSupport_SkillForce = 0x6,
            eAnimus_Attack = 0x7,
            eNear_Bonus = 0x8,
            eFirstAttack_Bonus = 0x9,
            eKingPower_Bonus = 0xA,
            eAccumDamage_Bonus = 0xB,
            eLowLevel_Target_Bonus = 0xC,
            eAnimus_Attack_warrior = 0xD,
            eAnimus_Attack_ranger = 0xE,
            eAnimus_Attack_healer = 0xF,
            eAnimus_Attack_force = 0x10,
            eTower_Attack = 0x11,
            eDefaultMax = 0x12,
        };
        struct SpecialSkillValue
        {
            char m_byAttackType;
            unsigned __int16 m_wIndex;
            int m_nValue;
        };
        int m_DefaultData[18];
        SpecialSkillValue m_SpecialData[50];
        int m_bLoad;
        int m_nTotalCount;
    public:
        AggroCaculateData();
        void ctor_AggroCaculateData();
        int GetDefault(unsigned int dwKind);
        int GetSize();
        int GetSpecialData(char byAttackType, uint16_t wIndex);
        void Init();
        int Load(char* strFileName);
        int PushSpecialData(char byAttackType, uint16_t wIndex, int nValue);
    };    
    static_assert(ATF::checkSize<AggroCaculateData, 480>(), "AggroCaculateData");
END_ATF_NAMESPACE
