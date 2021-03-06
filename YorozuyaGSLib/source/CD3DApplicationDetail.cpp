#include <CD3DApplicationDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CD3DApplicationAdjustWindowForChange1_ptr CD3DApplicationAdjustWindowForChange1_next(nullptr);
        Info::CD3DApplicationAdjustWindowForChange1_clbk CD3DApplicationAdjustWindowForChange1_user(nullptr);
        
        Info::CD3DApplicationBuildDeviceList2_ptr CD3DApplicationBuildDeviceList2_next(nullptr);
        Info::CD3DApplicationBuildDeviceList2_clbk CD3DApplicationBuildDeviceList2_user(nullptr);
        
        
        Info::CD3DApplicationctor_CD3DApplication3_ptr CD3DApplicationctor_CD3DApplication3_next(nullptr);
        Info::CD3DApplicationctor_CD3DApplication3_clbk CD3DApplicationctor_CD3DApplication3_user(nullptr);
        
        Info::CD3DApplicationCleanup3DEnvironment4_ptr CD3DApplicationCleanup3DEnvironment4_next(nullptr);
        Info::CD3DApplicationCleanup3DEnvironment4_clbk CD3DApplicationCleanup3DEnvironment4_user(nullptr);
        
        Info::CD3DApplicationConfirmDevice5_ptr CD3DApplicationConfirmDevice5_next(nullptr);
        Info::CD3DApplicationConfirmDevice5_clbk CD3DApplicationConfirmDevice5_user(nullptr);
        
        Info::CD3DApplicationCreate6_ptr CD3DApplicationCreate6_next(nullptr);
        Info::CD3DApplicationCreate6_clbk CD3DApplicationCreate6_user(nullptr);
        
        Info::CD3DApplicationCreateDirect3D7_ptr CD3DApplicationCreateDirect3D7_next(nullptr);
        Info::CD3DApplicationCreateDirect3D7_clbk CD3DApplicationCreateDirect3D7_user(nullptr);
        
        Info::CD3DApplicationDeleteDeviceObjects8_ptr CD3DApplicationDeleteDeviceObjects8_next(nullptr);
        Info::CD3DApplicationDeleteDeviceObjects8_clbk CD3DApplicationDeleteDeviceObjects8_user(nullptr);
        
        Info::CD3DApplicationDisplayErrorMsg9_ptr CD3DApplicationDisplayErrorMsg9_next(nullptr);
        Info::CD3DApplicationDisplayErrorMsg9_clbk CD3DApplicationDisplayErrorMsg9_user(nullptr);
        
        Info::CD3DApplicationEndLoop10_ptr CD3DApplicationEndLoop10_next(nullptr);
        Info::CD3DApplicationEndLoop10_clbk CD3DApplicationEndLoop10_user(nullptr);
        
        Info::CD3DApplicationFinalCleanup11_ptr CD3DApplicationFinalCleanup11_next(nullptr);
        Info::CD3DApplicationFinalCleanup11_clbk CD3DApplicationFinalCleanup11_user(nullptr);
        
        Info::CD3DApplicationFindDepthStencilFormat12_ptr CD3DApplicationFindDepthStencilFormat12_next(nullptr);
        Info::CD3DApplicationFindDepthStencilFormat12_clbk CD3DApplicationFindDepthStencilFormat12_user(nullptr);
        
        Info::CD3DApplicationForceWindowed13_ptr CD3DApplicationForceWindowed13_next(nullptr);
        Info::CD3DApplicationForceWindowed13_clbk CD3DApplicationForceWindowed13_user(nullptr);
        
        Info::CD3DApplicationFrameMove14_ptr CD3DApplicationFrameMove14_next(nullptr);
        Info::CD3DApplicationFrameMove14_clbk CD3DApplicationFrameMove14_user(nullptr);
        
        Info::CD3DApplicationInitDeviceObjects15_ptr CD3DApplicationInitDeviceObjects15_next(nullptr);
        Info::CD3DApplicationInitDeviceObjects15_clbk CD3DApplicationInitDeviceObjects15_user(nullptr);
        
        Info::CD3DApplicationInitialize3DEnvironment16_ptr CD3DApplicationInitialize3DEnvironment16_next(nullptr);
        Info::CD3DApplicationInitialize3DEnvironment16_clbk CD3DApplicationInitialize3DEnvironment16_user(nullptr);
        
        Info::CD3DApplicationInvalidateDeviceObjects17_ptr CD3DApplicationInvalidateDeviceObjects17_next(nullptr);
        Info::CD3DApplicationInvalidateDeviceObjects17_clbk CD3DApplicationInvalidateDeviceObjects17_user(nullptr);
        
        Info::CD3DApplicationMsgProc18_ptr CD3DApplicationMsgProc18_next(nullptr);
        Info::CD3DApplicationMsgProc18_clbk CD3DApplicationMsgProc18_user(nullptr);
        
        Info::CD3DApplicationOneTimeSceneInit19_ptr CD3DApplicationOneTimeSceneInit19_next(nullptr);
        Info::CD3DApplicationOneTimeSceneInit19_clbk CD3DApplicationOneTimeSceneInit19_user(nullptr);
        
        Info::CD3DApplicationPause20_ptr CD3DApplicationPause20_next(nullptr);
        Info::CD3DApplicationPause20_clbk CD3DApplicationPause20_user(nullptr);
        
        Info::CD3DApplicationPrepareLoop21_ptr CD3DApplicationPrepareLoop21_next(nullptr);
        Info::CD3DApplicationPrepareLoop21_clbk CD3DApplicationPrepareLoop21_user(nullptr);
        
        Info::CD3DApplicationRelease22_ptr CD3DApplicationRelease22_next(nullptr);
        Info::CD3DApplicationRelease22_clbk CD3DApplicationRelease22_user(nullptr);
        
        Info::CD3DApplicationRender23_ptr CD3DApplicationRender23_next(nullptr);
        Info::CD3DApplicationRender23_clbk CD3DApplicationRender23_user(nullptr);
        
        Info::CD3DApplicationRender3DEnvironment24_ptr CD3DApplicationRender3DEnvironment24_next(nullptr);
        Info::CD3DApplicationRender3DEnvironment24_clbk CD3DApplicationRender3DEnvironment24_user(nullptr);
        
        Info::CD3DApplicationResize3DEnvironment25_ptr CD3DApplicationResize3DEnvironment25_next(nullptr);
        Info::CD3DApplicationResize3DEnvironment25_clbk CD3DApplicationResize3DEnvironment25_user(nullptr);
        
        Info::CD3DApplicationRestoreDeviceObjects26_ptr CD3DApplicationRestoreDeviceObjects26_next(nullptr);
        Info::CD3DApplicationRestoreDeviceObjects26_clbk CD3DApplicationRestoreDeviceObjects26_user(nullptr);
        
        Info::CD3DApplicationRun27_ptr CD3DApplicationRun27_next(nullptr);
        Info::CD3DApplicationRun27_clbk CD3DApplicationRun27_user(nullptr);
        
        Info::CD3DApplicationSelectDeviceProc28_ptr CD3DApplicationSelectDeviceProc28_next(nullptr);
        Info::CD3DApplicationSelectDeviceProc28_clbk CD3DApplicationSelectDeviceProc28_user(nullptr);
        
        Info::CD3DApplicationToggleFullscreen29_ptr CD3DApplicationToggleFullscreen29_next(nullptr);
        Info::CD3DApplicationToggleFullscreen29_clbk CD3DApplicationToggleFullscreen29_user(nullptr);
        
        Info::CD3DApplicationUserSelectNewDevice30_ptr CD3DApplicationUserSelectNewDevice30_next(nullptr);
        Info::CD3DApplicationUserSelectNewDevice30_clbk CD3DApplicationUserSelectNewDevice30_user(nullptr);
        
        int32_t CD3DApplicationAdjustWindowForChange1_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationAdjustWindowForChange1_user(_this, CD3DApplicationAdjustWindowForChange1_next);
        };
        int32_t CD3DApplicationBuildDeviceList2_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationBuildDeviceList2_user(_this, CD3DApplicationBuildDeviceList2_next);
        };
        
        int64_t CD3DApplicationctor_CD3DApplication3_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationctor_CD3DApplication3_user(_this, CD3DApplicationctor_CD3DApplication3_next);
        };
        void CD3DApplicationCleanup3DEnvironment4_wrapper(struct CD3DApplication* _this)
        {
           CD3DApplicationCleanup3DEnvironment4_user(_this, CD3DApplicationCleanup3DEnvironment4_next);
        };
        int32_t CD3DApplicationConfirmDevice5_wrapper(struct CD3DApplication* _this, struct _D3DCAPS8* arg_0, uint32_t arg_1, _D3DFORMAT arg_2)
        {
           return CD3DApplicationConfirmDevice5_user(_this, arg_0, arg_1, arg_2, CD3DApplicationConfirmDevice5_next);
        };
        int32_t CD3DApplicationCreate6_wrapper(struct CD3DApplication* _this, HINSTANCE arg_0)
        {
           return CD3DApplicationCreate6_user(_this, arg_0, CD3DApplicationCreate6_next);
        };
        int32_t CD3DApplicationCreateDirect3D7_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationCreateDirect3D7_user(_this, CD3DApplicationCreateDirect3D7_next);
        };
        int32_t CD3DApplicationDeleteDeviceObjects8_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationDeleteDeviceObjects8_user(_this, CD3DApplicationDeleteDeviceObjects8_next);
        };
        int32_t CD3DApplicationDisplayErrorMsg9_wrapper(struct CD3DApplication* _this, int32_t arg_0, uint32_t arg_1)
        {
           return CD3DApplicationDisplayErrorMsg9_user(_this, arg_0, arg_1, CD3DApplicationDisplayErrorMsg9_next);
        };
        int32_t CD3DApplicationEndLoop10_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationEndLoop10_user(_this, CD3DApplicationEndLoop10_next);
        };
        int32_t CD3DApplicationFinalCleanup11_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationFinalCleanup11_user(_this, CD3DApplicationFinalCleanup11_next);
        };
        int64_t CD3DApplicationFindDepthStencilFormat12_wrapper(struct CD3DApplication* _this, unsigned int arg_0, CD3DApplication::_D3DDEVTYPE arg_1, _D3DFORMAT arg_2, _D3DFORMAT* arg_3)
        {
           return CD3DApplicationFindDepthStencilFormat12_user(_this, arg_0, arg_1, arg_2, arg_3, CD3DApplicationFindDepthStencilFormat12_next);
        };
        int32_t CD3DApplicationForceWindowed13_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationForceWindowed13_user(_this, CD3DApplicationForceWindowed13_next);
        };
        int32_t CD3DApplicationFrameMove14_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationFrameMove14_user(_this, CD3DApplicationFrameMove14_next);
        };
        int32_t CD3DApplicationInitDeviceObjects15_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationInitDeviceObjects15_user(_this, CD3DApplicationInitDeviceObjects15_next);
        };
        int32_t CD3DApplicationInitialize3DEnvironment16_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationInitialize3DEnvironment16_user(_this, CD3DApplicationInitialize3DEnvironment16_next);
        };
        int32_t CD3DApplicationInvalidateDeviceObjects17_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationInvalidateDeviceObjects17_user(_this, CD3DApplicationInvalidateDeviceObjects17_next);
        };
        int64_t CD3DApplicationMsgProc18_wrapper(struct CD3DApplication* _this, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
        {
           return CD3DApplicationMsgProc18_user(_this, hWnd, Msg, wParam, lParam, CD3DApplicationMsgProc18_next);
        };
        int32_t CD3DApplicationOneTimeSceneInit19_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationOneTimeSceneInit19_user(_this, CD3DApplicationOneTimeSceneInit19_next);
        };
        void CD3DApplicationPause20_wrapper(struct CD3DApplication* _this, int arg_0)
        {
           CD3DApplicationPause20_user(_this, arg_0, CD3DApplicationPause20_next);
        };
        int32_t CD3DApplicationPrepareLoop21_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationPrepareLoop21_user(_this, CD3DApplicationPrepareLoop21_next);
        };
        int32_t CD3DApplicationRelease22_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationRelease22_user(_this, CD3DApplicationRelease22_next);
        };
        int32_t CD3DApplicationRender23_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationRender23_user(_this, CD3DApplicationRender23_next);
        };
        int32_t CD3DApplicationRender3DEnvironment24_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationRender3DEnvironment24_user(_this, CD3DApplicationRender3DEnvironment24_next);
        };
        int32_t CD3DApplicationResize3DEnvironment25_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationResize3DEnvironment25_user(_this, CD3DApplicationResize3DEnvironment25_next);
        };
        int32_t CD3DApplicationRestoreDeviceObjects26_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationRestoreDeviceObjects26_user(_this, CD3DApplicationRestoreDeviceObjects26_next);
        };
        int64_t CD3DApplicationRun27_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationRun27_user(_this, CD3DApplicationRun27_next);
        };
        int64_t CD3DApplicationSelectDeviceProc28_wrapper(HWND__* arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
        {
           return CD3DApplicationSelectDeviceProc28_user(arg_0, arg_1, arg_2, arg_3, CD3DApplicationSelectDeviceProc28_next);
        };
        int32_t CD3DApplicationToggleFullscreen29_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationToggleFullscreen29_user(_this, CD3DApplicationToggleFullscreen29_next);
        };
        int32_t CD3DApplicationUserSelectNewDevice30_wrapper(struct CD3DApplication* _this)
        {
           return CD3DApplicationUserSelectNewDevice30_user(_this, CD3DApplicationUserSelectNewDevice30_next);
        };
        
        ::std::array<hook_record, 30> CD3DApplication_functions = 
        {
            _hook_record {
                (LPVOID)0x140523fe0L,
                (LPVOID *)&CD3DApplicationAdjustWindowForChange1_user,
                (LPVOID *)&CD3DApplicationAdjustWindowForChange1_next,
                (LPVOID)cast_pointer_function(CD3DApplicationAdjustWindowForChange1_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::AdjustWindowForChange)
            },
            _hook_record {
                (LPVOID)0x140525340L,
                (LPVOID *)&CD3DApplicationBuildDeviceList2_user,
                (LPVOID *)&CD3DApplicationBuildDeviceList2_next,
                (LPVOID)cast_pointer_function(CD3DApplicationBuildDeviceList2_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::BuildDeviceList)
            },
            _hook_record {
                (LPVOID)0x140523950L,
                (LPVOID *)&CD3DApplicationctor_CD3DApplication3_user,
                (LPVOID *)&CD3DApplicationctor_CD3DApplication3_next,
                (LPVOID)cast_pointer_function(CD3DApplicationctor_CD3DApplication3_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DApplication::*)())&CD3DApplication::ctor_CD3DApplication)
            },
            _hook_record {
                (LPVOID)0x140524d10L,
                (LPVOID *)&CD3DApplicationCleanup3DEnvironment4_user,
                (LPVOID *)&CD3DApplicationCleanup3DEnvironment4_next,
                (LPVOID)cast_pointer_function(CD3DApplicationCleanup3DEnvironment4_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DApplication::*)())&CD3DApplication::Cleanup3DEnvironment)
            },
            _hook_record {
                (LPVOID)0x140523a30L,
                (LPVOID *)&CD3DApplicationConfirmDevice5_user,
                (LPVOID *)&CD3DApplicationConfirmDevice5_next,
                (LPVOID)cast_pointer_function(CD3DApplicationConfirmDevice5_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)(struct _D3DCAPS8*, uint32_t, _D3DFORMAT))&CD3DApplication::ConfirmDevice)
            },
            _hook_record {
                (LPVOID)0x140523af0L,
                (LPVOID *)&CD3DApplicationCreate6_user,
                (LPVOID *)&CD3DApplicationCreate6_next,
                (LPVOID)cast_pointer_function(CD3DApplicationCreate6_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)(HINSTANCE))&CD3DApplication::Create)
            },
            _hook_record {
                (LPVOID)0x140526270L,
                (LPVOID *)&CD3DApplicationCreateDirect3D7_user,
                (LPVOID *)&CD3DApplicationCreateDirect3D7_next,
                (LPVOID)cast_pointer_function(CD3DApplicationCreateDirect3D7_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::CreateDirect3D)
            },
            _hook_record {
                (LPVOID)0x140523aa0L,
                (LPVOID *)&CD3DApplicationDeleteDeviceObjects8_user,
                (LPVOID *)&CD3DApplicationDeleteDeviceObjects8_next,
                (LPVOID)cast_pointer_function(CD3DApplicationDeleteDeviceObjects8_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::DeleteDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140524d80L,
                (LPVOID *)&CD3DApplicationDisplayErrorMsg9_user,
                (LPVOID *)&CD3DApplicationDisplayErrorMsg9_next,
                (LPVOID)cast_pointer_function(CD3DApplicationDisplayErrorMsg9_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)(int32_t, uint32_t))&CD3DApplication::DisplayErrorMsg)
            },
            _hook_record {
                (LPVOID)0x1405252f0L,
                (LPVOID *)&CD3DApplicationEndLoop10_user,
                (LPVOID *)&CD3DApplicationEndLoop10_next,
                (LPVOID)cast_pointer_function(CD3DApplicationEndLoop10_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::EndLoop)
            },
            _hook_record {
                (LPVOID)0x140523ab0L,
                (LPVOID *)&CD3DApplicationFinalCleanup11_user,
                (LPVOID *)&CD3DApplicationFinalCleanup11_next,
                (LPVOID)cast_pointer_function(CD3DApplicationFinalCleanup11_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::FinalCleanup)
            },
            _hook_record {
                (LPVOID)0x140523b40L,
                (LPVOID *)&CD3DApplicationFindDepthStencilFormat12_user,
                (LPVOID *)&CD3DApplicationFindDepthStencilFormat12_next,
                (LPVOID)cast_pointer_function(CD3DApplicationFindDepthStencilFormat12_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DApplication::*)(unsigned int, CD3DApplication::_D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT*))&CD3DApplication::FindDepthStencilFormat)
            },
            _hook_record {
                (LPVOID)0x140526040L,
                (LPVOID *)&CD3DApplicationForceWindowed13_user,
                (LPVOID *)&CD3DApplicationForceWindowed13_next,
                (LPVOID)cast_pointer_function(CD3DApplicationForceWindowed13_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::ForceWindowed)
            },
            _hook_record {
                (LPVOID)0x140523a70L,
                (LPVOID *)&CD3DApplicationFrameMove14_user,
                (LPVOID *)&CD3DApplicationFrameMove14_next,
                (LPVOID)cast_pointer_function(CD3DApplicationFrameMove14_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::FrameMove)
            },
            _hook_record {
                (LPVOID)0x140523a50L,
                (LPVOID *)&CD3DApplicationInitDeviceObjects15_user,
                (LPVOID *)&CD3DApplicationInitDeviceObjects15_next,
                (LPVOID)cast_pointer_function(CD3DApplicationInitDeviceObjects15_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::InitDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140525a90L,
                (LPVOID *)&CD3DApplicationInitialize3DEnvironment16_user,
                (LPVOID *)&CD3DApplicationInitialize3DEnvironment16_next,
                (LPVOID)cast_pointer_function(CD3DApplicationInitialize3DEnvironment16_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::Initialize3DEnvironment)
            },
            _hook_record {
                (LPVOID)0x140523a90L,
                (LPVOID *)&CD3DApplicationInvalidateDeviceObjects17_user,
                (LPVOID *)&CD3DApplicationInvalidateDeviceObjects17_next,
                (LPVOID)cast_pointer_function(CD3DApplicationInvalidateDeviceObjects17_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::InvalidateDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x1405265e0L,
                (LPVOID *)&CD3DApplicationMsgProc18_user,
                (LPVOID *)&CD3DApplicationMsgProc18_next,
                (LPVOID)cast_pointer_function(CD3DApplicationMsgProc18_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DApplication::*)(HWND, UINT, WPARAM, LPARAM))&CD3DApplication::MsgProc)
            },
            _hook_record {
                (LPVOID)0x140523a40L,
                (LPVOID *)&CD3DApplicationOneTimeSceneInit19_user,
                (LPVOID *)&CD3DApplicationOneTimeSceneInit19_next,
                (LPVOID)cast_pointer_function(CD3DApplicationOneTimeSceneInit19_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::OneTimeSceneInit)
            },
            _hook_record {
                (LPVOID)0x140524c90L,
                (LPVOID *)&CD3DApplicationPause20_user,
                (LPVOID *)&CD3DApplicationPause20_next,
                (LPVOID)cast_pointer_function(CD3DApplicationPause20_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DApplication::*)(int))&CD3DApplication::Pause)
            },
            _hook_record {
                (LPVOID)0x140525260L,
                (LPVOID *)&CD3DApplicationPrepareLoop21_user,
                (LPVOID *)&CD3DApplicationPrepareLoop21_next,
                (LPVOID)cast_pointer_function(CD3DApplicationPrepareLoop21_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::PrepareLoop)
            },
            _hook_record {
                (LPVOID)0x140525330L,
                (LPVOID *)&CD3DApplicationRelease22_user,
                (LPVOID *)&CD3DApplicationRelease22_next,
                (LPVOID)cast_pointer_function(CD3DApplicationRelease22_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::Release)
            },
            _hook_record {
                (LPVOID)0x140523a80L,
                (LPVOID *)&CD3DApplicationRender23_user,
                (LPVOID *)&CD3DApplicationRender23_next,
                (LPVOID)cast_pointer_function(CD3DApplicationRender23_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::Render)
            },
            _hook_record {
                (LPVOID)0x140524870L,
                (LPVOID *)&CD3DApplicationRender3DEnvironment24_user,
                (LPVOID *)&CD3DApplicationRender3DEnvironment24_next,
                (LPVOID)cast_pointer_function(CD3DApplicationRender3DEnvironment24_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::Render3DEnvironment)
            },
            _hook_record {
                (LPVOID)0x140523eb0L,
                (LPVOID *)&CD3DApplicationResize3DEnvironment25_user,
                (LPVOID *)&CD3DApplicationResize3DEnvironment25_next,
                (LPVOID)cast_pointer_function(CD3DApplicationResize3DEnvironment25_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::Resize3DEnvironment)
            },
            _hook_record {
                (LPVOID)0x140523a60L,
                (LPVOID *)&CD3DApplicationRestoreDeviceObjects26_user,
                (LPVOID *)&CD3DApplicationRestoreDeviceObjects26_next,
                (LPVOID)cast_pointer_function(CD3DApplicationRestoreDeviceObjects26_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::RestoreDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140526170L,
                (LPVOID *)&CD3DApplicationRun27_user,
                (LPVOID *)&CD3DApplicationRun27_next,
                (LPVOID)cast_pointer_function(CD3DApplicationRun27_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DApplication::*)())&CD3DApplication::Run)
            },
            _hook_record {
                (LPVOID)0x140524060L,
                (LPVOID *)&CD3DApplicationSelectDeviceProc28_user,
                (LPVOID *)&CD3DApplicationSelectDeviceProc28_next,
                (LPVOID)cast_pointer_function(CD3DApplicationSelectDeviceProc28_wrapper),
                (LPVOID)cast_pointer_function((int64_t(*)(HWND__*, unsigned int, uint64_t, int64_t))&CD3DApplication::SelectDeviceProc)
            },
            _hook_record {
                (LPVOID)0x140526300L,
                (LPVOID *)&CD3DApplicationToggleFullscreen29_user,
                (LPVOID *)&CD3DApplicationToggleFullscreen29_next,
                (LPVOID)cast_pointer_function(CD3DApplicationToggleFullscreen29_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::ToggleFullscreen)
            },
            _hook_record {
                (LPVOID)0x1405264c0L,
                (LPVOID *)&CD3DApplicationUserSelectNewDevice30_user,
                (LPVOID *)&CD3DApplicationUserSelectNewDevice30_next,
                (LPVOID)cast_pointer_function(CD3DApplicationUserSelectNewDevice30_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CD3DApplication::*)())&CD3DApplication::UserSelectNewDevice)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
