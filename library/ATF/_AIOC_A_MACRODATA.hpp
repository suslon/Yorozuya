// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _AIOC_A_MACRODATA
    {
        struct MACRO_POTIONDATA
        {
            unsigned int Potion[3];
            unsigned int PotionValue[3];
        };
        struct MACRO_ACTIONDATA
        {
            unsigned int Action[10];
        };
        struct MACRO_CHATDATA
        {
            char Chat[5][256];
        };
        MACRO_POTIONDATA mcr_Potion[1];
        MACRO_ACTIONDATA mcr_Action[3];
        MACRO_CHATDATA mcr_Chat[2];
    };    
    static_assert(ATF::checkSize<_AIOC_A_MACRODATA, 2704>(), "_AIOC_A_MACRODATA");
END_ATF_NAMESPACE
