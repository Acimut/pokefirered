#include "global.h"
#include "voice_groups.h"
#include "direct_sound_data.h"
#include "programmable_wave_data.h"


#include "data/voicegroups/voicegroup000.h"
#include "data/voicegroups/voicegroup001.h"
#include "data/voicegroups/voicegroup002.h"
#include "data/voicegroups/voicegroup003.h"
#include "data/voicegroups/voicegroup004.h"
#include "data/voicegroups/voicegroup005.h"
#include "data/voicegroups/voicegroup006.h"
#include "data/voicegroups/voicegroup007.h"
#include "data/voicegroups/voicegroup008.h"
#include "data/voicegroups/voicegroup009.h"
#include "data/voicegroups/voicegroup010.h"
#include "data/voicegroups/voicegroup011.h"
#include "data/voicegroups/voicegroup012.h"

#include "data/voicegroups/voicegroup127.h"
#include "data/voicegroups/voicegroup128.h"

#include "data/cry_tables.h"

#include "data/voicegroups/voicegroup129.h"
#include "data/voicegroups/voicegroup130.h"
#include "data/voicegroups/voicegroup131.h"
#include "data/voicegroups/voicegroup132.h"
#include "data/voicegroups/voicegroup133.h"
#include "data/voicegroups/voicegroup134.h"
#include "data/voicegroups/voicegroup135.h"
#include "data/voicegroups/voicegroup136.h"
#include "data/voicegroups/voicegroup137.h"
#include "data/voicegroups/voicegroup138.h"
#include "data/voicegroups/voicegroup139.h"
#include "data/voicegroups/voicegroup140.h"
#include "data/voicegroups/voicegroup141.h"
#include "data/voicegroups/voicegroup142.h"
#include "data/voicegroups/voicegroup143.h"
#include "data/voicegroups/voicegroup144.h"
#include "data/voicegroups/voicegroup145.h"
#include "data/voicegroups/voicegroup146.h"
#include "data/voicegroups/voicegroup147.h"
#include "data/voicegroups/voicegroup148.h"
#include "data/voicegroups/voicegroup149.h"
#include "data/voicegroups/voicegroup150.h"
#include "data/voicegroups/voicegroup151.h"
#include "data/voicegroups/voicegroup152.h"
#include "data/voicegroups/voicegroup153.h"
#include "data/voicegroups/voicegroup154.h"
#include "data/voicegroups/voicegroup155.h"
#include "data/voicegroups/voicegroup156.h"
#include "data/voicegroups/voicegroup157.h"
#include "data/voicegroups/voicegroup158.h"
#include "data/voicegroups/voicegroup159.h"
#include "data/voicegroups/voicegroup160.h"
#include "data/voicegroups/voicegroup161.h"
#include "data/voicegroups/voicegroup162.h"
#include "data/voicegroups/voicegroup163.h"
#include "data/voicegroups/voicegroup164.h"
#include "data/voicegroups/voicegroup165.h"
#include "data/voicegroups/voicegroup166.h"
#include "data/voicegroups/voicegroup167.h"
#include "data/voicegroups/voicegroup168.h"
#include "data/voicegroups/voicegroup169.h"
#include "data/voicegroups/voicegroup170.h"
#include "data/voicegroups/voicegroup171.h"
#include "data/voicegroups/voicegroup172.h"
#include "data/voicegroups/voicegroup173.h"
#include "data/voicegroups/voicegroup174.h"
#include "data/voicegroups/voicegroup175.h"
#include "data/voicegroups/voicegroup176.h"
#include "data/voicegroups/voicegroup177.h"
#include "data/voicegroups/voicegroup178.h"
#include "data/voicegroups/voicegroup179.h"
#include "data/voicegroups/voicegroup180.h"
#include "data/voicegroups/voicegroup181.h"
#include "data/voicegroups/voicegroup182.h"
#include "data/voicegroups/voicegroup183.h"
#include "data/voicegroups/voicegroup184.h"
#include "data/voicegroups/voicegroup185.h"
#include "data/voicegroups/voicegroup186.h"
#include "data/voicegroups/voicegroup187.h"
#include "data/voicegroups/voicegroup188.h"
#include "data/voicegroups/voicegroup189.h"
#include "data/voicegroups/voicegroup190.h"


const u8 KeySplitTable1[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_FS3, PIANO1)] = SAMPLE_VOICE_0, // C2  - F#3
    [KEYSPLIT_RANGE(NOTE_G3,  NOTE_A4,  PIANO1)] = SAMPLE_VOICE_1, // G3  - A4
    [KEYSPLIT_RANGE(NOTE_AS4, NOTE_FS6, PIANO1)] = SAMPLE_VOICE_2, // A#4 - F#6
    [KEYSPLIT_RANGE(NOTE_G6,  NOTE_B7,  PIANO1)] = SAMPLE_VOICE_3, // G6  - B7
};

const u8 KeySplitTable2[] =
{
    [KEYSPLIT_RANGE(NOTE_C2, NOTE_GS4, STRING_ENSEMBLE)] = SAMPLE_VOICE_0, // C2  - G#4
    [KEYSPLIT_RANGE(NOTE_A4, NOTE_GS5, STRING_ENSEMBLE)] = SAMPLE_VOICE_1, // A4  - G#5
    [KEYSPLIT_RANGE(NOTE_A5, NOTE_B7,  STRING_ENSEMBLE)] = SAMPLE_VOICE_2, // A5  - B7
};

const u8 KeySplitTable3[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_F4, TRUMPET)] = SAMPLE_VOICE_0, // C2  - F4
    [KEYSPLIT_RANGE(NOTE_FS4, NOTE_B5, TRUMPET)] = SAMPLE_VOICE_1, // F#4 - B5
    [KEYSPLIT_RANGE(NOTE_C6,  NOTE_B7, TRUMPET)] = SAMPLE_VOICE_2, // C6  - B7
};

const u8 KeySplitTable4[] =
{
    [KEYSPLIT_RANGE(NOTE_C1,  NOTE_F2, TUBA)] = SAMPLE_VOICE_0, // C1  - F2
    [KEYSPLIT_RANGE(NOTE_FS2, NOTE_B7, TUBA)] = SAMPLE_VOICE_1, // F#2 - B7
};

const u8 KeySplitTable5[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_F4, FRENCH_HORN)] = SAMPLE_VOICE_0, // C2  - F4
    [KEYSPLIT_RANGE(NOTE_FS4, NOTE_B7, FRENCH_HORN)] = SAMPLE_VOICE_1, // F#4 - B7
};

#include "data/voicegroups/universal_voicegroup.h"
#include "data/voicegroups/acimut_drumkit.h"
#include "data/voicegroups/adrian_rios_trumpet.h"

//--------------------------------------------------------------
//  Universal Voicegroup FE7 - default Voicegroups
//--------------------------------------------------------------

