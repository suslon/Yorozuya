#include <GUILD_BATTLE__CReservedGuildSchedulePageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_ptr GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_clbk GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageClear4_ptr GUILD_BATTLE__CReservedGuildSchedulePageClear4_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageClear4_clbk GUILD_BATTLE__CReservedGuildSchedulePageClear4_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageFind6_ptr GUILD_BATTLE__CReservedGuildSchedulePageFind6_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageFind6_clbk GUILD_BATTLE__CReservedGuildSchedulePageFind6_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageFlip8_ptr GUILD_BATTLE__CReservedGuildSchedulePageFlip8_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageFlip8_clbk GUILD_BATTLE__CReservedGuildSchedulePageFlip8_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_ptr GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_clbk GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageInit12_ptr GUILD_BATTLE__CReservedGuildSchedulePageInit12_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageInit12_clbk GUILD_BATTLE__CReservedGuildSchedulePageInit12_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePageSend14_ptr GUILD_BATTLE__CReservedGuildSchedulePageSend14_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePageSend14_clbk GUILD_BATTLE__CReservedGuildSchedulePageSend14_user(nullptr);
            
            
            Info::GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_ptr GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_clbk GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_user(nullptr);
            
            
            void GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this)
            {
               GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_user(_this, GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_next);
            };
            bool GUILD_BATTLE__CReservedGuildSchedulePageClear4_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this)
            {
               return GUILD_BATTLE__CReservedGuildSchedulePageClear4_user(_this, GUILD_BATTLE__CReservedGuildSchedulePageClear4_next);
            };
            bool GUILD_BATTLE__CReservedGuildSchedulePageFind6_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this, unsigned int dwGuildSerial)
            {
               return GUILD_BATTLE__CReservedGuildSchedulePageFind6_user(_this, dwGuildSerial, GUILD_BATTLE__CReservedGuildSchedulePageFind6_next);
            };
            void GUILD_BATTLE__CReservedGuildSchedulePageFlip8_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this)
            {
               GUILD_BATTLE__CReservedGuildSchedulePageFlip8_user(_this, GUILD_BATTLE__CReservedGuildSchedulePageFlip8_next);
            };
            void GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this)
            {
               GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_user(_this, GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_next);
            };
            bool GUILD_BATTLE__CReservedGuildSchedulePageInit12_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this, char ucPageInx)
            {
               return GUILD_BATTLE__CReservedGuildSchedulePageInit12_user(_this, ucPageInx, GUILD_BATTLE__CReservedGuildSchedulePageInit12_next);
            };
            void GUILD_BATTLE__CReservedGuildSchedulePageSend14_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this, int n, unsigned int dwVer, struct GUILD_BATTLE::CReservedGuildSchedulePage* pkSelfInfoPage)
            {
               GUILD_BATTLE__CReservedGuildSchedulePageSend14_user(_this, n, dwVer, pkSelfInfoPage, GUILD_BATTLE__CReservedGuildSchedulePageSend14_next);
            };
            
            void GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_wrapper(struct GUILD_BATTLE::CReservedGuildSchedulePage* _this)
            {
               GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_user(_this, GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_next);
            };
            
            ::std::array<hook_record, 8> CReservedGuildSchedulePage_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403cbc30L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePagector_CReservedGuildSchedulePage2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildSchedulePage::*)())&GUILD_BATTLE::CReservedGuildSchedulePage::ctor_CReservedGuildSchedulePage)
                },
                _hook_record {
                    (LPVOID)0x1403cc220L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageClear4_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageClear4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageClear4_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildSchedulePage::*)())&GUILD_BATTLE::CReservedGuildSchedulePage::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403cbd80L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageFind6_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageFind6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageFind6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildSchedulePage::*)(unsigned int))&GUILD_BATTLE::CReservedGuildSchedulePage::Find)
                },
                _hook_record {
                    (LPVOID)0x1403cc090L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageFlip8_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageFlip8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageFlip8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildSchedulePage::*)())&GUILD_BATTLE::CReservedGuildSchedulePage::Flip)
                },
                _hook_record {
                    (LPVOID)0x1403cbd40L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageIncVer10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildSchedulePage::*)())&GUILD_BATTLE::CReservedGuildSchedulePage::IncVer)
                },
                _hook_record {
                    (LPVOID)0x1403cc170L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageInit12_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageInit12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageInit12_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildSchedulePage::*)(char))&GUILD_BATTLE::CReservedGuildSchedulePage::Init)
                },
                _hook_record {
                    (LPVOID)0x1403cbe20L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageSend14_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePageSend14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePageSend14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildSchedulePage::*)(int, unsigned int, struct GUILD_BATTLE::CReservedGuildSchedulePage*))&GUILD_BATTLE::CReservedGuildSchedulePage::Send)
                },
                _hook_record {
                    (LPVOID)0x1403cbce0L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildSchedulePagedtor_CReservedGuildSchedulePage16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildSchedulePage::*)())&GUILD_BATTLE::CReservedGuildSchedulePage::dtor_CReservedGuildSchedulePage)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
