#include <_possible_battle_guild_list_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_ptr _possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_next(nullptr);
        Info::_possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_clbk _possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_user(nullptr);
        
        Info::_possible_battle_guild_list_result_zoclsize4_ptr _possible_battle_guild_list_result_zoclsize4_next(nullptr);
        Info::_possible_battle_guild_list_result_zoclsize4_clbk _possible_battle_guild_list_result_zoclsize4_user(nullptr);
        
        
        void _possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_wrapper(struct _possible_battle_guild_list_result_zocl* _this)
        {
           _possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_user(_this, _possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_next);
        };
        int _possible_battle_guild_list_result_zoclsize4_wrapper(struct _possible_battle_guild_list_result_zocl* _this)
        {
           return _possible_battle_guild_list_result_zoclsize4_user(_this, _possible_battle_guild_list_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _possible_battle_guild_list_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403d07e0L,
                (LPVOID *)&_possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_user,
                (LPVOID *)&_possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_next,
                (LPVOID)cast_pointer_function(_possible_battle_guild_list_result_zoclctor__possible_battle_guild_list_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_possible_battle_guild_list_result_zocl::*)())&_possible_battle_guild_list_result_zocl::ctor__possible_battle_guild_list_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1403d0860L,
                (LPVOID *)&_possible_battle_guild_list_result_zoclsize4_user,
                (LPVOID *)&_possible_battle_guild_list_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_possible_battle_guild_list_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_possible_battle_guild_list_result_zocl::*)())&_possible_battle_guild_list_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