//used GUNSHOT as DRUMKIT_CM_64_32L
const union VoiceGroup voicegroup191[] =
{
    [ACOUSTIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGrandPiano, KeySplitTable6),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_FE7_BrightAcousticPiano, KeySplitTable6),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGrandPiano, KeySplitTable6),
    [HONKY_TONK_PIANO]      = VOICE_KEYSPLIT(voicegroup_FE7_HonkyTonkPiano, KeySplitTable7),
    [ELECTRIC_PIANO_1]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano1, KeySplitTable8),
    [ELECTRIC_PIANO_2]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano2, KeySplitTable9),
    [HARPSICHORD]           = VOICE_KEYSPLIT(voicegroup_FE7_Harpsichord, KeySplitTable10),
    [CLAVINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clavinet, KeySplitTable7),
    [CELESTA]               = VOICE_KEYSPLIT(voicegroup_FE7_Celesta, KeySplitTable11),
    [GLOCKENSPIEL]          = VOICE_KEYSPLIT(voicegroup_FE7_Glockenspiel, KeySplitTable12),
    [MUSIC_BOX]             = VOICE_KEYSPLIT(voicegroup_FE7_MusicBox, KeySplitTable11),
    [VIBRAPHONE]            = VOICE_KEYSPLIT(voicegroup_FE7_Vibraphone, KeySplitTable13),
    [MARINBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Marimba, KeySplitTable14),
    [XYLOPHONE]             = VOICE_KEYSPLIT(voicegroup_FE7_Xylophone, KeySplitTable15),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_014_tubular_bells, 255, 249, 0, 235),
    [DULCIMER]              = VOICE_KEYSPLIT(voicegroup_FE7_Dulcimer, KeySplitTable16),
    [DRAWBAR_ORGAN]         = VOICE_KEYSPLIT(voicegroup_FE7_DrawbarOrgan, KeySplitTable17),
    [PERCUSIVE_ORGAN]       = VOICE_KEYSPLIT(voicegroup_FE7_PercussiveOrgan, KeySplitTable17),
    [ROCK_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_RockOrgan, KeySplitTable17),
    [CHURCH_ORGAN]          = VOICE_KEYSPLIT(voicegroup_FE7_ChurchOrgan, KeySplitTable13),
    [REED_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_ReedOrgan, KeySplitTable17),
    [ACCORDION]             = VOICE_KEYSPLIT(voicegroup_FE7_Accordion, KeySplitTable18),
    [HARMONICA]             = VOICE_KEYSPLIT(voicegroup_FE7_Harmonica, KeySplitTable19),
    [TANGO_ACCORDION]       = VOICE_KEYSPLIT(voicegroup_FE7_TangoAccordion, KeySplitTable10),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarNylon, KeySplitTable9),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarSteel, KeySplitTable19),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarJazz, KeySplitTable9),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarClean, KeySplitTable19),
    [ELECTRIC_GUITAR_MUTED] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarMuted, KeySplitTable20),
    [OVERDRIVEN_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_OverdrivenGuitar, KeySplitTable21),
    [DISTORTION_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_DistortionGuitar, KeySplitTable22),
    [GUITAR_HARMONICS]      = VOICE_KEYSPLIT(voicegroup_FE7_GuitarHarmonics, KeySplitTable16),
    [ACOUSTIC_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_AcousticBass, KeySplitTable13),
    [ELECTRIC_BASS_FINGER]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassFinger, KeySplitTable10),
    [ELECTRIC_BASS_PICK]    = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassPick, KeySplitTable20),
    [FRETLESS_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_FretlessBass, KeySplitTable20),
    [SLAP_BASS_1]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass1, KeySplitTable23),
    [SLAP_BASS_2]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass2, KeySplitTable23),
    [SYNTH_BASS_1]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass1, KeySplitTable23),
    [SYNTH_BASS_2]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass2, KeySplitTable24),
    [VIOLIN]                = VOICE_KEYSPLIT(voicegroup_FE7_Violin, KeySplitTable22),
    [VIOLA]                 = VOICE_KEYSPLIT(voicegroup_FE7_Viola, KeySplitTable22),
    [CELLO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Cello, KeySplitTable25),
    [CONTRABASS]            = VOICE_KEYSPLIT(voicegroup_FE7_Contrabass, KeySplitTable25),
    [TREMOLO_STRINGS]       = VOICE_KEYSPLIT(voicegroup_FE7_TremoloStrings, KeySplitTable12),
    [PIZZICATO_STRINGS]     = VOICE_KEYSPLIT(voicegroup_FE7_PizzicatoStrings, KeySplitTable16),
    [ORCHESTRAL_HARP]       = VOICE_KEYSPLIT(voicegroup_FE7_OrchestralHarp, KeySplitTable24),
    [TIMPANI]               = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_047_timpani, 255, 0, 255, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble1, KeySplitTable12),
    [STRING_ENSEMBLE_2]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble2, KeySplitTable12),
    [SYNTH_STRINGS_1]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings1, KeySplitTable18),
    [SYNTH_STRINGS_2]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings2, KeySplitTable18),
    [CHOIR_AAHS]            = VOICE_KEYSPLIT(voicegroup_FE7_ChoirAahs, KeySplitTable16),
    [VOICE_OOHS]            = VOICE_KEYSPLIT(voicegroup_FE7_VoiceOohs, KeySplitTable24),
    [SYNTH_VOICE]           = VOICE_KEYSPLIT(voicegroup_FE7_SynthVoice, KeySplitTable11),
    [ORCHESTRA_HIT]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_055_orchestra_hit, 255, 253, 0, 235),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_FE7_Trumpet, KeySplitTable21),
    [TROMBONE]              = VOICE_KEYSPLIT(voicegroup_FE7_Trombone, KeySplitTable21),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_FE7_Tuba, KeySplitTable26),
    [MUTED_TRUMPET]         = VOICE_KEYSPLIT(voicegroup_FE7_MutedTrumpet, KeySplitTable27),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_FE7_FrenchHorn, KeySplitTable28),
    [BRASS_SECTION]         = VOICE_KEYSPLIT(voicegroup_FE7_BrassSection, KeySplitTable28),
    [SYNTH_BRASS_1]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass1, KeySplitTable19),
    [SYNTH_BRASS_2]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass2, KeySplitTable29),
    [SOPRANO_SAX]           = VOICE_KEYSPLIT(voicegroup_FE7_SopranoSax, KeySplitTable27),
    [ALTO_SAX]              = VOICE_KEYSPLIT(voicegroup_FE7_AltoSax, KeySplitTable25),
    [TENOR_SAX]             = VOICE_KEYSPLIT(voicegroup_FE7_TenorSax, KeySplitTable26),
    [BARITONE_SAX]          = VOICE_KEYSPLIT(voicegroup_FE7_BaritoneSax, KeySplitTable19),
    [OBOE]                  = VOICE_KEYSPLIT(voicegroup_FE7_Oboe, KeySplitTable20),
    [ENGLISH_HORN]          = VOICE_KEYSPLIT(voicegroup_FE7_EnglishHorn, KeySplitTable27),
    [BASSOON]               = VOICE_KEYSPLIT(voicegroup_FE7_Bassoon, KeySplitTable29),
    [CLARINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clarinet, KeySplitTable30),
    [PICCOLO]               = VOICE_KEYSPLIT(voicegroup_FE7_Piccolo, KeySplitTable11),
    [FLUTE]                 = VOICE_KEYSPLIT(voicegroup_FE7_Flute, KeySplitTable27),
    [RECORDER]              = VOICE_KEYSPLIT(voicegroup_FE7_Recorder, KeySplitTable30),
    [PAN_FLUTE]             = VOICE_KEYSPLIT(voicegroup_FE7_PanFlute, KeySplitTable31),
    [BLOWN_BOTTLE]          = VOICE_KEYSPLIT(voicegroup_FE7_BlownBottle, KeySplitTable31),
    [SHAKUHACHI]            = VOICE_KEYSPLIT(voicegroup_FE7_Shakuhachi, KeySplitTable13),
    [WHISTLE]               = VOICE_KEYSPLIT(voicegroup_FE7_Whistle, KeySplitTable7),
    [OCARINA]               = VOICE_KEYSPLIT(voicegroup_FE7_Ocarina, KeySplitTable14),
    [LEAD_1_SQUARE]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead1_Square, KeySplitTable30),
    [LEAD_2_SAWTOOTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead2_Sawtooth, KeySplitTable7),
    [LEAD_3_CALLIOPE]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead3_Calliope, KeySplitTable14),
    [LEAD_4_CHIFF]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead4_Chiff, KeySplitTable32),
    [LEAD_5_CHARANG]        = VOICE_KEYSPLIT(voicegroup_FE7_Lead5_Charang, KeySplitTable15),
    [LEAD_6_VOICE]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead6_Voice, KeySplitTable33),
    [LEAD_7_FIFTHS]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead7_Fifths, KeySplitTable34),
    [LEAD_8_BASS_LEAD]      = VOICE_KEYSPLIT(voicegroup_FE7_Lead8_Bass_Lead, KeySplitTable14),
    [PAD_1_NEW_AGE]         = VOICE_KEYSPLIT(voicegroup_FE7_Pad1_NewAge, KeySplitTable28),
    [PAD_2_WARM]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad2_Warm, KeySplitTable33),
    [PAD_3_POLYSYNTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Pad3_Polysynth, KeySplitTable8),
    [PAD_4_CHOIR]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [PAD_5_BOWED]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad5_Bowed, KeySplitTable8),
    [PAD_6_METALLIC]        = VOICE_KEYSPLIT(voicegroup_FE7_Pad6_Metallic, KeySplitTable7),
    [PAD_7_HALO]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad7_Halo, KeySplitTable15),
    [PAD_8_SWEEP]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad8_Sweep, KeySplitTable18),
    [FX_1_RAIN]             = VOICE_KEYSPLIT(voicegroup_FE7_FX1_Rain, KeySplitTable31),
    [FX_2_SOUNDTRACK]       = VOICE_KEYSPLIT(voicegroup_FE7_FX2_Soundtrack, KeySplitTable33),
    [FX_3_CRYSTAL]          = VOICE_KEYSPLIT(voicegroup_FE7_FX3_Crystal, KeySplitTable33),
    [FX_4_ATMOSPHERE]       = VOICE_KEYSPLIT(voicegroup_FE7_FX4_Atmosphere, KeySplitTable34),
    [FX_5_BRIGHTNESS]       = VOICE_KEYSPLIT(voicegroup_FE7_FX5_Brightness, KeySplitTable34),
    [FX_6_GOBLINS]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_101_fx_6_goblins, 255, 0, 255, 235),
    [FX_7_ECHOES]           = VOICE_KEYSPLIT(voicegroup_FE7_FX7_Echoes, KeySplitTable15),
    [FX_8_SCI_FI]           = VOICE_KEYSPLIT(voicegroup_FE7_FX8_Sci_Fi, KeySplitTable32),
    [SITAR]                 = VOICE_KEYSPLIT(voicegroup_FE7_Sitar, KeySplitTable31),
    [BANJO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Banjo, KeySplitTable35),
    [SHAMISEN]              = VOICE_KEYSPLIT(voicegroup_FE7_Shamisen, KeySplitTable35),
    [KOTO]                  = VOICE_KEYSPLIT(voicegroup_FE7_Koto, KeySplitTable29),
    [KALIMBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Kalimba, KeySplitTable31),
    [BAG_PIPE]              = VOICE_KEYSPLIT(voicegroup_FE7_Bagpipe, KeySplitTable30),
    [FIDDLE]                = VOICE_KEYSPLIT(voicegroup_FE7_Fiddle, KeySplitTable25),
    [SHANAI]                = VOICE_KEYSPLIT(voicegroup_FE7_Shanai, KeySplitTable35),
    [TINKLE_BELL]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_112_tinkle_bell, 255, 252, 0, 235),
    [AGOGO]                 = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_113_agogo, 255, 242, 0, 235),
    [STEEL_DRUMS]           = VOICE_KEYSPLIT(voicegroup_FE7_SteelDrums, KeySplitTable34),
    [WOODBLOCK]             = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_115_woodblock, 255, 0, 255, 235),
    [TAIKO_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_116_taiko_drum, 255, 0, 255, 235),
    [MELODIC_TOM]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_117_melodic_tom, 255, 0, 255, 235),
    [SYNTH_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_118_synth_drum, 255, 0, 255, 235),
    [REVERSE_CYMBAL]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_119_reverse_cymbal, 255, 0, 255, 235),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_120_guitar_fret_noise, 255, 0, 255, 235),
    [BREATH_NOISE]          = VOICE_KEYSPLIT(voicegroup_FE7_BreathNoise, KeySplitTable32),
    [SEASHORE]              = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_122_seashore, 255, 0, 255, 235),
    [BIRD_TWEET]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_123_bird_tweet, 255, 0, 255, 235),
    [TELEPHONE_RING]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_124_telephone_ring, 255, 0, 255, 235),
    [HELICOPTER]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_125_helicopter, 255, 0, 255, 235),
    [APPLAUSE]              = VOICE_KEYSPLIT(voicegroup_FE7_Applause, KeySplitTable35),
    [DRUMKIT_CM_64_32L]     = VOICE_KEYSPLIT_ALL(voicegroup_FE7_Gunshot),
};

