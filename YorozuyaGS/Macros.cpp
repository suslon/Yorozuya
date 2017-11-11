#include "stdafx.h"

#include "Macros.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CMacros::load()
        {
            auto& core = CATFCore::get_instance();
            enable_hook(&CMainThread::_db_Update_MacroData, &CMacros::_db_Update_MacroData);
            enable_hook(&CMainThread::_db_Update_CryMsg, &CMacros::_db_Update_CryMsg);
        }

        void CMacros::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CMainThread::_db_Update_MacroData);
            core.unset_hook(&CMainThread::_db_Update_CryMsg);
        }

        ModuleName_t CMacros::get_name()
        {
            static const ModuleName_t name = "fix_Macros";
            return name;
        }

        bool WINAPIV CMacros::_db_Update_MacroData(
            struct CMainThread* pObj,
            unsigned int dwSerial,
            struct _AIOC_A_MACRODATA* pMacro,
            struct _AIOC_A_MACRODATA* pOldMacro,
            ATF::Info::CMainThread_db_Update_MacroData266_ptr next)
        {
            for (auto &i : pMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!Global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            for (auto &i : pOldMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!Global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            return next(pObj, dwSerial, pMacro, pOldMacro);
        }

        bool WINAPIV CMacros::_db_Update_CryMsg(
            ATF::CMainThread * pObj, 
            unsigned int dwSerial, 
            _AVATOR_DATA * pNewData, 
            _AVATOR_DATA * pOldData, 
            char * pwszQuery, 
            ATF::Info::CMainThread_db_Update_CryMsg252_ptr next)
        {
            for (auto &i : pNewData->dbBossCry.m_List)
            {       
                if (!Global::IsSQLValidString(i.wszCryMsg))
                    i.wszCryMsg[0] = '\0';
            }
            for (auto &i : pOldData->dbBossCry.m_List)
            {
                if (!Global::IsSQLValidString(i.wszCryMsg))
                    i.wszCryMsg[0] = '\0';
            }

            return next(pObj, dwSerial, pNewData, pOldData, pwszQuery);
        }
    }
};


