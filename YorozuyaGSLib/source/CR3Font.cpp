#include <CR3Font.hpp>


START_ATF_NAMESPACE
    int CR3Font::CalcStrIndexPitInWidthA(char* arg_0, int arg_1, int arg_2)
    {
        using org_ptr = int (WINAPIV*)(struct CR3Font*, char*, int, int);
        return (org_ptr(0x140527dd0L))(this, arg_0, arg_1, arg_2);
    };
    int CR3Font::CalcStrIndexPitInWidthW(wchar_t* arg_0, int arg_1, int arg_2)
    {
        using org_ptr = int (WINAPIV*)(struct CR3Font*, wchar_t*, int, int);
        return (org_ptr(0x140527d80L))(this, arg_0, arg_1, arg_2);
    };
    void CR3Font::CalcStrPixelSizeA(char* arg_0, struct tagSIZE* arg_1, int arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, char*, struct tagSIZE*, int);
        (org_ptr(0x140527d30L))(this, arg_0, arg_1, arg_2);
    };
    void CR3Font::CalcStrPixelSizeW(wchar_t* arg_0, struct tagSIZE* arg_1, int arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, struct tagSIZE*, int);
        (org_ptr(0x140527ce0L))(this, arg_0, arg_1, arg_2);
    };
    void CR3Font::ClearCache()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140527000L))(this);
    };
    int32_t CR3Font::DeleteDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        return (org_ptr(0x140526fc0L))(this);
    };
    void CR3Font::DrawFullText(struct FONT2DVERTEX* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*);
        (org_ptr(0x140526f70L))(this, arg_0);
    };
    int32_t CR3Font::DrawTextA(float* arg_0, uint32_t arg_1, char* arg_2, uint32_t arg_3, float arg_4)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, char*, uint32_t, float);
        return (org_ptr(0x1405282a0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int32_t CR3Font::DrawTextA(float arg_0, float arg_1, uint32_t arg_2, char* arg_3, float** arg_4, uint32_t arg_5, float arg_6)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, float**, uint32_t, float);
        return (org_ptr(0x140528790L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
    };
    int32_t CR3Font::DrawTextA(float arg_0, float arg_1, uint32_t arg_2, char* arg_3, uint32_t arg_4, float arg_5)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, uint32_t, float);
        return (org_ptr(0x140528730L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    int32_t CR3Font::DrawTextW(float* arg_0, uint32_t arg_1, wchar_t* arg_2, uint32_t arg_3, float arg_4)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, wchar_t*, uint32_t, float);
        return (org_ptr(0x140529250L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int32_t CR3Font::DrawTextW(float arg_0, float arg_1, uint32_t arg_2, wchar_t* arg_3, float** arg_4, uint32_t arg_5, float arg_6)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, float**, uint32_t, float);
        return (org_ptr(0x140529730L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
    };
    int32_t CR3Font::DrawTextW(float arg_0, float arg_1, uint32_t arg_2, wchar_t* arg_3, uint32_t arg_4, float arg_5)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, uint32_t, float);
        return (org_ptr(0x1405296d0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    int32_t CR3Font::FillItA(struct FONT2DVERTEX* arg_0, float* arg_1, uint32_t arg_2, char* arg_3, uint32_t arg_4, float arg_5)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*, float*, uint32_t, char*, uint32_t, float);
        return (org_ptr(0x140527730L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    int32_t CR3Font::FillItW(wchar_t* arg_0, float* arg_1, uint32_t arg_2, wchar_t* arg_3, uint32_t arg_4, float arg_5)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, wchar_t*, float*, uint32_t, wchar_t*, uint32_t, float);
        return (org_ptr(0x140528c90L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    void CR3Font::GetBestPosCacheA(uint32_t arg_0, uint32_t* arg_1, uint32_t* arg_2, uint32_t* arg_3)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t, uint32_t*, uint32_t*, uint32_t*);
        (org_ptr(0x140527390L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CR3Font::GetBestPosCacheW(wchar_t* arg_0, uint32_t arg_1, int* arg_2, int* arg_3, int* arg_4, int* arg_5)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*, int*, int*);
        (org_ptr(0x140528870L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    uint32_t CR3Font::GetOutLineColor()
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CR3Font*);
        return (org_ptr(0x140510c40L))(this);
    };
    int32_t CR3Font::InitDeviceObjects(struct IDirect3DDevice8* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*, struct IDirect3DDevice8*, uint32_t, uint32_t, uint32_t);
        return (org_ptr(0x140526d30L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int32_t CR3Font::InvalidateDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        return (org_ptr(0x140528820L))(this);
    };
    int64_t CR3Font::IsExistCacheA(char* arg_0, uint32_t arg_1, uint32_t* arg_2, uint32_t* arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t*, uint32_t*);
        return (org_ptr(0x140527290L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CR3Font::IsExistCacheW(wchar_t* arg_0, uint32_t arg_1, int* arg_2, int* arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*);
        return (org_ptr(0x140527190L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CR3Font::MemAllocate()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140526c00L))(this);
    };
    void CR3Font::MemFree()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140526ce0L))(this);
    };
    void CR3Font::PrepareDrawText()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140526de0L))(this);
    };
    void CR3Font::PrivateInit()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140527e80L))(this);
    };
    void CR3Font::PrivateRelease()
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x1405280c0L))(this);
    };
    int32_t CR3Font::RestoreDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        return (org_ptr(0x140528110L))(this);
    };
    void CR3Font::SetCacheA(char* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3, uint32_t arg_4)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t, uint32_t, uint32_t);
        (org_ptr(0x1405274f0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    void CR3Font::SetCacheW(wchar_t* arg_0, uint32_t arg_1, int arg_2, int arg_3, int arg_4, int arg_5)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int, int, int, int);
        (org_ptr(0x140528a80L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    void CR3Font::SetCharSet(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t);
        (org_ptr(0x140526bf0L))(this, arg_0);
    };
    void CR3Font::SetFont(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, char*);
        (org_ptr(0x140526bd0L))(this, arg_0);
    };
    void CR3Font::SetOutLineColor(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t);
        (org_ptr(0x140510c30L))(this, arg_0);
    };
    CR3Font::~CR3Font()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CR3Font*);
        (org_ptr(0x140526bc0L))(this);
    };
    int64_t CR3Font::dtor_CR3Font()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CR3Font*);
        return (org_ptr(0x140526bc0L))(this);
    };
END_ATF_NAMESPACE