//--------------------------------------------------------------
//  Universal Voicegroup FE7
//  + Acimut's Drumkit
//  + Adrian Rios's Trumpet
//
//  by Acimut
//--------------------------------------------------------------

//used ACOUSTIC_GRAND_PIANO as DRUMKIT_STANDARD
const union VoiceGroup voicegroup192[] =
{
    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(voicegroup_Acimut_Drumkit_Standard),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_FE7_BrightAcousticPiano, KeySplitTable6),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGrandPiano, KeySplitTable6),
    [HONKY_TONK_PIANO]      = VOICE_KEYSPLIT(voicegroup_FE7_HonkyTonkPiano, KeySplitTable7),
    [ELECTRIC_PIANO_1]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano1, KeySplitTable8),
    [ELECTRIC_PIANO_2]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano2, KeySplitTable9),
    [HARPSICHORD]           = VOICE_KEYSPLIT(voicegroup_FE7_Harpsichord, KeySplitTable10),
    [CLAVINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clavinet, KeySplitTable7),
    [CELESTA]               = VOICE_KEYSPLIT(voicegroup_FE7_Celesta, KeySplitTable11),
    [GLOCKENSPIEL]          = VOICE_KEYSPLIT(voicegroup_FE7_Glockenspiel, KeySplitTable12),
    [MUSIC_BOX]             = VOICE_KEYSPLIT(voicegroup_FE7_MusicBox, KeySplitTable11),
    [VIBRAPHONE]            = VOICE_KEYSPLIT(voicegroup_FE7_Vibraphone, KeySplitTable13),
    [MARINBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Marimba, KeySplitTable14),
    [XYLOPHONE]             = VOICE_KEYSPLIT(voicegroup_FE7_Xylophone, KeySplitTable15),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_014_tubular_bells, 255, 249, 0, 235),
    [DULCIMER]              = VOICE_KEYSPLIT(voicegroup_FE7_Dulcimer, KeySplitTable16),
    [DRAWBAR_ORGAN]         = VOICE_KEYSPLIT(voicegroup_FE7_DrawbarOrgan, KeySplitTable17),
    [PERCUSIVE_ORGAN]       = VOICE_KEYSPLIT(voicegroup_FE7_PercussiveOrgan, KeySplitTable17),
    [ROCK_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_RockOrgan, KeySplitTable17),
    [CHURCH_ORGAN]          = VOICE_KEYSPLIT(voicegroup_FE7_ChurchOrgan, KeySplitTable13),
    [REED_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_ReedOrgan, KeySplitTable17),
    [ACCORDION]             = VOICE_KEYSPLIT(voicegroup_FE7_Accordion, KeySplitTable18),
    [HARMONICA]             = VOICE_KEYSPLIT(voicegroup_FE7_Harmonica, KeySplitTable19),
    [TANGO_ACCORDION]       = VOICE_KEYSPLIT(voicegroup_FE7_TangoAccordion, KeySplitTable10),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarNylon, KeySplitTable9),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarSteel, KeySplitTable19),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarJazz, KeySplitTable9),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarClean, KeySplitTable19),
    [ELECTRIC_GUITAR_MUTED] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarMuted, KeySplitTable20),
    [OVERDRIVEN_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_OverdrivenGuitar, KeySplitTable21),
    [DISTORTION_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_DistortionGuitar, KeySplitTable22),
    [GUITAR_HARMONICS]      = VOICE_KEYSPLIT(voicegroup_FE7_GuitarHarmonics, KeySplitTable16),
    [ACOUSTIC_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_AcousticBass, KeySplitTable13),
    [ELECTRIC_BASS_FINGER]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassFinger, KeySplitTable10),
    [ELECTRIC_BASS_PICK]    = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassPick, KeySplitTable20),
    [FRETLESS_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_FretlessBass, KeySplitTable20),
    [SLAP_BASS_1]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass1, KeySplitTable23),
    [SLAP_BASS_2]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass2, KeySplitTable23),
    [SYNTH_BASS_1]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass1, KeySplitTable23),
    [SYNTH_BASS_2]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass2, KeySplitTable24),
    [VIOLIN]                = VOICE_KEYSPLIT(voicegroup_FE7_Violin, KeySplitTable22),
    [VIOLA]                 = VOICE_KEYSPLIT(voicegroup_FE7_Viola, KeySplitTable22),
    [CELLO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Cello, KeySplitTable25),
    [CONTRABASS]            = VOICE_KEYSPLIT(voicegroup_FE7_Contrabass, KeySplitTable25),
    [TREMOLO_STRINGS]       = VOICE_KEYSPLIT(voicegroup_FE7_TremoloStrings, KeySplitTable12),
    [PIZZICATO_STRINGS]     = VOICE_KEYSPLIT(voicegroup_FE7_PizzicatoStrings, KeySplitTable16),
    [ORCHESTRAL_HARP]       = VOICE_KEYSPLIT(voicegroup_FE7_OrchestralHarp, KeySplitTable24),
    [TIMPANI]               = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_047_timpani, 255, 0, 255, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble1, KeySplitTable12),
    [STRING_ENSEMBLE_2]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble2, KeySplitTable12),
    [SYNTH_STRINGS_1]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings1, KeySplitTable18),
    [SYNTH_STRINGS_2]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings2, KeySplitTable18),
    [CHOIR_AAHS]            = VOICE_KEYSPLIT(voicegroup_FE7_ChoirAahs, KeySplitTable16),
    [VOICE_OOHS]            = VOICE_KEYSPLIT(voicegroup_FE7_VoiceOohs, KeySplitTable24),
    [SYNTH_VOICE]           = VOICE_KEYSPLIT(voicegroup_FE7_SynthVoice, KeySplitTable11),
    [ORCHESTRA_HIT]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_055_orchestra_hit, 255, 253, 0, 235),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_Adrian_Rios_Trumpet, KeySplitTable_AR_Trumpet),
    [TROMBONE]              = VOICE_KEYSPLIT(voicegroup_FE7_Trombone, KeySplitTable21),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_FE7_Tuba, KeySplitTable26),
    [MUTED_TRUMPET]         = VOICE_KEYSPLIT(voicegroup_FE7_MutedTrumpet, KeySplitTable27),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_FE7_FrenchHorn, KeySplitTable28),
    [BRASS_SECTION]         = VOICE_KEYSPLIT(voicegroup_FE7_BrassSection, KeySplitTable28),
    [SYNTH_BRASS_1]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass1, KeySplitTable19),
    [SYNTH_BRASS_2]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass2, KeySplitTable29),
    [SOPRANO_SAX]           = VOICE_KEYSPLIT(voicegroup_FE7_SopranoSax, KeySplitTable27),
    [ALTO_SAX]              = VOICE_KEYSPLIT(voicegroup_FE7_AltoSax, KeySplitTable25),
    [TENOR_SAX]             = VOICE_KEYSPLIT(voicegroup_FE7_TenorSax, KeySplitTable26),
    [BARITONE_SAX]          = VOICE_KEYSPLIT(voicegroup_FE7_BaritoneSax, KeySplitTable19),
    [OBOE]                  = VOICE_KEYSPLIT(voicegroup_FE7_Oboe, KeySplitTable20),
    [ENGLISH_HORN]          = VOICE_KEYSPLIT(voicegroup_FE7_EnglishHorn, KeySplitTable27),
    [BASSOON]               = VOICE_KEYSPLIT(voicegroup_FE7_Bassoon, KeySplitTable29),
    [CLARINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clarinet, KeySplitTable30),
    [PICCOLO]               = VOICE_KEYSPLIT(voicegroup_FE7_Piccolo, KeySplitTable11),
    [FLUTE]                 = VOICE_KEYSPLIT(voicegroup_FE7_Flute, KeySplitTable27),
    [RECORDER]              = VOICE_KEYSPLIT(voicegroup_FE7_Recorder, KeySplitTable30),
    [PAN_FLUTE]             = VOICE_KEYSPLIT(voicegroup_FE7_PanFlute, KeySplitTable31),
    [BLOWN_BOTTLE]          = VOICE_KEYSPLIT(voicegroup_FE7_BlownBottle, KeySplitTable31),
    [SHAKUHACHI]            = VOICE_KEYSPLIT(voicegroup_FE7_Shakuhachi, KeySplitTable13),
    [WHISTLE]               = VOICE_KEYSPLIT(voicegroup_FE7_Whistle, KeySplitTable7),
    [OCARINA]               = VOICE_KEYSPLIT(voicegroup_FE7_Ocarina, KeySplitTable14),
    [LEAD_1_SQUARE]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead1_Square, KeySplitTable30),
    [LEAD_2_SAWTOOTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead2_Sawtooth, KeySplitTable7),
    [LEAD_3_CALLIOPE]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead3_Calliope, KeySplitTable14),
    [LEAD_4_CHIFF]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead4_Chiff, KeySplitTable32),
    [LEAD_5_CHARANG]        = VOICE_KEYSPLIT(voicegroup_FE7_Lead5_Charang, KeySplitTable15),
    [LEAD_6_VOICE]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead6_Voice, KeySplitTable33),
    [LEAD_7_FIFTHS]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead7_Fifths, KeySplitTable34),
    [LEAD_8_BASS_LEAD]      = VOICE_KEYSPLIT(voicegroup_FE7_Lead8_Bass_Lead, KeySplitTable14),
    [PAD_1_NEW_AGE]         = VOICE_KEYSPLIT(voicegroup_FE7_Pad1_NewAge, KeySplitTable28),
    [PAD_2_WARM]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad2_Warm, KeySplitTable33),
    [PAD_3_POLYSYNTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Pad3_Polysynth, KeySplitTable8),
    [PAD_4_CHOIR]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [PAD_5_BOWED]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad5_Bowed, KeySplitTable8),
    [PAD_6_METALLIC]        = VOICE_KEYSPLIT(voicegroup_FE7_Pad6_Metallic, KeySplitTable7),
    [PAD_7_HALO]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad7_Halo, KeySplitTable15),
    [PAD_8_SWEEP]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad8_Sweep, KeySplitTable18),
    [FX_1_RAIN]             = VOICE_KEYSPLIT(voicegroup_FE7_FX1_Rain, KeySplitTable31),
    [FX_2_SOUNDTRACK]       = VOICE_KEYSPLIT(voicegroup_FE7_FX2_Soundtrack, KeySplitTable33),
    [FX_3_CRYSTAL]          = VOICE_KEYSPLIT(voicegroup_FE7_FX3_Crystal, KeySplitTable33),
    [FX_4_ATMOSPHERE]       = VOICE_KEYSPLIT(voicegroup_FE7_FX4_Atmosphere, KeySplitTable34),
    [FX_5_BRIGHTNESS]       = VOICE_KEYSPLIT(voicegroup_FE7_FX5_Brightness, KeySplitTable34),
    [FX_6_GOBLINS]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_101_fx_6_goblins, 255, 0, 255, 235),
    [FX_7_ECHOES]           = VOICE_KEYSPLIT(voicegroup_FE7_FX7_Echoes, KeySplitTable15),
    [FX_8_SCI_FI]           = VOICE_KEYSPLIT(voicegroup_FE7_FX8_Sci_Fi, KeySplitTable32),
    [SITAR]                 = VOICE_KEYSPLIT(voicegroup_FE7_Sitar, KeySplitTable31),
    [BANJO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Banjo, KeySplitTable35),
    [SHAMISEN]              = VOICE_KEYSPLIT(voicegroup_FE7_Shamisen, KeySplitTable35),
    [KOTO]                  = VOICE_KEYSPLIT(voicegroup_FE7_Koto, KeySplitTable29),
    [KALIMBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Kalimba, KeySplitTable31),
    [BAG_PIPE]              = VOICE_KEYSPLIT(voicegroup_FE7_Bagpipe, KeySplitTable30),
    [FIDDLE]                = VOICE_KEYSPLIT(voicegroup_FE7_Fiddle, KeySplitTable25),
    [SHANAI]                = VOICE_KEYSPLIT(voicegroup_FE7_Shanai, KeySplitTable35),
    [TINKLE_BELL]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_112_tinkle_bell, 255, 252, 0, 235),
    [AGOGO]                 = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_113_agogo, 255, 242, 0, 235),
    [STEEL_DRUMS]           = VOICE_KEYSPLIT(voicegroup_FE7_SteelDrums, KeySplitTable34),
    [WOODBLOCK]             = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_115_woodblock, 255, 0, 255, 235),
    [TAIKO_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_116_taiko_drum, 255, 0, 255, 235),
    [MELODIC_TOM]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_117_melodic_tom, 255, 0, 255, 235),
    [SYNTH_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_118_synth_drum, 255, 0, 255, 235),
    [REVERSE_CYMBAL]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_119_reverse_cymbal, 255, 0, 255, 235),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_120_guitar_fret_noise, 255, 0, 255, 235),
    [BREATH_NOISE]          = VOICE_KEYSPLIT(voicegroup_FE7_BreathNoise, KeySplitTable32),
    [SEASHORE]              = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_122_seashore, 255, 0, 255, 235),
    [BIRD_TWEET]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_123_bird_tweet, 255, 0, 255, 235),
    [TELEPHONE_RING]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_124_telephone_ring, 255, 0, 255, 235),
    [HELICOPTER]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_125_helicopter, 255, 0, 255, 235),
    [APPLAUSE]              = VOICE_KEYSPLIT(voicegroup_FE7_Applause, KeySplitTable35),
    [GUNSHOT]               = VOICE_KEYSPLIT_ALL(voicegroup_FE7_Gunshot),
};

