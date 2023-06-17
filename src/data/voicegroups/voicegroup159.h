
const union VoiceGroup voicegroup159[] =
{
    [ACOUSTIC_GRAND_PIANO]  = DEFAULT_VOICE,
    [BRIGHT_ACOUSTIC_PIANO] = DEFAULT_VOICE,
    [ELECTRIC_GRAND_PIANO]  = DEFAULT_VOICE,
    [HONKY_TONK_PIANO]      = DEFAULT_VOICE,
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 64, 249, 0, 188),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 51, 249, 0, 165),
    [HARPSICHORD]           = DEFAULT_VOICE,
    [CLAVINET]              = DEFAULT_VOICE,
    [CELESTA]               = DEFAULT_VOICE,
    [GLOCKENSPIEL]          = DEFAULT_VOICE,
    [MUSIC_BOX]             = DEFAULT_VOICE,
    [VIBRAPHONE]            = DEFAULT_VOICE,
    [MARINBA]               = DEFAULT_VOICE,
    [XYLOPHONE]             = DEFAULT_VOICE,
    [TUBULAR_BELLS]         = DEFAULT_VOICE,
    [DULCIMER]              = DEFAULT_VOICE,
    [DRAWBAR_ORGAN]         = DEFAULT_VOICE,
    [PERCUSIVE_ORGAN]       = DEFAULT_VOICE,
    [ROCK_ORGAN]            = DEFAULT_VOICE,
    [CHURCH_ORGAN]          = DEFAULT_VOICE,
    [REED_ORGAN]            = DEFAULT_VOICE,
    [ACCORDION]             = DEFAULT_VOICE,
    [HARMONICA]             = DEFAULT_VOICE,
    [TANGO_ACCORDION]       = DEFAULT_VOICE,
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 85, 249, 25, 127),
    [ACOUSTIC_GUITAR_STEEL] = DEFAULT_VOICE,
    [ELECTRIC_GUITAR_JAZZ]  = DEFAULT_VOICE,
    [ELECTRIC_GUITAR_CLEAN] = DEFAULT_VOICE,
    [ELECTRIC_GUITAR_MUTED] = DEFAULT_VOICE,
    [OVERDRIVEN_GUITAR]     = DEFAULT_VOICE,
    [DISTORTION_GUITAR]     = DEFAULT_VOICE,
    [GUITAR_HARMONICS]      = DEFAULT_VOICE,
    [ACOUSTIC_BASS]         = DEFAULT_VOICE,
    [ELECTRIC_BASS_FINGER]  = DEFAULT_VOICE,
    [ELECTRIC_BASS_PICK]    = DEFAULT_VOICE,
    [FRETLESS_BASS]         = DEFAULT_VOICE,
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
    [FLUTE]                 = DEFAULT_VOICE,
    [RECORDER]              = DEFAULT_VOICE,
    [PAN_FLUTE]             = DEFAULT_VOICE,
    [BLOWN_BOTTLE]          = DEFAULT_VOICE,
    [SHAKUHACHI]            = DEFAULT_VOICE,
    [WHISTLE]               = DEFAULT_VOICE,
    [OCARINA]               = DEFAULT_VOICE,
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 7, 0, 6),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 1, 1, 5, 1, 6),
    [LEAD_3_CALLIOPE]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_2, 1, 7, 0, 6),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 1, 4, 3, 6),
    [LEAD_5_CHARANG]        = DEFAULT_VOICE,
    [LEAD_6_VOICE]          = DEFAULT_VOICE,
    [LEAD_7_FIFTHS]         = DEFAULT_VOICE,
    [LEAD_8_BASS_LEAD]      = DEFAULT_VOICE,
    [PAD_1_NEW_AGE]         = DEFAULT_VOICE,
    [PAD_2_WARM]            = DEFAULT_VOICE,
    [PAD_3_POLYSYNTH]       = DEFAULT_VOICE,
    [PAD_4_CHOIR]           = DEFAULT_VOICE,
    [PAD_5_BOWED]           = DEFAULT_VOICE,
    [PAD_6_METALLIC]        = DEFAULT_VOICE,
    [PAD_7_HALO]            = DEFAULT_VOICE,
    [PAD_8_SWEEP]           = DEFAULT_VOICE,
    [FX_1_RAIN]             = DEFAULT_VOICE,
    [FX_2_SOUNDTRACK]       = DEFAULT_VOICE,
    [FX_3_CRYSTAL]          = DEFAULT_VOICE,
    [FX_4_ATMOSPHERE]       = DEFAULT_VOICE,
    [FX_5_BRIGHTNESS]       = DEFAULT_VOICE,
    [FX_6_GOBLINS]          = DEFAULT_VOICE,
    [FX_7_ECHOES]           = DEFAULT_VOICE,
    [FX_8_SCI_FI]           = DEFAULT_VOICE,
    [SITAR]                 = DEFAULT_VOICE,
    [BANJO]                 = DEFAULT_VOICE,
    [SHAMISEN]              = DEFAULT_VOICE,
    [KOTO]                  = DEFAULT_VOICE,
    [KALIMBA]               = DEFAULT_VOICE,
    [BAG_PIPE]              = DEFAULT_VOICE,
    [FIDDLE]                = DEFAULT_VOICE,
    [SHANAI]                = DEFAULT_VOICE,
    [TINKLE_BELL]           = DEFAULT_VOICE,
    [AGOGO]                 = DEFAULT_VOICE,
    [STEEL_DRUMS]           = DEFAULT_VOICE,
    [WOODBLOCK]             = DEFAULT_VOICE,
    [TAIKO_DRUM]            = DEFAULT_VOICE,
    [MELODIC_TOM]           = DEFAULT_VOICE,
    [SYNTH_DRUM]            = DEFAULT_VOICE,
    [REVERSE_CYMBAL]        = DEFAULT_VOICE,
    [GUITAR_FRET_NOISE]     = DEFAULT_VOICE,
    [BREATH_NOISE]          = DEFAULT_VOICE,
    [SEASHORE]              = DEFAULT_VOICE,
    [BIRD_TWEET]            = DEFAULT_VOICE,
    [TELEPHONE_RING]        = DEFAULT_VOICE,
    [HELICOPTER]            = DEFAULT_VOICE,
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0),
};

