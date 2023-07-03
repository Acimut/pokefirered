#include "song_table.h"

const struct Song gSongTable[] = 
{
    [MUS_DUMMY]                 = SONG(mus_dummy, MUSIC_PLAYER_BGM),
    [SE_USE_ITEM]               = SONG(se_use_item, MUSIC_PLAYER_SE1),
    [SE_PC_LOGIN]               = SONG(se_pc_login, MUSIC_PLAYER_SE1),
    [SE_PC_OFF]                 = SONG(se_pc_off, MUSIC_PLAYER_SE1),
    [SE_PC_ON]                  = SONG(se_pc_on, MUSIC_PLAYER_SE1),
    [SE_SELECT]                 = SONG(se_select, MUSIC_PLAYER_SE2),
    [SE_WIN_OPEN]               = SONG(se_win_open, MUSIC_PLAYER_SE1),
    [SE_WALL_HIT]               = SONG(se_wall_hit, MUSIC_PLAYER_SE2),
    [SE_RS_DOOR]                = SONG(se_rs_door, MUSIC_PLAYER_SE1),
    [SE_EXIT]                   = SONG(se_exit, MUSIC_PLAYER_SE1),
    [SE_LEDGE]                  = SONG(se_ledge, MUSIC_PLAYER_SE1),
    [SE_BIKE_BELL]              = SONG(se_bike_bell, MUSIC_PLAYER_SE1),
    [SE_NOT_EFFECTIVE]          = SONG(se_not_effective, MUSIC_PLAYER_SE1),
    [SE_EFFECTIVE]              = SONG(se_effective, MUSIC_PLAYER_SE1),
    [SE_SUPER_EFFECTIVE]        = SONG(se_super_effective, MUSIC_PLAYER_SE1),
    [SE_BALL_OPEN]              = SONG(se_ball_open, MUSIC_PLAYER_SE1),
    [SE_FAINT]                  = SONG(se_faint, MUSIC_PLAYER_SE1),
    [SE_FLEE]                   = SONG(se_flee, MUSIC_PLAYER_SE1),
    [SE_SLIDING_DOOR]           = SONG(se_sliding_door, MUSIC_PLAYER_SE1),
    [SE_SHIP]                   = SONG(se_ship, MUSIC_PLAYER_SE1),
    [SE_BANG]                   = SONG(se_bang, MUSIC_PLAYER_SE1),
    [SE_PIN]                    = SONG(se_pin, MUSIC_PLAYER_SE1),
    [SE_BOO]                    = SONG(se_boo, MUSIC_PLAYER_SE1),
    [SE_BALL]                   = SONG(se_ball, MUSIC_PLAYER_SE1),
    [SE_CONTEST_PLACE]          = SONG(se_contest_place, MUSIC_PLAYER_SE2),
    [SE_SUCCESS]                = SONG(se_success, MUSIC_PLAYER_SE1),
    [SE_FAILURE]                = SONG(se_failure, MUSIC_PLAYER_SE1),
    [SE_EXP]                    = SONG(se_exp, MUSIC_PLAYER_SE1),
    [SE_BIKE_HOP]               = SONG(se_bike_hop, MUSIC_PLAYER_SE1),
    [SE_SWITCH]                 = SONG(se_switch, MUSIC_PLAYER_SE1),
    [SE_CLICK]                  = SONG(se_click, MUSIC_PLAYER_SE1),
    [SE_FU_ZAKU]                = SONG(se_fu_zaku, MUSIC_PLAYER_SE1),
    [SE_CONTEST_CONDITION_LOSE] = SONG(se_contest_condition_lose, MUSIC_PLAYER_SE1),
    [SE_LAVARIDGE_FALL_WARP]    = SONG(se_lavaridge_fall_warp, MUSIC_PLAYER_SE1),
    [SE_ICE_STAIRS]             = SONG(se_ice_stairs, MUSIC_PLAYER_SE1),
    [SE_ICE_BREAK]              = SONG(se_ice_break, MUSIC_PLAYER_SE1),
    [SE_ICE_CRACK]              = SONG(se_ice_crack, MUSIC_PLAYER_SE1),
    [SE_FALL]                   = SONG(se_fall, MUSIC_PLAYER_SE1),
    [SE_UNLOCK]                 = SONG(se_unlock, MUSIC_PLAYER_SE2),
    [SE_WARP_IN]                = SONG(se_warp_in, MUSIC_PLAYER_SE1),
    [SE_WARP_OUT]               = SONG(se_warp_out, MUSIC_PLAYER_SE1),
    [SE_REPEL]                  = SONG(se_repel, MUSIC_PLAYER_SE1),
    [SE_ROTATING_GATE]          = SONG(se_rotating_gate, MUSIC_PLAYER_SE1),
    [SE_TRUCK_MOVE]             = SONG(se_truck_move, MUSIC_PLAYER_SE1),
    [SE_TRUCK_STOP]             = SONG(se_truck_stop, MUSIC_PLAYER_SE1),
    [SE_TRUCK_UNLOAD]           = SONG(se_truck_unload, MUSIC_PLAYER_SE2),
    [SE_TRUCK_DOOR]             = SONG(se_truck_door, MUSIC_PLAYER_SE1),
    [SE_BERRY_BLENDER]          = SONG(se_berry_blender, MUSIC_PLAYER_SE2),
    [SE_SAVE]                   = SONG(se_save, MUSIC_PLAYER_SE1),
    [SE_BALL_BOUNCE_1]          = SONG(se_ball_bounce_1, MUSIC_PLAYER_SE1),
    [SE_BALL_BOUNCE_2]          = SONG(se_ball_bounce_2, MUSIC_PLAYER_SE1),
    [SE_BALL_BOUNCE_3]          = SONG(se_ball_bounce_3, MUSIC_PLAYER_SE1),
    [SE_BALL_BOUNCE_4]          = SONG(se_ball_bounce_4, MUSIC_PLAYER_SE1),
    [SE_BALL_TRADE]             = SONG(se_ball_trade, MUSIC_PLAYER_SE2),
    [SE_BALL_THROW]             = SONG(se_ball_throw, MUSIC_PLAYER_SE1),
    [SE_NOTE_C]                 = SONG(se_note_c, MUSIC_PLAYER_SE2),
    [SE_NOTE_D]                 = SONG(se_note_d, MUSIC_PLAYER_SE2),
    [SE_NOTE_E]                 = SONG(se_note_e, MUSIC_PLAYER_SE2),
    [SE_NOTE_F]                 = SONG(se_note_f, MUSIC_PLAYER_SE2),
    [SE_NOTE_G]                 = SONG(se_note_g, MUSIC_PLAYER_SE2),
    [SE_NOTE_A]                 = SONG(se_note_a, MUSIC_PLAYER_SE2),
    [SE_NOTE_B]                 = SONG(se_note_b, MUSIC_PLAYER_SE2),
    [SE_NOTE_C_HIGH]            = SONG(se_note_c_high, MUSIC_PLAYER_SE2),
    [SE_PUDDLE]                 = SONG(se_puddle, MUSIC_PLAYER_SE2),
    [SE_BRIDGE_WALK]            = SONG(se_bridge_walk, MUSIC_PLAYER_SE2),
    [SE_ITEMFINDER]             = SONG(se_itemfinder, MUSIC_PLAYER_SE1),
    [SE_DING_DONG]              = SONG(se_ding_dong, MUSIC_PLAYER_SE1),
    [SE_BALLOON_RED]            = SONG(se_balloon_red, MUSIC_PLAYER_SE2),
    [SE_BALLOON_BLUE]           = SONG(se_balloon_blue, MUSIC_PLAYER_SE2),
    [SE_BALLOON_YELLOW]         = SONG(se_balloon_yellow, MUSIC_PLAYER_SE2),
    [SE_BREAKABLE_DOOR]         = SONG(se_breakable_door, MUSIC_PLAYER_SE2),
    [SE_MUD_BALL]               = SONG(se_mud_ball, MUSIC_PLAYER_SE2),
    [SE_FIELD_POISON]           = SONG(se_field_poison, MUSIC_PLAYER_SE1),
    [SE_ESCALATOR]              = SONG(se_escalator, MUSIC_PLAYER_SE1),
    [SE_THUNDERSTORM]           = SONG(se_thunderstorm, MUSIC_PLAYER_SE3),
    [SE_THUNDERSTORM_STOP]      = SONG(se_thunderstorm_stop, MUSIC_PLAYER_SE3),
    [SE_DOWNPOUR]               = SONG(se_downpour, MUSIC_PLAYER_SE3),
    [SE_DOWNPOUR_STOP]          = SONG(se_downpour_stop, MUSIC_PLAYER_SE3),
    [SE_RAIN]                   = SONG(se_rain, MUSIC_PLAYER_SE3),
    [SE_RAIN_STOP]              = SONG(se_rain_stop, MUSIC_PLAYER_SE3),
    [SE_THUNDER]                = SONG(se_thunder, MUSIC_PLAYER_SE1),
    [SE_THUNDER2]               = SONG(se_thunder2, MUSIC_PLAYER_SE1),
    [SE_ELEVATOR]               = SONG(se_elevator, MUSIC_PLAYER_SE1),
    [SE_LOW_HEALTH]             = SONG(se_low_health, MUSIC_PLAYER_SE3),
    [SE_EXP_MAX]                = SONG(se_exp_max, MUSIC_PLAYER_SE1),
    [SE_ROULETTE_BALL]          = SONG(se_roulette_ball, MUSIC_PLAYER_SE2),
    [SE_ROULETTE_BALL2]         = SONG(se_roulette_ball2, MUSIC_PLAYER_SE2),
    [SE_TAILLOW_WING_FLAP]      = SONG(se_taillow_wing_flap, MUSIC_PLAYER_SE1),
    [SE_RS_SHOP]                = SONG(se_rs_shop, MUSIC_PLAYER_SE1),
    [SE_CONTEST_HEART]          = SONG(se_contest_heart, MUSIC_PLAYER_SE1),
    [SE_CONTEST_CURTAIN_RISE]   = SONG(se_contest_curtain_rise, MUSIC_PLAYER_SE1),
    [SE_CONTEST_CURTAIN_FALL]   = SONG(se_contest_curtain_fall, MUSIC_PLAYER_SE1),
    [SE_CONTEST_ICON_CHANGE]    = SONG(se_contest_icon_change, MUSIC_PLAYER_SE1),
    [SE_CONTEST_ICON_CLEAR]     = SONG(se_contest_icon_clear, MUSIC_PLAYER_SE1),
    [SE_CONTEST_MONS_TURN]      = SONG(se_contest_mons_turn, MUSIC_PLAYER_SE1),
    [SE_SHINY]                  = SONG(se_shiny, MUSIC_PLAYER_SE1),
    [SE_INTRO_BLAST]            = SONG(se_intro_blast, MUSIC_PLAYER_SE1),
    [SE_MUGSHOT]                = SONG(se_mugshot, MUSIC_PLAYER_SE1),
    [SE_APPLAUSE]               = SONG(se_applause, MUSIC_PLAYER_SE1),
    [SE_VEND]                   = SONG(se_vend, MUSIC_PLAYER_SE1),
    [SE_ORB]                    = SONG(se_orb, MUSIC_PLAYER_SE1),
    [SE_DEX_SCROLL]             = SONG(se_dex_scroll, MUSIC_PLAYER_SE1),
    [SE_DEX_PAGE]               = SONG(se_dex_page, MUSIC_PLAYER_SE1),
    [SE_POKENAV_ON]             = SONG(se_pokenav_on, MUSIC_PLAYER_SE1),
    [SE_POKENAV_OFF]            = SONG(se_pokenav_off, MUSIC_PLAYER_SE1),
    [SE_DEX_SEARCH]             = SONG(se_dex_search, MUSIC_PLAYER_SE1),
    [SE_EGG_HATCH]              = SONG(se_egg_hatch, MUSIC_PLAYER_SE1),
    [SE_BALL_TRAY_ENTER]        = SONG(se_ball_tray_enter, MUSIC_PLAYER_SE1),
    [SE_BALL_TRAY_BALL]         = SONG(se_ball_tray_ball, MUSIC_PLAYER_SE1),
    [SE_BALL_TRAY_EXIT]         = SONG(se_ball_tray_exit, MUSIC_PLAYER_SE2),
    [SE_GLASS_FLUTE]            = SONG(se_glass_flute, MUSIC_PLAYER_SE1),
    [SE_M_THUNDERBOLT]          = SONG(se_m_thunderbolt, MUSIC_PLAYER_SE2),
    [SE_M_THUNDERBOLT2]         = SONG(se_m_thunderbolt2, MUSIC_PLAYER_SE1),
    [SE_M_HARDEN]               = SONG(se_m_harden, MUSIC_PLAYER_SE1),
    [SE_M_NIGHTMARE]            = SONG(se_m_nightmare, MUSIC_PLAYER_SE1),
    [SE_M_VITAL_THROW]          = SONG(se_m_vital_throw, MUSIC_PLAYER_SE1),
    [SE_M_VITAL_THROW2]         = SONG(se_m_vital_throw2, MUSIC_PLAYER_SE1),
    [SE_M_BUBBLE]               = SONG(se_m_bubble, MUSIC_PLAYER_SE1),
    [SE_M_BUBBLE2]              = SONG(se_m_bubble2, MUSIC_PLAYER_SE1),
    [SE_M_BUBBLE3]              = SONG(se_m_bubble3, MUSIC_PLAYER_SE1),
    [SE_M_RAIN_DANCE]           = SONG(se_m_rain_dance, MUSIC_PLAYER_SE1),
    [SE_M_CUT]                  = SONG(se_m_cut, MUSIC_PLAYER_SE1),
    [SE_M_STRING_SHOT]          = SONG(se_m_string_shot, MUSIC_PLAYER_SE1),
    [SE_M_STRING_SHOT2]         = SONG(se_m_string_shot2, MUSIC_PLAYER_SE1),
    [SE_M_ROCK_THROW]           = SONG(se_m_rock_throw, MUSIC_PLAYER_SE1),
    [SE_M_GUST]                 = SONG(se_m_gust, MUSIC_PLAYER_SE2),
    [SE_M_GUST2]                = SONG(se_m_gust2, MUSIC_PLAYER_SE2),
    [SE_M_DOUBLE_SLAP]          = SONG(se_m_double_slap, MUSIC_PLAYER_SE1),
    [SE_M_DOUBLE_TEAM]          = SONG(se_m_double_team, MUSIC_PLAYER_SE1),
    [SE_M_RAZOR_WIND]           = SONG(se_m_razor_wind, MUSIC_PLAYER_SE1),
    [SE_M_ICY_WIND]             = SONG(se_m_icy_wind, MUSIC_PLAYER_SE1),
    [SE_M_THUNDER_WAVE]         = SONG(se_m_thunder_wave, MUSIC_PLAYER_SE1),
    [SE_M_COMET_PUNCH]          = SONG(se_m_comet_punch, MUSIC_PLAYER_SE1),
    [SE_M_MEGA_KICK]            = SONG(se_m_mega_kick, MUSIC_PLAYER_SE1),
    [SE_M_MEGA_KICK2]           = SONG(se_m_mega_kick2, MUSIC_PLAYER_SE1),
    [SE_M_CRABHAMMER]           = SONG(se_m_crabhammer, MUSIC_PLAYER_SE1),
    [SE_M_JUMP_KICK]            = SONG(se_m_jump_kick, MUSIC_PLAYER_SE1),
    [SE_M_FLAME_WHEEL]          = SONG(se_m_flame_wheel, MUSIC_PLAYER_SE1),
    [SE_M_FLAME_WHEEL2]         = SONG(se_m_flame_wheel2, MUSIC_PLAYER_SE1),
    [SE_M_FLAMETHROWER]         = SONG(se_m_flamethrower, MUSIC_PLAYER_SE1),
    [SE_M_FIRE_PUNCH]           = SONG(se_m_fire_punch, MUSIC_PLAYER_SE1),
    [SE_M_TOXIC]                = SONG(se_m_toxic, MUSIC_PLAYER_SE1),
    [SE_M_SACRED_FIRE]          = SONG(se_m_sacred_fire, MUSIC_PLAYER_SE1),
    [SE_M_SACRED_FIRE2]         = SONG(se_m_sacred_fire2, MUSIC_PLAYER_SE2),
    [SE_M_EMBER]                = SONG(se_m_ember, MUSIC_PLAYER_SE1),
    [SE_M_TAKE_DOWN]            = SONG(se_m_take_down, MUSIC_PLAYER_SE2),
    [SE_M_BLIZZARD]             = SONG(se_m_blizzard, MUSIC_PLAYER_SE1),
    [SE_M_BLIZZARD2]            = SONG(se_m_blizzard2, MUSIC_PLAYER_SE1),
    [SE_M_SCRATCH]              = SONG(se_m_scratch, MUSIC_PLAYER_SE1),
    [SE_M_VICEGRIP]             = SONG(se_m_vicegrip, MUSIC_PLAYER_SE1),
    [SE_M_WING_ATTACK]          = SONG(se_m_wing_attack, MUSIC_PLAYER_SE1),
    [SE_M_FLY]                  = SONG(se_m_fly, MUSIC_PLAYER_SE1),
    [SE_M_SAND_ATTACK]          = SONG(se_m_sand_attack, MUSIC_PLAYER_SE1),
    [SE_M_RAZOR_WIND2]          = SONG(se_m_razor_wind2, MUSIC_PLAYER_SE1),
    [SE_M_BITE]                 = SONG(se_m_bite, MUSIC_PLAYER_SE1),
    [SE_M_HEADBUTT]             = SONG(se_m_headbutt, MUSIC_PLAYER_SE1),
    [SE_M_SURF]                 = SONG(se_m_surf, MUSIC_PLAYER_SE1),
    [SE_M_HYDRO_PUMP]           = SONG(se_m_hydro_pump, MUSIC_PLAYER_SE1),
    [SE_M_WHIRLPOOL]            = SONG(se_m_whirlpool, MUSIC_PLAYER_SE1),
    [SE_M_HORN_ATTACK]          = SONG(se_m_horn_attack, MUSIC_PLAYER_SE1),
    [SE_M_TAIL_WHIP]            = SONG(se_m_tail_whip, MUSIC_PLAYER_SE2),
    [SE_M_MIST]                 = SONG(se_m_mist, MUSIC_PLAYER_SE1),
    [SE_M_POISON_POWDER]        = SONG(se_m_poison_powder, MUSIC_PLAYER_SE1),
    [SE_M_BIND]                 = SONG(se_m_bind, MUSIC_PLAYER_SE2),
    [SE_M_DRAGON_RAGE]          = SONG(se_m_dragon_rage, MUSIC_PLAYER_SE1),
    [SE_M_SING]                 = SONG(se_m_sing, MUSIC_PLAYER_SE1),
    [SE_M_PERISH_SONG]          = SONG(se_m_perish_song, MUSIC_PLAYER_SE1),
    [SE_M_PAY_DAY]              = SONG(se_m_pay_day, MUSIC_PLAYER_SE1),
    [SE_M_DIG]                  = SONG(se_m_dig, MUSIC_PLAYER_SE1),
    [SE_M_DIZZY_PUNCH]          = SONG(se_m_dizzy_punch, MUSIC_PLAYER_SE1),
    [SE_M_SELF_DESTRUCT]        = SONG(se_m_self_destruct, MUSIC_PLAYER_SE1),
    [SE_M_EXPLOSION]            = SONG(se_m_explosion, MUSIC_PLAYER_SE1),
    [SE_M_ABSORB_2]             = SONG(se_m_absorb_2, MUSIC_PLAYER_SE1),
    [SE_M_ABSORB]               = SONG(se_m_absorb, MUSIC_PLAYER_SE1),
    [SE_M_SCREECH]              = SONG(se_m_screech, MUSIC_PLAYER_SE1),
    [SE_M_BUBBLE_BEAM]          = SONG(se_m_bubble_beam, MUSIC_PLAYER_SE1),
    [SE_M_BUBBLE_BEAM2]         = SONG(se_m_bubble_beam2, MUSIC_PLAYER_SE1),
    [SE_M_SUPERSONIC]           = SONG(se_m_supersonic, MUSIC_PLAYER_SE1),
    [SE_M_BELLY_DRUM]           = SONG(se_m_belly_drum, MUSIC_PLAYER_SE1),
    [SE_M_METRONOME]            = SONG(se_m_metronome, MUSIC_PLAYER_SE1),
    [SE_M_BONEMERANG]           = SONG(se_m_bonemerang, MUSIC_PLAYER_SE1),
    [SE_M_LICK]                 = SONG(se_m_lick, MUSIC_PLAYER_SE1),
    [SE_M_PSYBEAM]              = SONG(se_m_psybeam, MUSIC_PLAYER_SE1),
    [SE_M_FAINT_ATTACK]         = SONG(se_m_faint_attack, MUSIC_PLAYER_SE1),
    [SE_M_SWORDS_DANCE]         = SONG(se_m_swords_dance, MUSIC_PLAYER_SE1),
    [SE_M_LEER]                 = SONG(se_m_leer, MUSIC_PLAYER_SE1),
    [SE_M_SWAGGER]              = SONG(se_m_swagger, MUSIC_PLAYER_SE1),
    [SE_M_SWAGGER2]             = SONG(se_m_swagger2, MUSIC_PLAYER_SE1),
    [SE_M_HEAL_BELL]            = SONG(se_m_heal_bell, MUSIC_PLAYER_SE1),
    [SE_M_CONFUSE_RAY]          = SONG(se_m_confuse_ray, MUSIC_PLAYER_SE1),
    [SE_M_SNORE]                = SONG(se_m_snore, MUSIC_PLAYER_SE1),
    [SE_M_BRICK_BREAK]          = SONG(se_m_brick_break, MUSIC_PLAYER_SE1),
    [SE_M_GIGA_DRAIN]           = SONG(se_m_giga_drain, MUSIC_PLAYER_SE1),
    [SE_M_PSYBEAM2]             = SONG(se_m_psybeam2, MUSIC_PLAYER_SE1),
    [SE_M_SOLAR_BEAM]           = SONG(se_m_solar_beam, MUSIC_PLAYER_SE2),
    [SE_M_PETAL_DANCE]          = SONG(se_m_petal_dance, MUSIC_PLAYER_SE1),
    [SE_M_TELEPORT]             = SONG(se_m_teleport, MUSIC_PLAYER_SE1),
    [SE_M_MINIMIZE]             = SONG(se_m_minimize, MUSIC_PLAYER_SE1),
    [SE_M_SKETCH]               = SONG(se_m_sketch, MUSIC_PLAYER_SE1),
    [SE_M_SWIFT]                = SONG(se_m_swift, MUSIC_PLAYER_SE1),
    [SE_M_REFLECT]              = SONG(se_m_reflect, MUSIC_PLAYER_SE1),
    [SE_M_BARRIER]              = SONG(se_m_barrier, MUSIC_PLAYER_SE1),
    [SE_M_DETECT]               = SONG(se_m_detect, MUSIC_PLAYER_SE2),
    [SE_M_LOCK_ON]              = SONG(se_m_lock_on, MUSIC_PLAYER_SE1),
    [SE_M_MOONLIGHT]            = SONG(se_m_moonlight, MUSIC_PLAYER_SE1),
    [SE_M_CHARM]                = SONG(se_m_charm, MUSIC_PLAYER_SE1),
    [SE_M_CHARGE]               = SONG(se_m_charge, MUSIC_PLAYER_SE1),
    [SE_M_STRENGTH]             = SONG(se_m_strength, MUSIC_PLAYER_SE1),
    [SE_M_HYPER_BEAM]           = SONG(se_m_hyper_beam, MUSIC_PLAYER_SE1),
    [SE_M_WATERFALL]            = SONG(se_m_waterfall, MUSIC_PLAYER_SE1),
    [SE_M_REVERSAL]             = SONG(se_m_reversal, MUSIC_PLAYER_SE1),
    [SE_M_ACID_ARMOR]           = SONG(se_m_acid_armor, MUSIC_PLAYER_SE1),
    [SE_M_SANDSTORM]            = SONG(se_m_sandstorm, MUSIC_PLAYER_SE1),
    [SE_M_TRI_ATTACK]           = SONG(se_m_tri_attack, MUSIC_PLAYER_SE1),
    [SE_M_TRI_ATTACK2]          = SONG(se_m_tri_attack2, MUSIC_PLAYER_SE1),
    [SE_M_ENCORE]               = SONG(se_m_encore, MUSIC_PLAYER_SE1),
    [SE_M_ENCORE2]              = SONG(se_m_encore2, MUSIC_PLAYER_SE2),
    [SE_M_BATON_PASS]           = SONG(se_m_baton_pass, MUSIC_PLAYER_SE1),
    [SE_M_MILK_DRINK]           = SONG(se_m_milk_drink, MUSIC_PLAYER_SE1),
    [SE_M_ATTRACT]              = SONG(se_m_attract, MUSIC_PLAYER_SE1),
    [SE_M_ATTRACT2]             = SONG(se_m_attract2, MUSIC_PLAYER_SE1),
    [SE_M_MORNING_SUN]          = SONG(se_m_morning_sun, MUSIC_PLAYER_SE1),
    [SE_M_FLATTER]              = SONG(se_m_flatter, MUSIC_PLAYER_SE1),
    [SE_M_SAND_TOMB]            = SONG(se_m_sand_tomb, MUSIC_PLAYER_SE1),
    [SE_M_GRASSWHISTLE]         = SONG(se_m_grasswhistle, MUSIC_PLAYER_SE1),
    [SE_M_SPIT_UP]              = SONG(se_m_spit_up, MUSIC_PLAYER_SE1),
    [SE_M_DIVE]                 = SONG(se_m_dive, MUSIC_PLAYER_SE1),
    [SE_M_EARTHQUAKE]           = SONG(se_m_earthquake, MUSIC_PLAYER_SE2),
    [SE_M_TWISTER]              = SONG(se_m_twister, MUSIC_PLAYER_SE2),
    [SE_M_SWEET_SCENT]          = SONG(se_m_sweet_scent, MUSIC_PLAYER_SE1),
    [SE_M_YAWN]                 = SONG(se_m_yawn, MUSIC_PLAYER_SE1),
    [SE_M_SKY_UPPERCUT]         = SONG(se_m_sky_uppercut, MUSIC_PLAYER_SE2),
    [SE_M_STAT_INCREASE]        = SONG(se_m_stat_increase, MUSIC_PLAYER_SE1),
    [SE_M_HEAT_WAVE]            = SONG(se_m_heat_wave, MUSIC_PLAYER_SE1),
    [SE_M_UPROAR]               = SONG(se_m_uproar, MUSIC_PLAYER_SE1),
    [SE_M_HAIL]                 = SONG(se_m_hail, MUSIC_PLAYER_SE1),
    [SE_M_COSMIC_POWER]         = SONG(se_m_cosmic_power, MUSIC_PLAYER_SE2),
    [SE_M_TEETER_DANCE]         = SONG(se_m_teeter_dance, MUSIC_PLAYER_SE1),
    [SE_M_STAT_DECREASE]        = SONG(se_m_stat_decrease, MUSIC_PLAYER_SE1),
    [SE_M_HAZE]                 = SONG(se_m_haze, MUSIC_PLAYER_SE1),
    [SE_M_HYPER_BEAM2]          = SONG(se_m_hyper_beam2, MUSIC_PLAYER_SE1),
    [SE_DOOR]                   = SONG(se_door, MUSIC_PLAYER_SE1),
    [SE_CARD_FLIP]              = SONG(se_card_flip, MUSIC_PLAYER_SE1),
    [SE_CARD_FLIPPING]          = SONG(se_card_flipping, MUSIC_PLAYER_SE1),
    [SE_CARD_OPEN]              = SONG(se_card_open, MUSIC_PLAYER_SE1),
    [SE_BAG_CURSOR]             = SONG(se_bag_cursor, MUSIC_PLAYER_SE1),
    [SE_BAG_POCKET]             = SONG(se_bag_pocket, MUSIC_PLAYER_SE1),
    [SE_BALL_CLICK]             = SONG(se_ball_click, MUSIC_PLAYER_SE1),
    [SE_SHOP]                   = SONG(se_shop, MUSIC_PLAYER_SE1),
    [SE_SS_ANNE_HORN]           = SONG(se_ss_anne_horn, MUSIC_PLAYER_SE1),
    [SE_HELP_OPEN]              = SONG(se_help_open, MUSIC_PLAYER_SE1),
    [SE_HELP_CLOSE]             = SONG(se_help_close, MUSIC_PLAYER_SE1),
    [SE_HELP_ERROR]             = SONG(se_help_error, MUSIC_PLAYER_SE1),
    [SE_DEOXYS_MOVE]            = SONG(se_deoxys_move, MUSIC_PLAYER_SE1),
    [SE_POKE_JUMP_SUCCESS]      = SONG(se_poke_jump_success, MUSIC_PLAYER_SE1),
    [SE_POKE_JUMP_FAILURE]      = SONG(se_poke_jump_failure, MUSIC_PLAYER_SE1),
    [MUS_HEAL]                  = SONG(mus_heal, MUSIC_PLAYER_SE2),
    [MUS_LEVEL_UP]              = SONG(mus_level_up, MUSIC_PLAYER_SE2),
    [MUS_OBTAIN_ITEM]           = SONG(mus_obtain_item, MUSIC_PLAYER_SE2),
    [MUS_EVOLVED]               = SONG(mus_evolved, MUSIC_PLAYER_SE2),
    [MUS_OBTAIN_BADGE]          = SONG(mus_obtain_badge, MUSIC_PLAYER_SE2),
    [MUS_OBTAIN_TMHM]           = SONG(mus_obtain_tmhm, MUSIC_PLAYER_SE2),
    [MUS_OBTAIN_BERRY]          = SONG(mus_obtain_berry, MUSIC_PLAYER_SE2),
    [MUS_EVOLUTION_INTRO]       = SONG(mus_evolution_intro, MUSIC_PLAYER_SE2),
    [MUS_EVOLUTION]             = SONG(mus_evolution, MUSIC_PLAYER_BGM),
    [MUS_RS_VS_GYM_LEADER]      = SONG(mus_rs_vs_gym_leader, MUSIC_PLAYER_BGM),
    [MUS_RS_VS_TRAINER]         = SONG(mus_rs_vs_trainer, MUSIC_PLAYER_BGM),
    [MUS_SCHOOL]                = SONG(mus_school, MUSIC_PLAYER_BGM),
    [MUS_SLOTS_JACKPOT]         = SONG(mus_slots_jackpot, MUSIC_PLAYER_SE2),
    [MUS_SLOTS_WIN]             = SONG(mus_slots_win, MUSIC_PLAYER_SE2),
    [MUS_MOVE_DELETED]          = SONG(mus_move_deleted, MUSIC_PLAYER_SE2),
    [MUS_TOO_BAD]               = SONG(mus_too_bad, MUSIC_PLAYER_SE2),
    [MUS_FOLLOW_ME]             = SONG(mus_follow_me, MUSIC_PLAYER_BGM),
    [MUS_GAME_CORNER]           = SONG(mus_game_corner, MUSIC_PLAYER_BGM),
    [MUS_ROCKET_HIDEOUT]        = SONG(mus_rocket_hideout, MUSIC_PLAYER_BGM),
    [MUS_GYM]                   = SONG(mus_gym, MUSIC_PLAYER_BGM),
    [MUS_JIGGLYPUFF]            = SONG(mus_jigglypuff, MUSIC_PLAYER_SE2),
    [MUS_INTRO_FIGHT]           = SONG(mus_intro_fight, MUSIC_PLAYER_BGM),
    [MUS_TITLE]                 = SONG(mus_title, MUSIC_PLAYER_BGM),
    [MUS_CINNABAR]              = SONG(mus_cinnabar, MUSIC_PLAYER_BGM),
    [MUS_LAVENDER]              = SONG(mus_lavender, MUSIC_PLAYER_BGM),
    [MUS_HEAL_UNUSED]           = SONG(mus_heal_unused, MUSIC_PLAYER_BGM),
    [MUS_CYCLING]               = SONG(mus_cycling, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_ROCKET]      = SONG(mus_encounter_rocket, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_GIRL]        = SONG(mus_encounter_girl, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_BOY]         = SONG(mus_encounter_boy, MUSIC_PLAYER_BGM),
    [MUS_HALL_OF_FAME]          = SONG(mus_hall_of_fame, MUSIC_PLAYER_BGM),
    [MUS_VIRIDIAN_FOREST]       = SONG(mus_viridian_forest, MUSIC_PLAYER_BGM),
    [MUS_MT_MOON]               = SONG(mus_mt_moon, MUSIC_PLAYER_BGM),
    [MUS_POKE_MANSION]          = SONG(mus_poke_mansion, MUSIC_PLAYER_BGM),
    [MUS_CREDITS]               = SONG(mus_credits, MUSIC_PLAYER_BGM),
    [MUS_ROUTE1]                = SONG(mus_route1, MUSIC_PLAYER_BGM),
    [MUS_ROUTE24]               = SONG(mus_route24, MUSIC_PLAYER_BGM),
    [MUS_ROUTE3]                = SONG(mus_route3, MUSIC_PLAYER_BGM),
    [MUS_ROUTE11]               = SONG(mus_route11, MUSIC_PLAYER_BGM),
    [MUS_VICTORY_ROAD]          = SONG(mus_victory_road, MUSIC_PLAYER_BGM),
    [MUS_VS_GYM_LEADER]         = SONG(mus_vs_gym_leader, MUSIC_PLAYER_BGM),
    [MUS_VS_TRAINER]            = SONG(mus_vs_trainer, MUSIC_PLAYER_BGM),
    [MUS_VS_WILD]               = SONG(mus_vs_wild, MUSIC_PLAYER_BGM),
    [MUS_VS_CHAMPION]           = SONG(mus_vs_champion, MUSIC_PLAYER_BGM),
    [MUS_PALLET]                = SONG(mus_pallet, MUSIC_PLAYER_BGM),
    [MUS_OAK_LAB]               = SONG(mus_oak_lab, MUSIC_PLAYER_BGM),
    [MUS_OAK]                   = SONG(mus_oak, MUSIC_PLAYER_BGM),
    [MUS_POKE_CENTER]           = SONG(mus_poke_center, MUSIC_PLAYER_BGM),
    [MUS_SS_ANNE]               = SONG(mus_ss_anne, MUSIC_PLAYER_BGM),
    [MUS_SURF]                  = SONG(mus_surf, MUSIC_PLAYER_BGM),
    [MUS_POKE_TOWER]            = SONG(mus_poke_tower, MUSIC_PLAYER_BGM),
    [MUS_SILPH]                 = SONG(mus_silph, MUSIC_PLAYER_BGM),
    [MUS_FUCHSIA]               = SONG(mus_fuchsia, MUSIC_PLAYER_BGM),
    [MUS_CELADON]               = SONG(mus_celadon, MUSIC_PLAYER_BGM),
    [MUS_VICTORY_TRAINER]       = SONG(mus_victory_trainer, MUSIC_PLAYER_BGM),
    [MUS_VICTORY_WILD]          = SONG(mus_victory_wild, MUSIC_PLAYER_BGM),
    [MUS_VICTORY_GYM_LEADER]    = SONG(mus_victory_gym_leader, MUSIC_PLAYER_BGM),
    [MUS_VERMILLION]            = SONG(mus_vermillion, MUSIC_PLAYER_BGM),
    [MUS_PEWTER]                = SONG(mus_pewter, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_RIVAL]       = SONG(mus_encounter_rival, MUSIC_PLAYER_BGM),
    [MUS_RIVAL_EXIT]            = SONG(mus_rival_exit, MUSIC_PLAYER_BGM),
    [MUS_DEX_RATING]            = SONG(mus_dex_rating, MUSIC_PLAYER_SE2),
    [MUS_OBTAIN_KEY_ITEM]       = SONG(mus_obtain_key_item, MUSIC_PLAYER_SE2),
    [MUS_CAUGHT_INTRO]          = SONG(mus_caught_intro, MUSIC_PLAYER_SE2),
    [MUS_PHOTO]                 = SONG(mus_photo, MUSIC_PLAYER_SE2),
    [MUS_GAME_FREAK]            = SONG(mus_game_freak, MUSIC_PLAYER_BGM),
    [MUS_CAUGHT]                = SONG(mus_caught, MUSIC_PLAYER_BGM),
    [MUS_NEW_GAME_INSTRUCT]     = SONG(mus_new_game_instruct, MUSIC_PLAYER_BGM),
    [MUS_NEW_GAME_INTRO]        = SONG(mus_new_game_intro, MUSIC_PLAYER_BGM),
    [MUS_NEW_GAME_EXIT]         = SONG(mus_new_game_exit, MUSIC_PLAYER_BGM),
    [MUS_POKE_JUMP]             = SONG(mus_poke_jump, MUSIC_PLAYER_BGM),
    [MUS_UNION_ROOM]            = SONG(mus_union_room, MUSIC_PLAYER_BGM),
    [MUS_NET_CENTER]            = SONG(mus_net_center, MUSIC_PLAYER_BGM),
    [MUS_MYSTERY_GIFT]          = SONG(mus_mystery_gift, MUSIC_PLAYER_BGM),
    [MUS_BERRY_PICK]            = SONG(mus_berry_pick, MUSIC_PLAYER_BGM),
    [MUS_SEVII_CAVE]            = SONG(mus_sevii_cave, MUSIC_PLAYER_BGM),
    [MUS_TEACHY_TV_SHOW]        = SONG(mus_teachy_tv_show, MUSIC_PLAYER_BGM),
    [MUS_SEVII_ROUTE]           = SONG(mus_sevii_route, MUSIC_PLAYER_BGM),
    [MUS_SEVII_DUNGEON]         = SONG(mus_sevii_dungeon, MUSIC_PLAYER_BGM),
    [MUS_SEVII_123]             = SONG(mus_sevii_123, MUSIC_PLAYER_BGM),
    [MUS_SEVII_45]              = SONG(mus_sevii_45, MUSIC_PLAYER_BGM),
    [MUS_SEVII_67]              = SONG(mus_sevii_67, MUSIC_PLAYER_BGM),
    [MUS_POKE_FLUTE]            = SONG(mus_poke_flute, MUSIC_PLAYER_SE2),
    [MUS_VS_DEOXYS]             = SONG(mus_vs_deoxys, MUSIC_PLAYER_BGM),
    [MUS_VS_MEWTWO]             = SONG(mus_vs_mewtwo, MUSIC_PLAYER_BGM),
    [MUS_VS_LEGEND]             = SONG(mus_vs_legend, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_GYM_LEADER]  = SONG(mus_encounter_gym_leader, MUSIC_PLAYER_BGM),
    [MUS_ENCOUNTER_DEOXYS]      = SONG(mus_encounter_deoxys, MUSIC_PLAYER_BGM),
    [MUS_TRAINER_TOWER]         = SONG(mus_trainer_tower, MUSIC_PLAYER_BGM),
    [MUS_SLOW_PALLET]           = SONG(mus_slow_pallet, MUSIC_PLAYER_BGM),
    [MUS_TEACHY_TV_MENU]        = SONG(mus_teachy_tv_menu, MUSIC_PLAYER_BGM),
    [MUS_BW_TITLE]              = SONG(mus_bw_title_0005, MUSIC_PLAYER_BGM),
    [MUS_BW_NUVEMA_TOWN]        = SONG(mus_bw_nuvema_town, MUSIC_PLAYER_BGM),
    [MUS_BW_ACUMULA_TOWN]       = SONG(mus_bw_accumula_town, MUSIC_PLAYER_BGM),
    [MUS_BW_ROUTE_2]            = SONG(mus_bw_route_2, MUSIC_PLAYER_BGM),
    [MUS_BW_GYM]                = SONG(mus_bw_gym_003C, MUSIC_PLAYER_BGM),
    [MUS_BW_THE_DREAMYARD]      = SONG(mus_bw_the_dreamyard, MUSIC_PLAYER_BGM),
    [MUS_BW_FOLLOW_ME]          = SONG(mus_bw_follow_me_0053, MUSIC_PLAYER_BGM),
    [MUS_BW_WILD_BATTLE]        = SONG(mus_bw_wild_battle, MUSIC_PLAYER_BGM),
    [MUS_BW_VS_TRAINER_007F]    = SONG(mus_bw_vs_trainer_007F, MUSIC_PLAYER_BGM),
    [MUS_BW_VS_TRAINER_0080]    = SONG(mus_bw_vs_trainer_0080, MUSIC_PLAYER_BGM),
    [MUS_BW_VS_GYM_LEADER]      = SONG(mus_bw_vs_gym_leader, MUSIC_PLAYER_BGM),
    [MUS_BW_VS_RIVAL]           = SONG(mus_bw_vs_rival, MUSIC_PLAYER_BGM),
    [MUS_BW_VICTORY_TRAINER]    = SONG(mus_bw_victory_trainer_0092, MUSIC_PLAYER_BGM),
    [MUS_BW_VICTORY_WILD]       = SONG(mus_bw_victory_wild_0091, MUSIC_PLAYER_BGM),
    [MUS_HGSS_POKEMON_CENTER]   = SONG(mus_hgss_pokemon_center, MUSIC_PLAYER_BGM),
    [MUS_HGSS_VS_KANTO_TRAINER] = SONG(mus_hgss_kanto_trainer_battle, MUSIC_PLAYER_BGM),
    [MUS_HGSS_VS_WILD_KANTO]    = SONG(mus_hgss_wild_battle_kanto, MUSIC_PLAYER_BGM),
    [MUS_POKE_MART]             = SONG(mus_poke_mart, MUSIC_PLAYER_BGM),
    [MUS_TH_CORPSE_VOYAGE]      = SONG(mus_th11_11_corpse_voyage, MUSIC_PLAYER_BGM),
};

static const u32 dummy_song_header = 0;