//used DRAWBAR_ORGAN as DRUMKIT_POWER
const union VoiceGroup voicegroup193[] =
{
    [ACOUSTIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGrandPiano, KeySplitTable6),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_FE7_BrightAcousticPiano, KeySplitTable6),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGrandPiano, KeySplitTable6),
    [HONKY_TONK_PIANO]      = VOICE_KEYSPLIT(voicegroup_FE7_HonkyTonkPiano, KeySplitTable7),
    [ELECTRIC_PIANO_1]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano1, KeySplitTable8),
    [ELECTRIC_PIANO_2]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano2, KeySplitTable9),
    [HARPSICHORD]           = VOICE_KEYSPLIT(voicegroup_FE7_Harpsichord, KeySplitTable10),
    [CLAVINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clavinet, KeySplitTable7),
    [CELESTA]               = VOICE_KEYSPLIT(voicegroup_FE7_Celesta, KeySplitTable11),
    [GLOCKENSPIEL]          = VOICE_KEYSPLIT(voicegroup_FE7_Glockenspiel, KeySplitTable12),
    [MUSIC_BOX]             = VOICE_KEYSPLIT(voicegroup_FE7_MusicBox, KeySplitTable11),
    [VIBRAPHONE]            = VOICE_KEYSPLIT(voicegroup_FE7_Vibraphone, KeySplitTable13),
    [MARINBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Marimba, KeySplitTable14),
    [XYLOPHONE]             = VOICE_KEYSPLIT(voicegroup_FE7_Xylophone, KeySplitTable15),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_014_tubular_bells, 255, 249, 0, 235),
    [DULCIMER]              = VOICE_KEYSPLIT(voicegroup_FE7_Dulcimer, KeySplitTable16),
    [DRUMKIT_POWER]         = VOICE_KEYSPLIT_ALL(voicegroup_Acimut_Drumkit_Power),
    [PERCUSIVE_ORGAN]       = VOICE_KEYSPLIT(voicegroup_FE7_PercussiveOrgan, KeySplitTable17),
    [ROCK_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_RockOrgan, KeySplitTable17),
    [CHURCH_ORGAN]          = VOICE_KEYSPLIT(voicegroup_FE7_ChurchOrgan, KeySplitTable13),
    [REED_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_ReedOrgan, KeySplitTable17),
    [ACCORDION]             = VOICE_KEYSPLIT(voicegroup_FE7_Accordion, KeySplitTable18),
    [HARMONICA]             = VOICE_KEYSPLIT(voicegroup_FE7_Harmonica, KeySplitTable19),
    [TANGO_ACCORDION]       = VOICE_KEYSPLIT(voicegroup_FE7_TangoAccordion, KeySplitTable10),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarNylon, KeySplitTable9),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarSteel, KeySplitTable19),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarJazz, KeySplitTable9),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarClean, KeySplitTable19),
    [ELECTRIC_GUITAR_MUTED] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarMuted, KeySplitTable20),
    [OVERDRIVEN_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_OverdrivenGuitar, KeySplitTable21),
    [DISTORTION_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_DistortionGuitar, KeySplitTable22),
    [GUITAR_HARMONICS]      = VOICE_KEYSPLIT(voicegroup_FE7_GuitarHarmonics, KeySplitTable16),
    [ACOUSTIC_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_AcousticBass, KeySplitTable13),
    [ELECTRIC_BASS_FINGER]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassFinger, KeySplitTable10),
    [ELECTRIC_BASS_PICK]    = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassPick, KeySplitTable20),
    [FRETLESS_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_FretlessBass, KeySplitTable20),
    [SLAP_BASS_1]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass1, KeySplitTable23),
    [SLAP_BASS_2]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass2, KeySplitTable23),
    [SYNTH_BASS_1]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass1, KeySplitTable23),
    [SYNTH_BASS_2]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass2, KeySplitTable24),
    [VIOLIN]                = VOICE_KEYSPLIT(voicegroup_FE7_Violin, KeySplitTable22),
    [VIOLA]                 = VOICE_KEYSPLIT(voicegroup_FE7_Viola, KeySplitTable22),
    [CELLO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Cello, KeySplitTable25),
    [CONTRABASS]            = VOICE_KEYSPLIT(voicegroup_FE7_Contrabass, KeySplitTable25),
    [TREMOLO_STRINGS]       = VOICE_KEYSPLIT(voicegroup_FE7_TremoloStrings, KeySplitTable12),
    [PIZZICATO_STRINGS]     = VOICE_KEYSPLIT(voicegroup_FE7_PizzicatoStrings, KeySplitTable16),
    [ORCHESTRAL_HARP]       = VOICE_KEYSPLIT(voicegroup_FE7_OrchestralHarp, KeySplitTable24),
    [TIMPANI]               = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_047_timpani, 255, 0, 255, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble1, KeySplitTable12),
    [STRING_ENSEMBLE_2]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble2, KeySplitTable12),
    [SYNTH_STRINGS_1]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings1, KeySplitTable18),
    [SYNTH_STRINGS_2]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings2, KeySplitTable18),
    [CHOIR_AAHS]            = VOICE_KEYSPLIT(voicegroup_FE7_ChoirAahs, KeySplitTable16),
    [VOICE_OOHS]            = VOICE_KEYSPLIT(voicegroup_FE7_VoiceOohs, KeySplitTable24),
    [SYNTH_VOICE]           = VOICE_KEYSPLIT(voicegroup_FE7_SynthVoice, KeySplitTable11),
    [ORCHESTRA_HIT]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_055_orchestra_hit, 255, 253, 0, 235),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_Adrian_Rios_Trumpet, KeySplitTable_AR_Trumpet),
    [TROMBONE]              = VOICE_KEYSPLIT(voicegroup_FE7_Trombone, KeySplitTable21),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_FE7_Tuba, KeySplitTable26),
    [MUTED_TRUMPET]         = VOICE_KEYSPLIT(voicegroup_FE7_MutedTrumpet, KeySplitTable27),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_FE7_FrenchHorn, KeySplitTable28),
    [BRASS_SECTION]         = VOICE_KEYSPLIT(voicegroup_FE7_BrassSection, KeySplitTable28),
    [SYNTH_BRASS_1]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass1, KeySplitTable19),
    [SYNTH_BRASS_2]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass2, KeySplitTable29),
    [SOPRANO_SAX]           = VOICE_KEYSPLIT(voicegroup_FE7_SopranoSax, KeySplitTable27),
    [ALTO_SAX]              = VOICE_KEYSPLIT(voicegroup_FE7_AltoSax, KeySplitTable25),
    [TENOR_SAX]             = VOICE_KEYSPLIT(voicegroup_FE7_TenorSax, KeySplitTable26),
    [BARITONE_SAX]          = VOICE_KEYSPLIT(voicegroup_FE7_BaritoneSax, KeySplitTable19),
    [OBOE]                  = VOICE_KEYSPLIT(voicegroup_FE7_Oboe, KeySplitTable20),
    [ENGLISH_HORN]          = VOICE_KEYSPLIT(voicegroup_FE7_EnglishHorn, KeySplitTable27),
    [BASSOON]               = VOICE_KEYSPLIT(voicegroup_FE7_Bassoon, KeySplitTable29),
    [CLARINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clarinet, KeySplitTable30),
    [PICCOLO]               = VOICE_KEYSPLIT(voicegroup_FE7_Piccolo, KeySplitTable11),
    [FLUTE]                 = VOICE_KEYSPLIT(voicegroup_FE7_Flute, KeySplitTable27),
    [RECORDER]              = VOICE_KEYSPLIT(voicegroup_FE7_Recorder, KeySplitTable30),
    [PAN_FLUTE]             = VOICE_KEYSPLIT(voicegroup_FE7_PanFlute, KeySplitTable31),
    [BLOWN_BOTTLE]          = VOICE_KEYSPLIT(voicegroup_FE7_BlownBottle, KeySplitTable31),
    [SHAKUHACHI]            = VOICE_KEYSPLIT(voicegroup_FE7_Shakuhachi, KeySplitTable13),
    [WHISTLE]               = VOICE_KEYSPLIT(voicegroup_FE7_Whistle, KeySplitTable7),
    [OCARINA]               = VOICE_KEYSPLIT(voicegroup_FE7_Ocarina, KeySplitTable14),
    [LEAD_1_SQUARE]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead1_Square, KeySplitTable30),
    [LEAD_2_SAWTOOTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead2_Sawtooth, KeySplitTable7),
    [LEAD_3_CALLIOPE]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead3_Calliope, KeySplitTable14),
    [LEAD_4_CHIFF]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead4_Chiff, KeySplitTable32),
    [LEAD_5_CHARANG]        = VOICE_KEYSPLIT(voicegroup_FE7_Lead5_Charang, KeySplitTable15),
    [LEAD_6_VOICE]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead6_Voice, KeySplitTable33),
    [LEAD_7_FIFTHS]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead7_Fifths, KeySplitTable34),
    [LEAD_8_BASS_LEAD]      = VOICE_KEYSPLIT(voicegroup_FE7_Lead8_Bass_Lead, KeySplitTable14),
    [PAD_1_NEW_AGE]         = VOICE_KEYSPLIT(voicegroup_FE7_Pad1_NewAge, KeySplitTable28),
    [PAD_2_WARM]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad2_Warm, KeySplitTable33),
    [PAD_3_POLYSYNTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Pad3_Polysynth, KeySplitTable8),
    [PAD_4_CHOIR]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [PAD_5_BOWED]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad5_Bowed, KeySplitTable8),
    [PAD_6_METALLIC]        = VOICE_KEYSPLIT(voicegroup_FE7_Pad6_Metallic, KeySplitTable7),
    [PAD_7_HALO]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad7_Halo, KeySplitTable15),
    [PAD_8_SWEEP]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad8_Sweep, KeySplitTable18),
    [FX_1_RAIN]             = VOICE_KEYSPLIT(voicegroup_FE7_FX1_Rain, KeySplitTable31),
    [FX_2_SOUNDTRACK]       = VOICE_KEYSPLIT(voicegroup_FE7_FX2_Soundtrack, KeySplitTable33),
    [FX_3_CRYSTAL]          = VOICE_KEYSPLIT(voicegroup_FE7_FX3_Crystal, KeySplitTable33),
    [FX_4_ATMOSPHERE]       = VOICE_KEYSPLIT(voicegroup_FE7_FX4_Atmosphere, KeySplitTable34),
    [FX_5_BRIGHTNESS]       = VOICE_KEYSPLIT(voicegroup_FE7_FX5_Brightness, KeySplitTable34),
    [FX_6_GOBLINS]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_101_fx_6_goblins, 255, 0, 255, 235),
    [FX_7_ECHOES]           = VOICE_KEYSPLIT(voicegroup_FE7_FX7_Echoes, KeySplitTable15),
    [FX_8_SCI_FI]           = VOICE_KEYSPLIT(voicegroup_FE7_FX8_Sci_Fi, KeySplitTable32),
    [SITAR]                 = VOICE_KEYSPLIT(voicegroup_FE7_Sitar, KeySplitTable31),
    [BANJO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Banjo, KeySplitTable35),
    [SHAMISEN]              = VOICE_KEYSPLIT(voicegroup_FE7_Shamisen, KeySplitTable35),
    [KOTO]                  = VOICE_KEYSPLIT(voicegroup_FE7_Koto, KeySplitTable29),
    [KALIMBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Kalimba, KeySplitTable31),
    [BAG_PIPE]              = VOICE_KEYSPLIT(voicegroup_FE7_Bagpipe, KeySplitTable30),
    [FIDDLE]                = VOICE_KEYSPLIT(voicegroup_FE7_Fiddle, KeySplitTable25),
    [SHANAI]                = VOICE_KEYSPLIT(voicegroup_FE7_Shanai, KeySplitTable35),
    [TINKLE_BELL]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_112_tinkle_bell, 255, 252, 0, 235),
    [AGOGO]                 = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_113_agogo, 255, 242, 0, 235),
    [STEEL_DRUMS]           = VOICE_KEYSPLIT(voicegroup_FE7_SteelDrums, KeySplitTable34),
    [WOODBLOCK]             = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_115_woodblock, 255, 0, 255, 235),
    [TAIKO_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_116_taiko_drum, 255, 0, 255, 235),
    [MELODIC_TOM]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_117_melodic_tom, 255, 0, 255, 235),
    [SYNTH_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_118_synth_drum, 255, 0, 255, 235),
    [REVERSE_CYMBAL]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_119_reverse_cymbal, 255, 0, 255, 235),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_120_guitar_fret_noise, 255, 0, 255, 235),
    [BREATH_NOISE]          = VOICE_KEYSPLIT(voicegroup_FE7_BreathNoise, KeySplitTable32),
    [SEASHORE]              = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_122_seashore, 255, 0, 255, 235),
    [BIRD_TWEET]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_123_bird_tweet, 255, 0, 255, 235),
    [TELEPHONE_RING]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_124_telephone_ring, 255, 0, 255, 235),
    [HELICOPTER]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_125_helicopter, 255, 0, 255, 235),
    [APPLAUSE]              = VOICE_KEYSPLIT(voicegroup_FE7_Applause, KeySplitTable35),
    [GUNSHOT]               = VOICE_KEYSPLIT_ALL(voicegroup_FE7_Gunshot),
};

