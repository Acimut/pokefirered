
const union VoiceGroup voicegroup001[] =
{
    [NOTE_CN1]            = DEFAULT_VOICE,
    [NOTE_CSN1]           = DEFAULT_VOICE,
    [NOTE_DN1]            = DEFAULT_VOICE,
    [NOTE_DSN1]           = DEFAULT_VOICE,
    [NOTE_ESN1]           = DEFAULT_VOICE,
    [NOTE_FN1]            = DEFAULT_VOICE,
    [NOTE_FSN1]           = DEFAULT_VOICE,
    [NOTE_GN1]            = DEFAULT_VOICE,
    [NOTE_GSN1]           = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 6, 0),
    [NOTE_AN1]            = DEFAULT_VOICE,
    [NOTE_ASN1]           = DEFAULT_VOICE,
    [NOTE_BN1]            = VOICE_PROGRAMMABLE_WAVE(60, 0, ProgrammableWaveData_1, 0, 7, 15, 1),
    [NOTE_C0]             = DEFAULT_VOICE,
    [NOTE_CS0]            = DEFAULT_VOICE,
    [NOTE_D0]             = DEFAULT_VOICE,
    [NOTE_DS0]            = DEFAULT_VOICE,
    [NOTE_E0]             = DEFAULT_VOICE,
    [NOTE_F0]             = DEFAULT_VOICE,
    [NOTE_FS0]            = VOICE_SQUARE_2(60, 0, 2, 0, 1, 6, 0),
    [NOTE_G0]             = VOICE_PROGRAMMABLE_WAVE(60, 0, ProgrammableWaveData_3, 0, 7, 15, 1),
    [NOTE_GS0]            = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 6, 0),
    [NOTE_A0]             = VOICE_SQUARE_2(60, 0, 3, 0, 1, 6, 0),
    [NOTE_AS0]            = DEFAULT_VOICE,
    [NOTE_B0]             = DEFAULT_VOICE,
    [NOTE_C1]             = DEFAULT_VOICE,
    [NOTE_CS1]            = VOICE_SQUARE_1(60, 0, 0, 0, 0, 1, 6, 0),
    [NOTE_D1]             = DEFAULT_VOICE,
    [HIGH_Q_GM2]          = DEFAULT_VOICE,
    [SLAP_GM2]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0),
    [SCRATCH_PUSH_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 165, 154, 127),
    [SCRATCH_PULL_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 165, 154, 127),
    [STICKS_GM2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_guitar_separates_power_chord, 255, 165, 206, 127),
    [SQUARE_CLICK_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sc88pro_unison_slap, 255, 165, 206, 127),
    [METRONOME_CLICK_GM2] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unknown_snare, 255, 0, 255, 0),
    [METRONOME_BELL_GM2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_ohtsuzumi, 255, 0, 255, 0),
    [BASS_DRUM_2]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_hyoushigi, 255, 0, 255, 0),
    [BASS_DRUM_1]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_rnd_kick, 255, 0, 255, 242),
    [SIDE_STICK]          = DEFAULT_VOICE,
    [SNARE_DRUM_1]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_rnd_snare, 255, 0, 255, 242),
    [HAND_CLAP]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_tr909_hand_clap, 255, 255, 255, 127),
    [SNARE_DRUM_2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_orchestra_snare, 255, 0, 255, 242),
    [LOW_TOM_2]           = DEFAULT_VOICE,
    [CLOSED_HI_HAT]       = DEFAULT_VOICE,
    [LOW_TOM_1]           = DEFAULT_VOICE,
    [PEDAL_HI_HAT]        = DEFAULT_VOICE,
    [MID_TOM_2]           = DEFAULT_VOICE,
    [OPEN_HI_HAT]         = DEFAULT_VOICE,
    [MID_TOM_1]           = DEFAULT_VOICE,
    [HIGH_TOM_2]          = DEFAULT_VOICE,
    [CRASH_CYMBAL_1]      = DEFAULT_VOICE,
    [HIGH_TOM_1]          = DEFAULT_VOICE,
    [RIDE_CYMBAL_1]       = DEFAULT_VOICE,
    [CHINESE_CYMBAL]      = DEFAULT_VOICE,
    [RIDE_BELL]           = DEFAULT_VOICE,
    [TAMBOURINE]          = VOICE_DIRECTSOUND_NO_RESAMPLE(32, 34, DirectSoundWaveData_sc88pro_tambourine, 255, 127, 77, 204),
    [SPLASH_CYMBAL]       = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 14, DirectSoundWaveData_trinity_cymbal_crash, 255, 235, 0, 165),
    [COWBELL]             = DEFAULT_VOICE,
    [CRASH_CYMBAL_2]      = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 246, 0, 216),
    [VIBRA_SLAP]          = DEFAULT_VOICE,
    [RIDE_CYMBAL_2]       = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 246, 0, 216),
    [HIGH_BONGO]          = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 64, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 8, 0, 255, 216),
    [LOW_BONGO]           = DEFAULT_VOICE,
    [MUTE_HIGH_CONGA]     = VOICE_DIRECTSOUND_NO_RESAMPLE(72, 104, DirectSoundWaveData_sc88pro_mute_high_conga, 255, 0, 255, 0),
    [OPEN_HIGH_CONGA]     = DEFAULT_VOICE,
    [LOW_CONGA]           = VOICE_DIRECTSOUND_NO_RESAMPLE(72, 94, DirectSoundWaveData_sc88pro_open_low_conga, 255, 0, 255, 0),
};

