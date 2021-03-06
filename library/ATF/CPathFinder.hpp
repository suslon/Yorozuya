// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_PATH_NODE.hpp>


START_ATF_NAMESPACE
    struct CPathFinder
    {
        int mMaxDepth;
        _PATH_NODE mPathNode[12];
        float mStart[3];
        _PATH_NODE mStackPathNode[20];
        int mStackPoint;
    public:
        int64_t AddPath(float* arg_0, int arg_1);
        void CompletePath(int arg_0);
        uint16_t GetBackLineId(int arg_0);
        uint16_t GetFrontLineId(int arg_0);
        int64_t GetPathCnt(int arg_0);
        int64_t GetPathDirection(int arg_0);
        void PopPathStack(int arg_0);
        void PushPathStack(int arg_0);
        void SetBackLineId(int arg_0, int arg_1);
        void SetFrontLineId(int arg_0, int arg_1);
        void SetPathDirection(int arg_0, int arg_1);
    };
END_ATF_NAMESPACE
