// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _qry_case_in_atrade_tax
    {
        char byRace;
        unsigned int dwGuildSerial;
        unsigned int in_seller;
        unsigned int in_dalant;
        long double out_totaldalant;
        long double out_totalgold;
        char byDate[4];
    public:
        _qry_case_in_atrade_tax();
        void ctor__qry_case_in_atrade_tax();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_case_in_atrade_tax, 40>(), "_qry_case_in_atrade_tax");
END_ATF_NAMESPACE
