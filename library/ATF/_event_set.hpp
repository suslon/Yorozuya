// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _event_set
    {
        struct _monster_set
        {
            struct _state
            {
                struct _mon
                {
                    struct CMonster *pMon;
                    unsigned int dwSerial;
                    struct _base_fld *pMonFld;
                };
                unsigned int dwStartTime;
                unsigned int dwLastUpdateTime;
                int nRespawnNum;
                bool bOper;
                _mon MonInfo[100];
            public:
                _state();
                void ctor__state();
                void init();
            };
            struct CMapData *pMap;
            float fPos[3];
            struct _base_fld *pMonsterFld;
            unsigned __int16 wNum;
            unsigned int dwRegenTerm;
            char byRegenProb;
            unsigned int dwDuring;
            bool bUnknownMap;
            bool bIsSet;
            _state m_State;
        public:
            _monster_set();
            void ctor__monster_set();
        };
        char m_strId[64];
        _monster_set m_MonSet[10];
        bool m_bOper;
    public:
        _event_set();
        void ctor__event_set();
        void init();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
