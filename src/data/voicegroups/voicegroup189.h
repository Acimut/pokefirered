
const union VoiceGroup voicegroup189[] =
{
    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_GRAND_PIANO]  = DEFAULT_VOICE,
    [HONKY_TONK_PIANO]      = DEFAULT_VOICE,
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 188, 128, 226),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 65, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 128, 204, 77, 246),
    [HARPSICHORD]           = DEFAULT_VOICE,
    [CLAVINET]              = DEFAULT_VOICE,
    [CELESTA]               = DEFAULT_VOICE,
    [GLOCKENSPIEL]          = DEFAULT_VOICE,
    [MUSIC_BOX]             = DEFAULT_VOICE,
    [VIBRAPHONE]            = DEFAULT_VOICE,
    [MARINBA]               = DEFAULT_VOICE,
    [XYLOPHONE]             = DEFAULT_VOICE,
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [DULCIMER]              = DEFAULT_VOICE,
    [DRAWBAR_ORGAN]         = DEFAULT_VOICE,
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 51, 0, 203, 127),
    [ROCK_ORGAN]            = DEFAULT_VOICE,
    [CHURCH_ORGAN]          = DEFAULT_VOICE,
    [REED_ORGAN]            = DEFAULT_VOICE,
    [ACCORDION]             = DEFAULT_VOICE,
    [HARMONICA]             = DEFAULT_VOICE,
    [TANGO_ACCORDION]       = DEFAULT_VOICE,
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 249, 25, 127),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 64, 216, 51, 224),
    [ELECTRIC_GUITAR_JAZZ]  = DEFAULT_VOICE,
    [ELECTRIC_GUITAR_CLEAN] = DEFAULT_VOICE,
    [ELECTRIC_GUITAR_MUTED] = DEFAULT_VOICE,
    [OVERDRIVEN_GUITAR]     = DEFAULT_VOICE,
    [DISTORTION_GUITAR]     = DEFAULT_VOICE,
    [GUITAR_HARMONICS]      = DEFAULT_VOICE,
    [ACOUSTIC_BASS]         = DEFAULT_VOICE,
    [ELECTRIC_BASS_FINGER]  = DEFAULT_VOICE,
    [ELECTRIC_BASS_PICK]    = DEFAULT_VOICE,
    [FRETLESS_BASS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188),
    [SLAP_BASS_1]           = DEFAULT_VOICE,
    [SLAP_BASS_2]           = DEFAULT_VOICE,
    [SYNTH_BASS_1]          = DEFAULT_VOICE,
    [SYNTH_BASS_2]          = DEFAULT_VOICE,
    [VIOLIN]                = DEFAULT_VOICE,
    [VIOLA]                 = DEFAULT_VOICE,
    [CELLO]                 = DEFAULT_VOICE,
    [CONTRABASS]            = DEFAULT_VOICE,
    [TREMOLO_STRINGS]       = DEFAULT_VOICE,
    [PIZZICATO_STRINGS]     = DEFAULT_VOICE,
    [ORCHESTRAL_HARP]       = DEFAULT_VOICE,
    [TIMPANI]               = DEFAULT_VOICE,
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [STRING_ENSEMBLE_2]     = DEFAULT_VOICE,
    [SYNTH_STRINGS_1]       = DEFAULT_VOICE,
    [SYNTH_STRINGS_2]       = DEFAULT_VOICE,
    [CHOIR_AAHS]            = DEFAULT_VOICE,
    [VOICE_OOHS]            = DEFAULT_VOICE,
    [SYNTH_VOICE]           = DEFAULT_VOICE,
    [ORCHESTRA_HIT]         = DEFAULT_VOICE,
    [TRUMPET]               = DEFAULT_VOICE,
    [TROMBONE]              = DEFAULT_VOICE,
    [TUBA]                  = DEFAULT_VOICE,
    [MUTED_TRUMPET]         = DEFAULT_VOICE,
    [FRENCH_HORN]           = DEFAULT_VOICE,
    [BRASS_SECTION]         = DEFAULT_VOICE,
    [SYNTH_BRASS_1]         = DEFAULT_VOICE,
    [SYNTH_BRASS_2]         = DEFAULT_VOICE,
    [SOPRANO_SAX]           = DEFAULT_VOICE,
    [ALTO_SAX]              = DEFAULT_VOICE,
    [TENOR_SAX]             = DEFAULT_VOICE,
    [BARITONE_SAX]          = DEFAULT_VOICE,
    [OBOE]                  = DEFAULT_VOICE,
    [ENGLISH_HORN]          = DEFAULT_VOICE,
    [BASSOON]               = DEFAULT_VOICE,
    [CLARINET]              = DEFAULT_VOICE,
    [PICCOLO]               = DEFAULT_VOICE,
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [RECORDER]              = DEFAULT_VOICE,
    [PAN_FLUTE]             = DEFAULT_VOICE,
    [BLOWN_BOTTLE]          = DEFAULT_VOICE,
    [SHAKUHACHI]            = DEFAULT_VOICE,
    [WHISTLE]               = DEFAULT_VOICE,
    [OCARINA]               = DEFAULT_VOICE,
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 6, 3),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 7, 2),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 6, 2),
    [LEAD_4_CHIFF]          = DEFAULT_VOICE,
    [LEAD_5_CHARANG]        = DEFAULT_VOICE,
    [LEAD_6_VOICE]          = DEFAULT_VOICE,
    [LEAD_7_FIFTHS]         = DEFAULT_VOICE,
    [LEAD_8_BASS_LEAD]      = DEFAULT_VOICE,
    [PAD_1_NEW_AGE]         = DEFAULT_VOICE,
    [PAD_2_WARM]            = DEFAULT_VOICE,
    [PAD_3_POLYSYNTH]       = DEFAULT_VOICE,
    [PAD_4_CHOIR]           = DEFAULT_VOICE,
};