//used ACOUSTIC_GRAND_PIANO as DRUMKIT_POWER
const union VoiceGroup voicegroup194[] =
{
    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(voicegroup_Acimut_Drumkit_Power),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_FE7_BrightAcousticPiano, KeySplitTable6),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGrandPiano, KeySplitTable6),
    [HONKY_TONK_PIANO]      = VOICE_KEYSPLIT(voicegroup_FE7_HonkyTonkPiano, KeySplitTable7),
    [ELECTRIC_PIANO_1]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano1, KeySplitTable8),
    [ELECTRIC_PIANO_2]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano2, KeySplitTable9),
    [HARPSICHORD]           = VOICE_KEYSPLIT(voicegroup_FE7_Harpsichord, KeySplitTable10),
    [CLAVINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clavinet, KeySplitTable7),
    [CELESTA]               = VOICE_KEYSPLIT(voicegroup_FE7_Celesta, KeySplitTable11),
    [GLOCKENSPIEL]          = VOICE_KEYSPLIT(voicegroup_FE7_Glockenspiel, KeySplitTable12),
    [MUSIC_BOX]             = VOICE_KEYSPLIT(voicegroup_FE7_MusicBox, KeySplitTable11),
    [VIBRAPHONE]            = VOICE_KEYSPLIT(voicegroup_FE7_Vibraphone, KeySplitTable13),
    [MARINBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Marimba, KeySplitTable14),
    [XYLOPHONE]             = VOICE_KEYSPLIT(voicegroup_FE7_Xylophone, KeySplitTable15),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_014_tubular_bells, 255, 249, 0, 235),
    [DULCIMER]              = VOICE_KEYSPLIT(voicegroup_FE7_Dulcimer, KeySplitTable16),
    [DRAWBAR_ORGAN]         = VOICE_KEYSPLIT(voicegroup_FE7_DrawbarOrgan, KeySplitTable17),
    [PERCUSIVE_ORGAN]       = VOICE_KEYSPLIT(voicegroup_FE7_PercussiveOrgan, KeySplitTable17),
    [ROCK_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_RockOrgan, KeySplitTable17),
    [CHURCH_ORGAN]          = VOICE_KEYSPLIT(voicegroup_FE7_ChurchOrgan, KeySplitTable13),
    [REED_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_ReedOrgan, KeySplitTable17),
    [ACCORDION]             = VOICE_KEYSPLIT(voicegroup_FE7_Accordion, KeySplitTable18),
    [HARMONICA]             = VOICE_KEYSPLIT(voicegroup_FE7_Harmonica, KeySplitTable19),
    [TANGO_ACCORDION]       = VOICE_KEYSPLIT(voicegroup_FE7_TangoAccordion, KeySplitTable10),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarNylon, KeySplitTable9),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarSteel, KeySplitTable19),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarJazz, KeySplitTable9),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarClean, KeySplitTable19),
    [ELECTRIC_GUITAR_MUTED] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarMuted, KeySplitTable20),
    [OVERDRIVEN_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_OverdrivenGuitar, KeySplitTable21),
    [DISTORTION_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_DistortionGuitar, KeySplitTable22),
    [GUITAR_HARMONICS]      = VOICE_KEYSPLIT(voicegroup_FE7_GuitarHarmonics, KeySplitTable16),
    [ACOUSTIC_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_AcousticBass, KeySplitTable13),
    [ELECTRIC_BASS_FINGER]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassFinger, KeySplitTable10),
    [ELECTRIC_BASS_PICK]    = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassPick, KeySplitTable20),
    [FRETLESS_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_FretlessBass, KeySplitTable20),
    [SLAP_BASS_1]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass1, KeySplitTable23),
    [SLAP_BASS_2]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass2, KeySplitTable23),
    [SYNTH_BASS_1]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass1, KeySplitTable23),
    [SYNTH_BASS_2]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass2, KeySplitTable24),
    [VIOLIN]                = VOICE_KEYSPLIT(voicegroup_FE7_Violin, KeySplitTable22),
    [VIOLA]                 = VOICE_KEYSPLIT(voicegroup_FE7_Viola, KeySplitTable22),
    [CELLO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Cello, KeySplitTable25),
    [CONTRABASS]            = VOICE_KEYSPLIT(voicegroup_FE7_Contrabass, KeySplitTable25),
    [TREMOLO_STRINGS]       = VOICE_KEYSPLIT(voicegroup_FE7_TremoloStrings, KeySplitTable12),
    [PIZZICATO_STRINGS]     = VOICE_KEYSPLIT(voicegroup_FE7_PizzicatoStrings, KeySplitTable16),
    [ORCHESTRAL_HARP]       = VOICE_KEYSPLIT(voicegroup_FE7_OrchestralHarp, KeySplitTable24),
    [TIMPANI]               = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_047_timpani, 255, 0, 255, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble1, KeySplitTable12),
    [STRING_ENSEMBLE_2]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble2, KeySplitTable12),
    [SYNTH_STRINGS_1]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings1, KeySplitTable18),
    [SYNTH_STRINGS_2]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings2, KeySplitTable18),
    [CHOIR_AAHS]            = VOICE_KEYSPLIT(voicegroup_FE7_ChoirAahs, KeySplitTable16),
    [VOICE_OOHS]            = VOICE_KEYSPLIT(voicegroup_FE7_VoiceOohs, KeySplitTable24),
    [SYNTH_VOICE]           = VOICE_KEYSPLIT(voicegroup_FE7_SynthVoice, KeySplitTable11),
    [ORCHESTRA_HIT]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_055_orchestra_hit, 255, 253, 0, 235),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_Adrian_Rios_Trumpet, KeySplitTable_AR_Trumpet),
    [TROMBONE]              = VOICE_KEYSPLIT(voicegroup_FE7_Trombone, KeySplitTable21),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_FE7_Tuba, KeySplitTable26),
    [MUTED_TRUMPET]         = VOICE_KEYSPLIT(voicegroup_FE7_MutedTrumpet, KeySplitTable27),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_FE7_FrenchHorn, KeySplitTable28),
    [BRASS_SECTION]         = VOICE_KEYSPLIT(voicegroup_FE7_BrassSection, KeySplitTable28),
    [SYNTH_BRASS_1]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass1, KeySplitTable19),
    [SYNTH_BRASS_2]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass2, KeySplitTable29),
    [SOPRANO_SAX]           = VOICE_KEYSPLIT(voicegroup_FE7_SopranoSax, KeySplitTable27),
    [ALTO_SAX]              = VOICE_KEYSPLIT(voicegroup_FE7_AltoSax, KeySplitTable25),
    [TENOR_SAX]             = VOICE_KEYSPLIT(voicegroup_FE7_TenorSax, KeySplitTable26),
    [BARITONE_SAX]          = VOICE_KEYSPLIT(voicegroup_FE7_BaritoneSax, KeySplitTable19),
    [OBOE]                  = VOICE_KEYSPLIT(voicegroup_FE7_Oboe, KeySplitTable20),
    [ENGLISH_HORN]          = VOICE_KEYSPLIT(voicegroup_FE7_EnglishHorn, KeySplitTable27),
    [BASSOON]               = VOICE_KEYSPLIT(voicegroup_FE7_Bassoon, KeySplitTable29),
    [CLARINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clarinet, KeySplitTable30),
    [PICCOLO]               = VOICE_KEYSPLIT(voicegroup_FE7_Piccolo, KeySplitTable11),
    [FLUTE]                 = VOICE_KEYSPLIT(voicegroup_FE7_Flute, KeySplitTable27),
    [RECORDER]              = VOICE_KEYSPLIT(voicegroup_FE7_Recorder, KeySplitTable30),
    [PAN_FLUTE]             = VOICE_KEYSPLIT(voicegroup_FE7_PanFlute, KeySplitTable31),
    [BLOWN_BOTTLE]          = VOICE_KEYSPLIT(voicegroup_FE7_BlownBottle, KeySplitTable31),
    [SHAKUHACHI]            = VOICE_KEYSPLIT(voicegroup_FE7_Shakuhachi, KeySplitTable13),
    [WHISTLE]               = VOICE_KEYSPLIT(voicegroup_FE7_Whistle, KeySplitTable7),
    [OCARINA]               = VOICE_KEYSPLIT(voicegroup_FE7_Ocarina, KeySplitTable14),
    [LEAD_1_SQUARE]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead1_Square, KeySplitTable30),
    [LEAD_2_SAWTOOTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead2_Sawtooth, KeySplitTable7),
    [LEAD_3_CALLIOPE]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead3_Calliope, KeySplitTable14),
    [LEAD_4_CHIFF]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead4_Chiff, KeySplitTable32),
    [LEAD_5_CHARANG]        = VOICE_KEYSPLIT(voicegroup_FE7_Lead5_Charang, KeySplitTable15),
    [LEAD_6_VOICE]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead6_Voice, KeySplitTable33),
    [LEAD_7_FIFTHS]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead7_Fifths, KeySplitTable34),
    [LEAD_8_BASS_LEAD]      = VOICE_KEYSPLIT(voicegroup_FE7_Lead8_Bass_Lead, KeySplitTable14),
    [PAD_1_NEW_AGE]         = VOICE_KEYSPLIT(voicegroup_FE7_Pad1_NewAge, KeySplitTable28),
    [PAD_2_WARM]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad2_Warm, KeySplitTable33),
    [PAD_3_POLYSYNTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Pad3_Polysynth, KeySplitTable8),
    [PAD_4_CHOIR]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [PAD_5_BOWED]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad5_Bowed, KeySplitTable8),
    [PAD_6_METALLIC]        = VOICE_KEYSPLIT(voicegroup_FE7_Pad6_Metallic, KeySplitTable7),
    [PAD_7_HALO]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad7_Halo, KeySplitTable15),
    [PAD_8_SWEEP]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad8_Sweep, KeySplitTable18),
    [FX_1_RAIN]             = VOICE_KEYSPLIT(voicegroup_FE7_FX1_Rain, KeySplitTable31),
    [FX_2_SOUNDTRACK]       = VOICE_KEYSPLIT(voicegroup_FE7_FX2_Soundtrack, KeySplitTable33),
    [FX_3_CRYSTAL]          = VOICE_KEYSPLIT(voicegroup_FE7_FX3_Crystal, KeySplitTable33),
    [FX_4_ATMOSPHERE]       = VOICE_KEYSPLIT(voicegroup_FE7_FX4_Atmosphere, KeySplitTable34),
    [FX_5_BRIGHTNESS]       = VOICE_KEYSPLIT(voicegroup_FE7_FX5_Brightness, KeySplitTable34),
    [FX_6_GOBLINS]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_101_fx_6_goblins, 255, 0, 255, 235),
    [FX_7_ECHOES]           = VOICE_KEYSPLIT(voicegroup_FE7_FX7_Echoes, KeySplitTable15),
    [FX_8_SCI_FI]           = VOICE_KEYSPLIT(voicegroup_FE7_FX8_Sci_Fi, KeySplitTable32),
    [SITAR]                 = VOICE_KEYSPLIT(voicegroup_FE7_Sitar, KeySplitTable31),
    [BANJO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Banjo, KeySplitTable35),
    [SHAMISEN]              = VOICE_KEYSPLIT(voicegroup_FE7_Shamisen, KeySplitTable35),
    [KOTO]                  = VOICE_KEYSPLIT(voicegroup_FE7_Koto, KeySplitTable29),
    [KALIMBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Kalimba, KeySplitTable31),
    [BAG_PIPE]              = VOICE_KEYSPLIT(voicegroup_FE7_Bagpipe, KeySplitTable30),
    [FIDDLE]                = VOICE_KEYSPLIT(voicegroup_FE7_Fiddle, KeySplitTable25),
    [SHANAI]                = VOICE_KEYSPLIT(voicegroup_FE7_Shanai, KeySplitTable35),
    [TINKLE_BELL]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_112_tinkle_bell, 255, 252, 0, 235),
    [AGOGO]                 = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_113_agogo, 255, 242, 0, 235),
    [STEEL_DRUMS]           = VOICE_KEYSPLIT(voicegroup_FE7_SteelDrums, KeySplitTable34),
    [WOODBLOCK]             = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_115_woodblock, 255, 0, 255, 235),
    [TAIKO_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_116_taiko_drum, 255, 0, 255, 235),
    [MELODIC_TOM]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_117_melodic_tom, 255, 0, 255, 235),
    [SYNTH_DRUM]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_118_synth_drum, 255, 0, 255, 235),
    [REVERSE_CYMBAL]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_119_reverse_cymbal, 255, 0, 255, 235),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_120_guitar_fret_noise, 255, 0, 255, 235),
    [BREATH_NOISE]          = VOICE_KEYSPLIT(voicegroup_FE7_BreathNoise, KeySplitTable32),
    [SEASHORE]              = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_122_seashore, 255, 0, 255, 235),
    [BIRD_TWEET]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_123_bird_tweet, 255, 0, 255, 235),
    [TELEPHONE_RING]        = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_124_telephone_ring, 255, 0, 255, 235),
    [HELICOPTER]            = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_FE7_125_helicopter, 255, 0, 255, 235),
    [APPLAUSE]              = VOICE_KEYSPLIT(voicegroup_FE7_Applause, KeySplitTable35),
    [GUNSHOT]               = VOICE_KEYSPLIT_ALL(voicegroup_FE7_Gunshot),
};
