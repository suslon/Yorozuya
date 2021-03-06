#include <CUnmannedTraderTradeInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CUnmannedTraderTradeInfoAddIncome2_ptr CUnmannedTraderTradeInfoAddIncome2_next(nullptr);
        Info::CUnmannedTraderTradeInfoAddIncome2_clbk CUnmannedTraderTradeInfoAddIncome2_user(nullptr);
        
        
        Info::CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_ptr CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_next(nullptr);
        Info::CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_clbk CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoInit6_ptr CUnmannedTraderTradeInfoInit6_next(nullptr);
        Info::CUnmannedTraderTradeInfoInit6_clbk CUnmannedTraderTradeInfoInit6_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoLoadINI8_ptr CUnmannedTraderTradeInfoLoadINI8_next(nullptr);
        Info::CUnmannedTraderTradeInfoLoadINI8_clbk CUnmannedTraderTradeInfoLoadINI8_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoLoop10_ptr CUnmannedTraderTradeInfoLoop10_next(nullptr);
        Info::CUnmannedTraderTradeInfoLoop10_clbk CUnmannedTraderTradeInfoLoop10_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoNotifyIncome12_ptr CUnmannedTraderTradeInfoNotifyIncome12_next(nullptr);
        Info::CUnmannedTraderTradeInfoNotifyIncome12_clbk CUnmannedTraderTradeInfoNotifyIncome12_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoNotifyIncome14_ptr CUnmannedTraderTradeInfoNotifyIncome14_next(nullptr);
        Info::CUnmannedTraderTradeInfoNotifyIncome14_clbk CUnmannedTraderTradeInfoNotifyIncome14_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoSaveINI16_ptr CUnmannedTraderTradeInfoSaveINI16_next(nullptr);
        Info::CUnmannedTraderTradeInfoSaveINI16_clbk CUnmannedTraderTradeInfoSaveINI16_user(nullptr);
        
        Info::CUnmannedTraderTradeInfoUpdateIncome18_ptr CUnmannedTraderTradeInfoUpdateIncome18_next(nullptr);
        Info::CUnmannedTraderTradeInfoUpdateIncome18_clbk CUnmannedTraderTradeInfoUpdateIncome18_user(nullptr);
        
        
        Info::CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_ptr CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_next(nullptr);
        Info::CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_clbk CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_user(nullptr);
        
        void CUnmannedTraderTradeInfoAddIncome2_wrapper(struct CUnmannedTraderTradeInfo* _this, unsigned int dwOriPrice)
        {
           CUnmannedTraderTradeInfoAddIncome2_user(_this, dwOriPrice, CUnmannedTraderTradeInfoAddIncome2_next);
        };
        
        void CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_user(_this, CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_next);
        };
        bool CUnmannedTraderTradeInfoInit6_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           return CUnmannedTraderTradeInfoInit6_user(_this, CUnmannedTraderTradeInfoInit6_next);
        };
        void CUnmannedTraderTradeInfoLoadINI8_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoLoadINI8_user(_this, CUnmannedTraderTradeInfoLoadINI8_next);
        };
        void CUnmannedTraderTradeInfoLoop10_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoLoop10_user(_this, CUnmannedTraderTradeInfoLoop10_next);
        };
        void CUnmannedTraderTradeInfoNotifyIncome12_wrapper(struct CUnmannedTraderTradeInfo* _this, char byRace, uint16_t wIndex)
        {
           CUnmannedTraderTradeInfoNotifyIncome12_user(_this, byRace, wIndex, CUnmannedTraderTradeInfoNotifyIncome12_next);
        };
        void CUnmannedTraderTradeInfoNotifyIncome14_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoNotifyIncome14_user(_this, CUnmannedTraderTradeInfoNotifyIncome14_next);
        };
        void CUnmannedTraderTradeInfoSaveINI16_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoSaveINI16_user(_this, CUnmannedTraderTradeInfoSaveINI16_next);
        };
        void CUnmannedTraderTradeInfoUpdateIncome18_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfoUpdateIncome18_user(_this, CUnmannedTraderTradeInfoUpdateIncome18_next);
        };
        
        void CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_wrapper(struct CUnmannedTraderTradeInfo* _this)
        {
           CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_user(_this, CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_next);
        };
        
        ::std::array<hook_record, 10> CUnmannedTraderTradeInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140366ec0L,
                (LPVOID *)&CUnmannedTraderTradeInfoAddIncome2_user,
                (LPVOID *)&CUnmannedTraderTradeInfoAddIncome2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoAddIncome2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)(unsigned int))&CUnmannedTraderTradeInfo::AddIncome)
            },
            _hook_record {
                (LPVOID)0x1403517a0L,
                (LPVOID *)&CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_user,
                (LPVOID *)&CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoctor_CUnmannedTraderTradeInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::ctor_CUnmannedTraderTradeInfo)
            },
            _hook_record {
                (LPVOID)0x140391f90L,
                (LPVOID *)&CUnmannedTraderTradeInfoInit6_user,
                (LPVOID *)&CUnmannedTraderTradeInfoInit6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::Init)
            },
            _hook_record {
                (LPVOID)0x140392250L,
                (LPVOID *)&CUnmannedTraderTradeInfoLoadINI8_user,
                (LPVOID *)&CUnmannedTraderTradeInfoLoadINI8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoLoadINI8_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::LoadINI)
            },
            _hook_record {
                (LPVOID)0x140392080L,
                (LPVOID *)&CUnmannedTraderTradeInfoLoop10_user,
                (LPVOID *)&CUnmannedTraderTradeInfoLoop10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::Loop)
            },
            _hook_record {
                (LPVOID)0x140392110L,
                (LPVOID *)&CUnmannedTraderTradeInfoNotifyIncome12_user,
                (LPVOID *)&CUnmannedTraderTradeInfoNotifyIncome12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoNotifyIncome12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)(char, uint16_t))&CUnmannedTraderTradeInfo::NotifyIncome)
            },
            _hook_record {
                (LPVOID)0x1403924b0L,
                (LPVOID *)&CUnmannedTraderTradeInfoNotifyIncome14_user,
                (LPVOID *)&CUnmannedTraderTradeInfoNotifyIncome14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoNotifyIncome14_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::NotifyIncome)
            },
            _hook_record {
                (LPVOID)0x140392380L,
                (LPVOID *)&CUnmannedTraderTradeInfoSaveINI16_user,
                (LPVOID *)&CUnmannedTraderTradeInfoSaveINI16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoSaveINI16_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::SaveINI)
            },
            _hook_record {
                (LPVOID)0x140392700L,
                (LPVOID *)&CUnmannedTraderTradeInfoUpdateIncome18_user,
                (LPVOID *)&CUnmannedTraderTradeInfoUpdateIncome18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfoUpdateIncome18_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::UpdateIncome)
            },
            _hook_record {
                (LPVOID)0x140391ef0L,
                (LPVOID *)&CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_user,
                (LPVOID *)&CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderTradeInfodtor_CUnmannedTraderTradeInfo20_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderTradeInfo::*)())&CUnmannedTraderTradeInfo::dtor_CUnmannedTraderTradeInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
