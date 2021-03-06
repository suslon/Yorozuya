// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$D3AACD222214ED4654A599D3E23032DE.hpp>
#include <CCharacter.hpp>
#include <CLootingMgr.hpp>
#include <CLuaSignalReActor.hpp>
#include <CMonsterAI.hpp>
#include <CMonsterAggroMgr.hpp>
#include <CMonsterAttack.hpp>
#include <CMonsterHierarchy.hpp>
#include <CMonsterSkill.hpp>
#include <CMonsterSkillPool.hpp>
#include <EmotionPresentationChecker.hpp>
#include <MonsterSFContDamageToleracne.hpp>
#include <MonsterStateData.hpp>
#include <_attack_param.hpp>
#include <_dummy_position.hpp>
#include <_event_loot_item.hpp>
#include <_event_respawn.hpp>
#include <_event_set.hpp>
#include <_force_fld.hpp>
#include <_mon_active.hpp>
#include <_monster_create_setdata.hpp>
#include <_monster_fld.hpp>
#include <_object_id.hpp>
#include <_skill_fld.hpp>


START_ATF_NAMESPACE
    struct  CMonster : CCharacter
    {
        enum MonsterEvent
        {
            eEvent_Damage = 0x0,
            eEvent_Help = 0x1,
            eEvent_MAx = 0x2,
        };
        enum _Monster_Kind_T
        {
            eAnimal = 0x0,
            ePlant = 0x1,
            eReptile = 0x2,
            eCrustacea = 0x3,
            eInsect = 0x4,
            eMechatronics = 0x5,
            eNoba = 0x6,
            eMutant = 0x7,
            eHuman = 0x8,
            eElf = 0x9,
            eHerodian = 0xA,
        };
        enum _Monster_AsistType
        {
            eSameKind = 0x0,
            eAllKind = 0x1,
        };
        enum _Monster_HelpMe_T
        {
            eOnlyAttack = 0x0,
            eSearchCharacter = 0x1,
        };
        enum _Monster_ViewArea_Effect_T
        {
            eVA_Eff_None = 0x0,
            eVA_Eff_Defence_Down = 0x1,
            eVA_Eff_Critical_Ext_Rate_Down = 0x2,
            eVA_Eff_DefSklUnit_Down = 0x3,
            eVA_Eff_All = 0x4,
        };
        bool m_bOper;
        bool m_bApparition;
        bool m_bDungeon;
        unsigned int m_dwLastDestroyTime;
        unsigned int m_dwDestroyNextTime;
        unsigned int m_dwLastRecoverTime;
        float m_fCreatePos[3];
        float m_fLookAtPos[3];
        bool m_bRobExp;
        bool m_bRewardExp;
        bool m_bStdItemLoot;
        struct _mon_active *m_pActiveRec;
        struct _monster_fld *m_pMonRec;
        struct _dummy_position *m_pDumPosition;
        int m_nHP;
        CLootingMgr m_LootMgr;
        CMonsterAggroMgr m_AggroMgr;
        CMonsterHierarchy m_MonHierarcy;
        MonsterSFContDamageToleracne m_SFContDamageTolerance;
        char m_byCreateDate[4];
        unsigned int m_LifeMax;
        unsigned int m_LifeCicle;
        $D3AACD222214ED4654A599D3E23032DE ___u23;
        EmotionPresentationChecker m_EmotionPresentationCheck;
        float m_fYAngle;
        float m_fStartLookAtPos[3];
        bool m_bRotateMonster;
        MonsterStateData m_MonsterStateData;
        MonsterStateData m_BeforeMonsterStateData;
        struct CCharacter *m_pTargetChar;
        CMonsterSkillPool m_MonsterSkillPool;
        int m_DefPart[5];
        int m_nEventItemNum;
        _event_loot_item m_eventItem[16];
        struct _event_respawn *m_pEventRespawn;
        struct _event_set *m_pEventSet;
        CMonsterAI m_AI;
        CLuaSignalReActor m_LuaSignalReActor;
    public:
        bool AddEventItem(struct _event_loot_item* pItem);
        int AssistSF(struct CCharacter* pDst, struct CMonsterSkill* pskill);
        int Attack(struct CCharacter* pDst, struct CMonsterSkill* pskill);
        int AttackObject(int nDamage, struct CGameObject* pOri);
        int AttackableHeight();
        void AutoRecover();
        void BeTargeted(struct CCharacter* pSeacher);
        CMonster();
        void ctor_CMonster();
        void ChangeApparition(bool bApparition, unsigned int dwAfterKillTerm);
        void CheckAutoRecoverHP();
        bool CheckDelayDestroy();
        void CheckEmotionPresentation();
        bool CheckEventEmotionPresentation(char byCheckType, struct CCharacter* pTarget);
        void CheckLootItem(struct CPlayer* pOwner);
        void CheckMonsterRotate();
        bool CheckMonsterStateData();
        bool CheckRespawnProcess();
        void ClearEmotionPresentation();
        void Command_ChildMonDestroy(unsigned int dwAfterKillTerm);
        bool ConvertTargetPlayer(struct CPlayer* pTar);
        bool Create(struct _monster_create_setdata* pData);
        int CreateAI(int nType);
        bool Destroy(char byDestroyCode, struct CGameObject* pAttObj);
        void DisableStdItemLoot();
        bool FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond);
        float GeEmotionImpStdTime();
        unsigned int GetAggroResetTime();
        unsigned int GetAggroShortTime();
        int GetAttackDP();
        int GetAttackPart();
        float GetAttackRange();
        struct CCharacter* GetAttackTarget();
        float GetBonusInAreaAggro();
        char GetCombatState();
        int GetCritical_Exception_Rate();
        int GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart);
        float GetDefFacing(int nPart);
        float GetDefGap(int nPart);
        int GetDefSkill(bool bBackAttackDamage);
        char GetEmotionState();
        int GetFireTol();
        int GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack);
        int GetHP();
        int GetHelpMeCase();
        int GetLevel();
        int GetMaxDMGSFContCount();
        int GetMaxHP();
        int GetMob_AsistType();
        int GetMob_SubRace();
        uint16_t GetMonStateInfo();
        int GetMonsterGrade();
        float GetMoveSpeed();
        char GetMoveType();
        int GetMyDMGSFContCount();
        static unsigned int GetNewMonSerial();
        char* GetObjName();
        int GetObjRace();
        int GetOffensiveType();
        struct CLuaSignalReActor* GetSignalReActor();
        float GetSkillDelayTime(struct CMonsterSkill* pSkill);
        int GetSoilTol();
        bool GetViewAngleCap(int nCapKind, int* nOutValue);
        float GetVisualAngle();
        float GetVisualField();
        int GetWaterTol();
        float GetWeaponAdjust();
        int GetWeaponClass();
        float GetWidth();
        int GetWindTol();
        float GetYAngle();
        char GetYAngleByte();
        bool Init(struct _object_id* pID);
        char InsertSFContEffect(char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar);
        bool IsAttackableInTown();
        bool IsBeAttackedAble(bool bFirst);
        bool IsBeDamagedAble(struct CCharacter* pAtter);
        bool IsBossMonster();
        bool IsMovable();
        int IsPreAttackAbleMon();
        bool IsRecvableContEffect();
        bool IsRewardExp();
        bool IsRoateMonster();
        int IsValidPlayer();
        bool IsViewArea(struct CCharacter* pTarget);
        void LinkEventRespawn(struct _event_respawn* pEventRespawn);
        void LinkEventSet(struct _event_set* pEventSet);
        void Loop();
        void OutOfSec();
        bool RobbedHP(struct CCharacter* pDst, int nDecHP);
        bool SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj);
        bool SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj);
        bool SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue);
        bool SF_LateContDamageRemove_Once(struct CCharacter* pDstObj);
        bool SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj);
        bool SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj);
        struct CCharacter* SearchNearPlayer();
        void SendMsg_Assist_Force(char byErrCode, struct CCharacter* pDst, struct _force_fld* pForc_fld, int nSFLv);
        void SendMsg_Assist_Skill(char byErrCode, int nEffectCode, struct CCharacter* pDst, struct _skill_fld* pSkill_fld, int nSFLv);
        void SendMsg_Attack_Force(struct CMonsterAttack* pAt);
        void SendMsg_Attack_Gen(struct CMonsterAttack* pAT);
        void SendMsg_Attack_Skill(struct CMonsterAttack* pAt);
        void SendMsg_Change_MonsterRotate();
        void SendMsg_Change_MonsterState();
        void SendMsg_Change_MonsterTarget(struct CCharacter* pChar);
        void SendMsg_Create();
        void SendMsg_Destroy(char byDestroyCode);
        void SendMsg_Emotion_Presentation(char bylhw, uint16_t wSubIndex, uint16_t wRandIndex, int nSendTargetIndex);
        void SendMsg_FixPosition(int n);
        void SendMsg_Move();
        void SendMsg_RealMovePoint(int n);
        void SetAttackTarget(struct CCharacter* p);
        void SetCombatState(char byCombatState);
        int SetDamage(int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn);
        void SetDefPart(struct _monster_fld* pRecordSet);
        void SetEmotionState(char byEmotionState);
        bool SetHP(int nHP, bool bOver);
        void SetMoveType(char bMoveType);
        void SetStun(bool bStun);
        void UpdateLookAtPos(float* vLookAt);
        void UpdateLookAtPos();
        void UpdateSFCont();
        int _AssistSF_Cont_Dmg(struct CCharacter* pDst, struct CMonsterSkill* pskill);
        int _AssistSF_Cont_Support(struct CCharacter* pDst, struct CMonsterSkill* pskill);
        int _AssistSF_Cont_Temp(struct CCharacter* pDst, struct CMonsterSkill* pskill);
        void _BossBirthWriteLog();
        void _BossDieWriteLog_End();
        void _BossDieWriteLog_Start(char byDestroyCode, struct CGameObject* pAttObj);
        static void _DestroySDM();
        static void _InitSDM();
        static void _InitSDM_LootTBL();
        bool _LootItem_EventSet(struct CPlayer* pOwner);
        bool _LootItem_Qst(struct CPlayer* pOwner);
        bool _LootItem_Rwp(struct CPlayer* pOwner);
        bool _LootItem_Std(struct CPlayer* pOwner);
        void make_force_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, struct _attack_param* pAP);
        void make_gen_attack_param(struct CCharacter* pDst, struct _attack_param* pAP);
        bool make_skill_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, int nEffectType, struct _attack_param* pAP);
        ~CMonster();
        void dtor_CMonster();
    };
END_ATF_NAMESPACE
