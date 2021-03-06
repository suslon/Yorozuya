#include <CPvpOrderViewDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPvpOrderViewGetPvpCash2_ptr CPvpOrderViewGetPvpCash2_next(nullptr);
        Info::CPvpOrderViewGetPvpCash2_clbk CPvpOrderViewGetPvpCash2_user(nullptr);
        
        Info::CPvpOrderViewGetPvpTempCash4_ptr CPvpOrderViewGetPvpTempCash4_next(nullptr);
        Info::CPvpOrderViewGetPvpTempCash4_clbk CPvpOrderViewGetPvpTempCash4_user(nullptr);
        
        Info::CPvpOrderViewInit6_ptr CPvpOrderViewInit6_next(nullptr);
        Info::CPvpOrderViewInit6_clbk CPvpOrderViewInit6_user(nullptr);
        
        Info::CPvpOrderViewLoop8_ptr CPvpOrderViewLoop8_next(nullptr);
        Info::CPvpOrderViewLoop8_clbk CPvpOrderViewLoop8_user(nullptr);
        
        Info::CPvpOrderViewNotify_OrderView10_ptr CPvpOrderViewNotify_OrderView10_next(nullptr);
        Info::CPvpOrderViewNotify_OrderView10_clbk CPvpOrderViewNotify_OrderView10_user(nullptr);
        
        Info::CPvpOrderViewNotify_Point12_ptr CPvpOrderViewNotify_Point12_next(nullptr);
        Info::CPvpOrderViewNotify_Point12_clbk CPvpOrderViewNotify_Point12_user(nullptr);
        
        Info::CPvpOrderViewNotify_PvPEnd14_ptr CPvpOrderViewNotify_PvPEnd14_next(nullptr);
        Info::CPvpOrderViewNotify_PvPEnd14_clbk CPvpOrderViewNotify_PvPEnd14_user(nullptr);
        
        Info::CPvpOrderViewNotify_PvpTempCash16_ptr CPvpOrderViewNotify_PvpTempCash16_next(nullptr);
        Info::CPvpOrderViewNotify_PvpTempCash16_clbk CPvpOrderViewNotify_PvpTempCash16_user(nullptr);
        
        Info::CPvpOrderViewResetPvPOrderView18_ptr CPvpOrderViewResetPvPOrderView18_next(nullptr);
        Info::CPvpOrderViewResetPvPOrderView18_clbk CPvpOrderViewResetPvPOrderView18_user(nullptr);
        
        Info::CPvpOrderViewSetOrderViewAttackState20_ptr CPvpOrderViewSetOrderViewAttackState20_next(nullptr);
        Info::CPvpOrderViewSetOrderViewAttackState20_clbk CPvpOrderViewSetOrderViewAttackState20_user(nullptr);
        
        Info::CPvpOrderViewSetOrderViewDamagedState22_ptr CPvpOrderViewSetOrderViewDamagedState22_next(nullptr);
        Info::CPvpOrderViewSetOrderViewDamagedState22_clbk CPvpOrderViewSetOrderViewDamagedState22_user(nullptr);
        
        Info::CPvpOrderViewSetPvpCash24_ptr CPvpOrderViewSetPvpCash24_next(nullptr);
        Info::CPvpOrderViewSetPvpCash24_clbk CPvpOrderViewSetPvpCash24_user(nullptr);
        
        Info::CPvpOrderViewSetPvpOrderView26_ptr CPvpOrderViewSetPvpOrderView26_next(nullptr);
        Info::CPvpOrderViewSetPvpOrderView26_clbk CPvpOrderViewSetPvpOrderView26_user(nullptr);
        
        Info::CPvpOrderViewUpdate28_ptr CPvpOrderViewUpdate28_next(nullptr);
        Info::CPvpOrderViewUpdate28_clbk CPvpOrderViewUpdate28_user(nullptr);
        
        Info::CPvpOrderViewUpdatePvPDeath30_ptr CPvpOrderViewUpdatePvPDeath30_next(nullptr);
        Info::CPvpOrderViewUpdatePvPDeath30_clbk CPvpOrderViewUpdatePvPDeath30_user(nullptr);
        
        Info::CPvpOrderViewUpdatePvPKill32_ptr CPvpOrderViewUpdatePvPKill32_next(nullptr);
        Info::CPvpOrderViewUpdatePvPKill32_clbk CPvpOrderViewUpdatePvPKill32_user(nullptr);
        
        Info::CPvpOrderViewUpdatePvPPoint34_ptr CPvpOrderViewUpdatePvPPoint34_next(nullptr);
        Info::CPvpOrderViewUpdatePvPPoint34_clbk CPvpOrderViewUpdatePvPPoint34_user(nullptr);
        
        Info::CPvpOrderViewUpdatePvpCash36_ptr CPvpOrderViewUpdatePvpCash36_next(nullptr);
        Info::CPvpOrderViewUpdatePvpCash36_clbk CPvpOrderViewUpdatePvpCash36_user(nullptr);
        
        Info::CPvpOrderViewUpdate_ContHaveCash38_ptr CPvpOrderViewUpdate_ContHaveCash38_next(nullptr);
        Info::CPvpOrderViewUpdate_ContHaveCash38_clbk CPvpOrderViewUpdate_ContHaveCash38_user(nullptr);
        
        Info::CPvpOrderViewUpdate_ContLoseCash40_ptr CPvpOrderViewUpdate_ContLoseCash40_next(nullptr);
        Info::CPvpOrderViewUpdate_ContLoseCash40_clbk CPvpOrderViewUpdate_ContLoseCash40_user(nullptr);
        
        Info::CPvpOrderViewUpdate_KillerList42_ptr CPvpOrderViewUpdate_KillerList42_next(nullptr);
        Info::CPvpOrderViewUpdate_KillerList42_clbk CPvpOrderViewUpdate_KillerList42_user(nullptr);
        
        Info::CPvpOrderViewUpdate_PvpTempCash44_ptr CPvpOrderViewUpdate_PvpTempCash44_next(nullptr);
        Info::CPvpOrderViewUpdate_PvpTempCash44_clbk CPvpOrderViewUpdate_PvpTempCash44_user(nullptr);
        
        Info::CPvpOrderViewUpdate_RaceWarRecvr46_ptr CPvpOrderViewUpdate_RaceWarRecvr46_next(nullptr);
        Info::CPvpOrderViewUpdate_RaceWarRecvr46_clbk CPvpOrderViewUpdate_RaceWarRecvr46_user(nullptr);
        
        long double CPvpOrderViewGetPvpCash2_wrapper(struct CPvpOrderView* _this)
        {
           return CPvpOrderViewGetPvpCash2_user(_this, CPvpOrderViewGetPvpCash2_next);
        };
        long double CPvpOrderViewGetPvpTempCash4_wrapper(struct CPvpOrderView* _this)
        {
           return CPvpOrderViewGetPvpTempCash4_user(_this, CPvpOrderViewGetPvpTempCash4_next);
        };
        bool CPvpOrderViewInit6_wrapper(struct CPvpOrderView* _this)
        {
           return CPvpOrderViewInit6_user(_this, CPvpOrderViewInit6_next);
        };
        void CPvpOrderViewLoop8_wrapper(struct CPvpOrderView* _this, uint16_t wIndex)
        {
           CPvpOrderViewLoop8_user(_this, wIndex, CPvpOrderViewLoop8_next);
        };
        void CPvpOrderViewNotify_OrderView10_wrapper(struct CPvpOrderView* _this, uint16_t wIndex)
        {
           CPvpOrderViewNotify_OrderView10_user(_this, wIndex, CPvpOrderViewNotify_OrderView10_next);
        };
        void CPvpOrderViewNotify_Point12_wrapper(struct CPvpOrderView* _this, uint16_t wIndex, long double dChangePoint, unsigned int dwTarSerial)
        {
           CPvpOrderViewNotify_Point12_user(_this, wIndex, dChangePoint, dwTarSerial, CPvpOrderViewNotify_Point12_next);
        };
        void CPvpOrderViewNotify_PvPEnd14_wrapper(struct CPvpOrderView* _this, uint16_t wIndex)
        {
           CPvpOrderViewNotify_PvPEnd14_user(_this, wIndex, CPvpOrderViewNotify_PvPEnd14_next);
        };
        void CPvpOrderViewNotify_PvpTempCash16_wrapper(struct CPvpOrderView* _this, uint16_t wIndex)
        {
           CPvpOrderViewNotify_PvpTempCash16_user(_this, wIndex, CPvpOrderViewNotify_PvpTempCash16_next);
        };
        void CPvpOrderViewResetPvPOrderView18_wrapper(struct CPvpOrderView* _this)
        {
           CPvpOrderViewResetPvPOrderView18_user(_this, CPvpOrderViewResetPvPOrderView18_next);
        };
        void CPvpOrderViewSetOrderViewAttackState20_wrapper(struct CPvpOrderView* _this)
        {
           CPvpOrderViewSetOrderViewAttackState20_user(_this, CPvpOrderViewSetOrderViewAttackState20_next);
        };
        void CPvpOrderViewSetOrderViewDamagedState22_wrapper(struct CPvpOrderView* _this)
        {
           CPvpOrderViewSetOrderViewDamagedState22_user(_this, CPvpOrderViewSetOrderViewDamagedState22_next);
        };
        void CPvpOrderViewSetPvpCash24_wrapper(struct CPvpOrderView* _this, long double dAlter)
        {
           CPvpOrderViewSetPvpCash24_user(_this, dAlter, CPvpOrderViewSetPvpCash24_next);
        };
        bool CPvpOrderViewSetPvpOrderView26_wrapper(struct CPvpOrderView* _this, long double dPvpPoint, struct _PVP_ORDER_VIEW_DB_BASE* pkInfo, struct CPlayer* pOne)
        {
           return CPvpOrderViewSetPvpOrderView26_user(_this, dPvpPoint, pkInfo, pOne, CPvpOrderViewSetPvpOrderView26_next);
        };
        void CPvpOrderViewUpdate28_wrapper(struct CPvpOrderView* _this, int64_t tUpdateDate, int nDeath, int nKill, long double dTodayStacked, long double dPvpPoint, long double dPvpTempCash)
        {
           CPvpOrderViewUpdate28_user(_this, tUpdateDate, nDeath, nKill, dTodayStacked, dPvpPoint, dPvpTempCash, CPvpOrderViewUpdate28_next);
        };
        void CPvpOrderViewUpdatePvPDeath30_wrapper(struct CPvpOrderView* _this, uint16_t wIndex, unsigned int dwTarSerial)
        {
           CPvpOrderViewUpdatePvPDeath30_user(_this, wIndex, dwTarSerial, CPvpOrderViewUpdatePvPDeath30_next);
        };
        void CPvpOrderViewUpdatePvPKill32_wrapper(struct CPvpOrderView* _this, uint16_t wIndex, unsigned int dwTarSerial)
        {
           CPvpOrderViewUpdatePvPKill32_user(_this, wIndex, dwTarSerial, CPvpOrderViewUpdatePvPKill32_next);
        };
        void CPvpOrderViewUpdatePvPPoint34_wrapper(struct CPvpOrderView* _this, long double dUpPoint, long double dNewPoint)
        {
           CPvpOrderViewUpdatePvPPoint34_user(_this, dUpPoint, dNewPoint, CPvpOrderViewUpdatePvPPoint34_next);
        };
        void CPvpOrderViewUpdatePvpCash36_wrapper(struct CPvpOrderView* _this, long double dPvpCash)
        {
           CPvpOrderViewUpdatePvpCash36_user(_this, dPvpCash, CPvpOrderViewUpdatePvpCash36_next);
        };
        void CPvpOrderViewUpdate_ContHaveCash38_wrapper(struct CPvpOrderView* _this, char byCnt)
        {
           CPvpOrderViewUpdate_ContHaveCash38_user(_this, byCnt, CPvpOrderViewUpdate_ContHaveCash38_next);
        };
        void CPvpOrderViewUpdate_ContLoseCash40_wrapper(struct CPvpOrderView* _this, char byCnt)
        {
           CPvpOrderViewUpdate_ContLoseCash40_user(_this, byCnt, CPvpOrderViewUpdate_ContLoseCash40_next);
        };
        void CPvpOrderViewUpdate_KillerList42_wrapper(struct CPvpOrderView* _this, unsigned int dwSerial, int nIndex)
        {
           CPvpOrderViewUpdate_KillerList42_user(_this, dwSerial, nIndex, CPvpOrderViewUpdate_KillerList42_next);
        };
        void CPvpOrderViewUpdate_PvpTempCash44_wrapper(struct CPvpOrderView* _this, uint16_t wIndex, long double dTempPvpCash)
        {
           CPvpOrderViewUpdate_PvpTempCash44_user(_this, wIndex, dTempPvpCash, CPvpOrderViewUpdate_PvpTempCash44_next);
        };
        void CPvpOrderViewUpdate_RaceWarRecvr46_wrapper(struct CPvpOrderView* _this, bool bUse)
        {
           CPvpOrderViewUpdate_RaceWarRecvr46_user(_this, bUse, CPvpOrderViewUpdate_RaceWarRecvr46_next);
        };
        
        ::std::array<hook_record, 23> CPvpOrderView_functions = 
        {
            _hook_record {
                (LPVOID)0x14007c2e0L,
                (LPVOID *)&CPvpOrderViewGetPvpCash2_user,
                (LPVOID *)&CPvpOrderViewGetPvpCash2_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewGetPvpCash2_wrapper),
                (LPVOID)cast_pointer_function((long double(CPvpOrderView::*)())&CPvpOrderView::GetPvpCash)
            },
            _hook_record {
                (LPVOID)0x14007d570L,
                (LPVOID *)&CPvpOrderViewGetPvpTempCash4_user,
                (LPVOID *)&CPvpOrderViewGetPvpTempCash4_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewGetPvpTempCash4_wrapper),
                (LPVOID)cast_pointer_function((long double(CPvpOrderView::*)())&CPvpOrderView::GetPvpTempCash)
            },
            _hook_record {
                (LPVOID)0x1403f7180L,
                (LPVOID *)&CPvpOrderViewInit6_user,
                (LPVOID *)&CPvpOrderViewInit6_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpOrderView::*)())&CPvpOrderView::Init)
            },
            _hook_record {
                (LPVOID)0x1403f79c0L,
                (LPVOID *)&CPvpOrderViewLoop8_user,
                (LPVOID *)&CPvpOrderViewLoop8_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewLoop8_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t))&CPvpOrderView::Loop)
            },
            _hook_record {
                (LPVOID)0x1403f7b40L,
                (LPVOID *)&CPvpOrderViewNotify_OrderView10_user,
                (LPVOID *)&CPvpOrderViewNotify_OrderView10_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewNotify_OrderView10_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t))&CPvpOrderView::Notify_OrderView)
            },
            _hook_record {
                (LPVOID)0x1403f7c20L,
                (LPVOID *)&CPvpOrderViewNotify_Point12_user,
                (LPVOID *)&CPvpOrderViewNotify_Point12_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewNotify_Point12_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t, long double, unsigned int))&CPvpOrderView::Notify_Point)
            },
            _hook_record {
                (LPVOID)0x1403f7ce0L,
                (LPVOID *)&CPvpOrderViewNotify_PvPEnd14_user,
                (LPVOID *)&CPvpOrderViewNotify_PvPEnd14_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewNotify_PvPEnd14_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t))&CPvpOrderView::Notify_PvPEnd)
            },
            _hook_record {
                (LPVOID)0x1403f7d60L,
                (LPVOID *)&CPvpOrderViewNotify_PvpTempCash16_user,
                (LPVOID *)&CPvpOrderViewNotify_PvpTempCash16_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewNotify_PvpTempCash16_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t))&CPvpOrderView::Notify_PvpTempCash)
            },
            _hook_record {
                (LPVOID)0x1403f7970L,
                (LPVOID *)&CPvpOrderViewResetPvPOrderView18_user,
                (LPVOID *)&CPvpOrderViewResetPvPOrderView18_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewResetPvPOrderView18_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)())&CPvpOrderView::ResetPvPOrderView)
            },
            _hook_record {
                (LPVOID)0x1403f7aa0L,
                (LPVOID *)&CPvpOrderViewSetOrderViewAttackState20_user,
                (LPVOID *)&CPvpOrderViewSetOrderViewAttackState20_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewSetOrderViewAttackState20_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)())&CPvpOrderView::SetOrderViewAttackState)
            },
            _hook_record {
                (LPVOID)0x1403f7af0L,
                (LPVOID *)&CPvpOrderViewSetOrderViewDamagedState22_user,
                (LPVOID *)&CPvpOrderViewSetOrderViewDamagedState22_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewSetOrderViewDamagedState22_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)())&CPvpOrderView::SetOrderViewDamagedState)
            },
            _hook_record {
                (LPVOID)0x14007c2b0L,
                (LPVOID *)&CPvpOrderViewSetPvpCash24_user,
                (LPVOID *)&CPvpOrderViewSetPvpCash24_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewSetPvpCash24_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(long double))&CPvpOrderView::SetPvpCash)
            },
            _hook_record {
                (LPVOID)0x1403f71c0L,
                (LPVOID *)&CPvpOrderViewSetPvpOrderView26_user,
                (LPVOID *)&CPvpOrderViewSetPvpOrderView26_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewSetPvpOrderView26_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpOrderView::*)(long double, struct _PVP_ORDER_VIEW_DB_BASE*, struct CPlayer*))&CPvpOrderView::SetPvpOrderView)
            },
            _hook_record {
                (LPVOID)0x1403f75b0L,
                (LPVOID *)&CPvpOrderViewUpdate28_user,
                (LPVOID *)&CPvpOrderViewUpdate28_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate28_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(int64_t, int, int, long double, long double, long double))&CPvpOrderView::Update)
            },
            _hook_record {
                (LPVOID)0x1403f7650L,
                (LPVOID *)&CPvpOrderViewUpdatePvPDeath30_user,
                (LPVOID *)&CPvpOrderViewUpdatePvPDeath30_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdatePvPDeath30_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t, unsigned int))&CPvpOrderView::UpdatePvPDeath)
            },
            _hook_record {
                (LPVOID)0x1403f7760L,
                (LPVOID *)&CPvpOrderViewUpdatePvPKill32_user,
                (LPVOID *)&CPvpOrderViewUpdatePvPKill32_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdatePvPKill32_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t, unsigned int))&CPvpOrderView::UpdatePvPKill)
            },
            _hook_record {
                (LPVOID)0x1403f7880L,
                (LPVOID *)&CPvpOrderViewUpdatePvPPoint34_user,
                (LPVOID *)&CPvpOrderViewUpdatePvPPoint34_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdatePvPPoint34_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(long double, long double))&CPvpOrderView::UpdatePvPPoint)
            },
            _hook_record {
                (LPVOID)0x1403f74e0L,
                (LPVOID *)&CPvpOrderViewUpdatePvpCash36_user,
                (LPVOID *)&CPvpOrderViewUpdatePvpCash36_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdatePvpCash36_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(long double))&CPvpOrderView::UpdatePvpCash)
            },
            _hook_record {
                (LPVOID)0x1403f8020L,
                (LPVOID *)&CPvpOrderViewUpdate_ContHaveCash38_user,
                (LPVOID *)&CPvpOrderViewUpdate_ContHaveCash38_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate_ContHaveCash38_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(char))&CPvpOrderView::Update_ContHaveCash)
            },
            _hook_record {
                (LPVOID)0x1403f80b0L,
                (LPVOID *)&CPvpOrderViewUpdate_ContLoseCash40_user,
                (LPVOID *)&CPvpOrderViewUpdate_ContLoseCash40_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate_ContLoseCash40_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(char))&CPvpOrderView::Update_ContLoseCash)
            },
            _hook_record {
                (LPVOID)0x1403f7f90L,
                (LPVOID *)&CPvpOrderViewUpdate_KillerList42_user,
                (LPVOID *)&CPvpOrderViewUpdate_KillerList42_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate_KillerList42_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(unsigned int, int))&CPvpOrderView::Update_KillerList)
            },
            _hook_record {
                (LPVOID)0x1403f7df0L,
                (LPVOID *)&CPvpOrderViewUpdate_PvpTempCash44_user,
                (LPVOID *)&CPvpOrderViewUpdate_PvpTempCash44_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate_PvpTempCash44_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(uint16_t, long double))&CPvpOrderView::Update_PvpTempCash)
            },
            _hook_record {
                (LPVOID)0x1403f8140L,
                (LPVOID *)&CPvpOrderViewUpdate_RaceWarRecvr46_user,
                (LPVOID *)&CPvpOrderViewUpdate_RaceWarRecvr46_next,
                (LPVOID)cast_pointer_function(CPvpOrderViewUpdate_RaceWarRecvr46_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpOrderView::*)(bool))&CPvpOrderView::Update_RaceWarRecvr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
