// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapItemStoreList.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMapItemStoreListctor_CMapItemStoreList2_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        using CMapItemStoreListctor_CMapItemStoreList2_clbk = void (WINAPIV*)(struct CMapItemStoreList*, CMapItemStoreListctor_CMapItemStoreList2_ptr);
        using CMapItemStoreListCopyItemStoreData4_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapItemStoreList*);
        using CMapItemStoreListCopyItemStoreData4_clbk = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapItemStoreList*, CMapItemStoreListCopyItemStoreData4_ptr);
        using CMapItemStoreListCreateStores6_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*);
        using CMapItemStoreListCreateStores6_clbk = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*, CMapItemStoreListCreateStores6_ptr);
        using CMapItemStoreListGetItemStoreFromRecIndex8_ptr = struct CItemStore* (WINAPIV*)(struct CMapItemStoreList*, unsigned int);
        using CMapItemStoreListGetItemStoreFromRecIndex8_clbk = struct CItemStore* (WINAPIV*)(struct CMapItemStoreList*, unsigned int, CMapItemStoreListGetItemStoreFromRecIndex8_ptr);
        using CMapItemStoreListSetItemStores10_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*);
        using CMapItemStoreListSetItemStores10_clbk = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*, CMapItemStoreListSetItemStores10_ptr);
        using CMapItemStoreListSetTypeNSerial12_ptr = void (WINAPIV*)(struct CMapItemStoreList*, char, int);
        using CMapItemStoreListSetTypeNSerial12_clbk = void (WINAPIV*)(struct CMapItemStoreList*, char, int, CMapItemStoreListSetTypeNSerial12_ptr);
        
        using CMapItemStoreListdtor_CMapItemStoreList16_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        using CMapItemStoreListdtor_CMapItemStoreList16_clbk = void (WINAPIV*)(struct CMapItemStoreList*, CMapItemStoreListdtor_CMapItemStoreList16_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE