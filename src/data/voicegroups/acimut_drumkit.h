//--------------------------------------------------------------
//  Universal Voicegroup - Acimut Drumkit
//--------------------------------------------------------------

const union VoiceGroup voicegroup_Acimut_Drumkit_Standard[] =
{
    [NOTE_CN1...NOTE_D1]  = DEFAULT_VOICE,
    [HIGH_Q_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_27, 255, 255, 0, 255),
    [SLAP_GM2]            = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_28, 255, 255, 0, 255),
    [SCRATCH_PUSH_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_29, 255, 255, 0, 255),
    [SCRATCH_PULL_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_30, 255, 255, 0, 255),
    [STICKS_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_31, 255, 255, 0, 255),
    [SQUARE_CLICK_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_32, 255, 255, 0, 255),
    [METRONOME_CLICK_GM2] = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_33, 255, 255, 0, 255),
    [METRONOME_BELL_GM2]  = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_34, 255, 255, 0, 255),
    [BASS_DRUM_2]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_35_standard, 255, 255, 0, 255),
    [BASS_DRUM_1]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_36, 255, 255, 0, 255),
    [SIDE_STICK]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_37, 255, 180, 175, 228),
    [SNARE_DRUM_1]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_38, 255, 0, 255, 242),
    [HAND_CLAP]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_39, 255, 255, 255, 127),
    [SNARE_DRUM_2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_40_standard, 255, 255, 0, 242),
    [LOW_TOM_2]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_41, 255, 255, 0, 226),
    [CLOSED_HI_HAT]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_42, 255, 235, 0, 231),
    [LOW_TOM_1]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_43, 255, 0, 255, 226),
    [PEDAL_HI_HAT]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_44_standard, 255, 0, 255, 242),
    [MID_TOM_2]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_45, 255, 0, 255, 226),
    [OPEN_HI_HAT]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_46_standard, 255, 235, 0, 231),
    [MID_TOM_1]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_47, 255, 0, 255, 226),
    [HIGH_TOM_2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_48, 255, 0, 255, 226),
    [CRASH_CYMBAL_1]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_49_standard, 255, 235, 0, 231),
    [HIGH_TOM_1]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_50, 255, 0, 255, 235),
    [RIDE_CYMBAL_1]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_51_standard, 255, 235, 0, 231),
    [CHINESE_CYMBAL]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_52, 255, 235, 0, 231),
    [RIDE_BELL]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_53, 255, 165, 103, 231),
    [TAMBOURINE]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_54, 255, 127, 77, 204),
    [SPLASH_CYMBAL]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_55, 255, 231, 0, 188),
    [COWBELL]             = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_56, 255, 0, 255, 242),
    [CRASH_CYMBAL_2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_57_standard, 255, 235, 0, 231),
    [VIBRA_SLAP]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_58, 255, 255, 0, 255),
    [RIDE_CYMBAL_2]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_59_standard, 255, 235, 0, 231),
    [HIGH_BONGO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_60, 255, 255, 0, 255),
    [LOW_BONGO]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_61, 255, 255, 0, 255),
    [MUTE_HIGH_CONGA]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_62, 255, 255, 0, 255),
    [OPEN_HIGH_CONGA]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_63, 255, 255, 0, 255),
    [LOW_CONGA]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_64, 255, 255, 0, 255),
    [HIGH_TIMBALE]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_65, 255, 0, 255, 226),
    [LOW_TIMBALE]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_66, 255, 0, 255, 226),
    [HIGH_AGOGO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_67, 255, 255, 0, 255),
    [LOW_AGOGO]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_68, 255, 255, 0, 255),
    [CABASA]              = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_69, 255, 255, 0, 255),
    [MARACAS]             = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_70, 255, 255, 0, 255),
    [SHORT_WHISTLE]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_71, 255, 255, 0, 255),
    [LONG_WHISTLE]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_72, 255, 255, 0, 255),
    [SHORT_GUIRO]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_73, 255, 255, 0, 255),
    [LOGN_GUIRO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_74, 255, 255, 0, 255),
    [CLAVES]              = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_75, 255, 255, 0, 255),
    [HIGH_WOOD_BLOCK]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_76, 255, 255, 0, 255),
    [LOW_WOOD_BLOCK]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_77, 255, 255, 0, 255),
    [MUTE_CUICA]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_78, 255, 255, 0, 255),
    [OPEN_CUICA]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_79, 255, 255, 0, 255),
    [MUTE_TRIANGLE]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_80, 255, 255, 0, 255),
    [OPEN_TRIANGLE]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_81, 255, 255, 0, 255),
    [SHAKER_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_82, 255, 165, 103, 188),
    [JINGLE_BELL_GM2]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_83, 255, 0, 255, 0),
    [BELLTREE_GM2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_84, 255, 0, 255, 0),
    [CASTANETS_GM2]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_85, 255, 0, 255, 0),
    [MUTE_SURDO_GM2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_86, 255, 0, 255, 0),
    [OPEN_SURDO_GM2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_87, 255, 0, 255, 0),
    [NOTE_E6]             = VOICE_DIRECTSOUND(50, 64, DirectSoundWaveData_ethnic_flavours_kotsuzumi, 255, 0, 255, 0),
    [NOTE_F6]             = VOICE_DIRECTSOUND(64, 64, DirectSoundWaveData_ethnic_flavours_kotsuzumi, 255, 0, 255, 0),
};

const union VoiceGroup voicegroup_Acimut_Drumkit_Power[] =
{
    [NOTE_CN1...NOTE_D1]  = DEFAULT_VOICE,
    [HIGH_Q_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_27, 255, 255, 0, 255),
    [SLAP_GM2]            = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_28, 255, 255, 0, 255),
    [SCRATCH_PUSH_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_29, 255, 255, 0, 255),
    [SCRATCH_PULL_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_30, 255, 255, 0, 255),
    [STICKS_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_31, 255, 255, 0, 255),
    [SQUARE_CLICK_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_32, 255, 255, 0, 255),
    [METRONOME_CLICK_GM2] = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_33, 255, 255, 0, 255),
    [METRONOME_BELL_GM2]  = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_34, 255, 255, 0, 255),
    [BASS_DRUM_2]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_35_power, 255, 255, 0, 255),
    [BASS_DRUM_1]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_36, 255, 255, 0, 255),
    [SIDE_STICK]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_37, 255, 180, 175, 228),
    [SNARE_DRUM_1]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_38, 255, 0, 255, 242),
    [HAND_CLAP]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_39, 255, 255, 255, 127),
    [SNARE_DRUM_2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_40_power, 255, 255, 0, 242),
    [LOW_TOM_2]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_41, 255, 255, 0, 226),
    [CLOSED_HI_HAT]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_42, 255, 235, 0, 231),
    [LOW_TOM_1]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_43, 255, 0, 255, 226),
    [PEDAL_HI_HAT]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_44_power, 255, 0, 255, 242),
    [MID_TOM_2]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_45, 255, 0, 255, 226),
    [OPEN_HI_HAT]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_46_power, 255, 235, 0, 231),
    [MID_TOM_1]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_47, 255, 0, 255, 226),
    [HIGH_TOM_2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_48, 255, 0, 255, 226),
    [CRASH_CYMBAL_1]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_49_power, 255, 235, 0, 231),
    [HIGH_TOM_1]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_50, 255, 0, 255, 235),
    [RIDE_CYMBAL_1]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_51_power, 255, 235, 0, 231),
    [CHINESE_CYMBAL]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_52, 255, 235, 0, 231),
    [RIDE_BELL]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_53, 255, 165, 103, 231),
    [TAMBOURINE]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_54, 255, 127, 77, 204),
    [SPLASH_CYMBAL]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_55, 255, 231, 0, 188),
    [COWBELL]             = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_56, 255, 0, 255, 242),
    [CRASH_CYMBAL_2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_57_power, 255, 235, 0, 231),
    [VIBRA_SLAP]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_58, 255, 255, 0, 255),
    [RIDE_CYMBAL_2]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_59_power, 255, 235, 0, 231),
    [HIGH_BONGO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_60, 255, 255, 0, 255),
    [LOW_BONGO]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_61, 255, 255, 0, 255),
    [MUTE_HIGH_CONGA]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_62, 255, 255, 0, 255),
    [OPEN_HIGH_CONGA]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_63, 255, 255, 0, 255),
    [LOW_CONGA]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_64, 255, 255, 0, 255),
    [HIGH_TIMBALE]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_65, 255, 0, 255, 226),
    [LOW_TIMBALE]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_66, 255, 0, 255, 226),
    [HIGH_AGOGO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_67, 255, 255, 0, 255),
    [LOW_AGOGO]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_68, 255, 255, 0, 255),
    [CABASA]              = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_69, 255, 255, 0, 255),
    [MARACAS]             = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_70, 255, 255, 0, 255),
    [SHORT_WHISTLE]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_71, 255, 255, 0, 255),
    [LONG_WHISTLE]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_72, 255, 255, 0, 255),
    [SHORT_GUIRO]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_73, 255, 255, 0, 255),
    [LOGN_GUIRO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_74, 255, 255, 0, 255),
    [CLAVES]              = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_75, 255, 255, 0, 255),
    [HIGH_WOOD_BLOCK]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_76, 255, 255, 0, 255),
    [LOW_WOOD_BLOCK]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_77, 255, 255, 0, 255),
    [MUTE_CUICA]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_78, 255, 255, 0, 255),
    [OPEN_CUICA]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_79, 255, 255, 0, 255),
    [MUTE_TRIANGLE]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_80, 255, 255, 0, 255),
    [OPEN_TRIANGLE]       = VOICE_DIRECTSOUND(NOTE_C6, 0, DirectSoundWaveData_Acimut_Drumkit_81_2, 255, 0, 255, 0),
    [SHAKER_GM2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_82, 255, 165, 103, 188),
    [JINGLE_BELL_GM2]     = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_83, 255, 0, 255, 0),
    [BELLTREE_GM2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_84, 255, 0, 255, 0),
    [CASTANETS_GM2]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_85, 255, 0, 255, 0),
    [MUTE_SURDO_GM2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_86, 255, 0, 255, 0),
    [OPEN_SURDO_GM2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_Acimut_Drumkit_87, 255, 0, 255, 0),
    [NOTE_E6]             = VOICE_DIRECTSOUND(50, 64, DirectSoundWaveData_ethnic_flavours_kotsuzumi, 255, 0, 255, 0),
    [NOTE_F6]             = VOICE_DIRECTSOUND(64, 64, DirectSoundWaveData_ethnic_flavours_kotsuzumi, 255, 0, 255, 0),
};
