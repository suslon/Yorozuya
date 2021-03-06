// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <R3Camera.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using R3CameraGetDist1_ptr = float (WINAPIV*)(struct R3Camera*);
        using R3CameraGetDist1_clbk = float (WINAPIV*)(struct R3Camera*, R3CameraGetDist1_ptr);
        using R3CameraGetPh2_ptr = float (WINAPIV*)(struct R3Camera*);
        using R3CameraGetPh2_clbk = float (WINAPIV*)(struct R3Camera*, R3CameraGetPh2_ptr);
        using R3CameraGetPoint3_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        using R3CameraGetPoint3_clbk = void (WINAPIV*)(struct R3Camera*, float*, R3CameraGetPoint3_ptr);
        using R3CameraGetPos4_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        using R3CameraGetPos4_clbk = void (WINAPIV*)(struct R3Camera*, float*, R3CameraGetPos4_ptr);
        using R3CameraGetSmoothTarPoint5_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        using R3CameraGetSmoothTarPoint5_clbk = void (WINAPIV*)(struct R3Camera*, float*, R3CameraGetSmoothTarPoint5_ptr);
        using R3CameraGetTh6_ptr = float (WINAPIV*)(struct R3Camera*);
        using R3CameraGetTh6_clbk = float (WINAPIV*)(struct R3Camera*, R3CameraGetTh6_ptr);
        using R3CameraGetViewMatrix7_ptr = struct D3DXMATRIX* (WINAPIV*)(struct R3Camera*);
        using R3CameraGetViewMatrix7_clbk = struct D3DXMATRIX* (WINAPIV*)(struct R3Camera*, R3CameraGetViewMatrix7_ptr);
        using R3CameraMakeCameraAndViewMatrix8_ptr = void (WINAPIV*)(struct R3Camera*);
        using R3CameraMakeCameraAndViewMatrix8_clbk = void (WINAPIV*)(struct R3Camera*, R3CameraMakeCameraAndViewMatrix8_ptr);
        using R3CameraMakeViewMatrix9_ptr = void (WINAPIV*)(struct R3Camera*, struct D3DXMATRIX*);
        using R3CameraMakeViewMatrix9_clbk = void (WINAPIV*)(struct R3Camera*, struct D3DXMATRIX*, R3CameraMakeViewMatrix9_ptr);
        using R3CameraSetBspPtr10_ptr = void (WINAPIV*)(struct R3Camera*, void*);
        using R3CameraSetBspPtr10_clbk = void (WINAPIV*)(struct R3Camera*, void*, R3CameraSetBspPtr10_ptr);
        using R3CameraSetDist11_ptr = void (WINAPIV*)(struct R3Camera*, float);
        using R3CameraSetDist11_clbk = void (WINAPIV*)(struct R3Camera*, float, R3CameraSetDist11_ptr);
        using R3CameraSetMatrix12_ptr = void (WINAPIV*)(struct R3Camera*, struct Matrix4*);
        using R3CameraSetMatrix12_clbk = void (WINAPIV*)(struct R3Camera*, struct Matrix4*, R3CameraSetMatrix12_ptr);
        using R3CameraSetPoint13_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        using R3CameraSetPoint13_clbk = void (WINAPIV*)(struct R3Camera*, float, float, float, R3CameraSetPoint13_ptr);
        using R3CameraSetPos14_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        using R3CameraSetPos14_clbk = void (WINAPIV*)(struct R3Camera*, float, float, float, R3CameraSetPos14_ptr);
        using R3CameraSetSmoothDistLoop15_ptr = void (WINAPIV*)(struct R3Camera*, float);
        using R3CameraSetSmoothDistLoop15_clbk = void (WINAPIV*)(struct R3Camera*, float, R3CameraSetSmoothDistLoop15_ptr);
        using R3CameraSetSmoothPointLoop16_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        using R3CameraSetSmoothPointLoop16_clbk = void (WINAPIV*)(struct R3Camera*, float, float, float, R3CameraSetSmoothPointLoop16_ptr);
        using R3CameraSetSmoothTarPoint17_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        using R3CameraSetSmoothTarPoint17_clbk = void (WINAPIV*)(struct R3Camera*, float, float, float, R3CameraSetSmoothTarPoint17_ptr);
        using R3CameraSetSmoothThPhLoop18_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        using R3CameraSetSmoothThPhLoop18_clbk = void (WINAPIV*)(struct R3Camera*, float, float, R3CameraSetSmoothThPhLoop18_ptr);
        using R3CameraSetSmoothValue19_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        using R3CameraSetSmoothValue19_clbk = void (WINAPIV*)(struct R3Camera*, float, float, R3CameraSetSmoothValue19_ptr);
        using R3CameraSetThPh20_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        using R3CameraSetThPh20_clbk = void (WINAPIV*)(struct R3Camera*, float, float, R3CameraSetThPh20_ptr);
        using R3CameraSetViewMatrix21_ptr = void (WINAPIV*)(struct R3Camera*);
        using R3CameraSetViewMatrix21_clbk = void (WINAPIV*)(struct R3Camera*, R3CameraSetViewMatrix21_ptr);
        
        using R3Cameradtor_R3Camera22_ptr = int64_t (WINAPIV*)(struct R3Camera*);
        using R3Cameradtor_R3Camera22_clbk = int64_t (WINAPIV*)(struct R3Camera*, R3Cameradtor_R3Camera22_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
