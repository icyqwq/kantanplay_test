#pragma once
#include <inttypes.h>

#define MIDI_SOUNDS_MAX 128


typedef enum {
    MIDI_SCALE_C_MINUS1,
    MIDI_SCALE_Cs_MINUS1,
    MIDI_SCALE_D_MINUS1,
    MIDI_SCALE_Ds_MINUS1,
    MIDI_SCALE_E_MINUS1,
    MIDI_SCALE_F_MINUS1,
    MIDI_SCALE_Fs_MINUS1,
    MIDI_SCALE_G_MINUS1,
    MIDI_SCALE_Gs_MINUS1,
    MIDI_SCALE_A_MINUS1,
    MIDI_SCALE_As_MINUS1,
    MIDI_SCALE_B_MINUS1,

    MIDI_SCALE_C0,
    MIDI_SCALE_Cs0,
    MIDI_SCALE_D0,
    MIDI_SCALE_Ds0,
    MIDI_SCALE_E0,
    MIDI_SCALE_F0,
    MIDI_SCALE_Fs0,
    MIDI_SCALE_G0,
    MIDI_SCALE_Gs0,
    MIDI_SCALE_A0,
    MIDI_SCALE_As0,
    MIDI_SCALE_B0,

    MIDI_SCALE_C1,
    MIDI_SCALE_Cs1,
    MIDI_SCALE_D1,
    MIDI_SCALE_Ds1,
    MIDI_SCALE_E1,
    MIDI_SCALE_F1,
    MIDI_SCALE_Fs1,
    MIDI_SCALE_G1,
    MIDI_SCALE_Gs1,
    MIDI_SCALE_A1,
    MIDI_SCALE_As1,
    MIDI_SCALE_B1,

    MIDI_SCALE_C2,
    MIDI_SCALE_Cs2,
    MIDI_SCALE_D2,
    MIDI_SCALE_Ds2,
    MIDI_SCALE_E2,
    MIDI_SCALE_F2,
    MIDI_SCALE_Fs2,
    MIDI_SCALE_G2,
    MIDI_SCALE_Gs2,
    MIDI_SCALE_A2,
    MIDI_SCALE_As2,
    MIDI_SCALE_B2,

    MIDI_SCALE_C3,
    MIDI_SCALE_Cs3,
    MIDI_SCALE_D3,
    MIDI_SCALE_Ds3,
    MIDI_SCALE_E3,
    MIDI_SCALE_F3,
    MIDI_SCALE_Fs3,
    MIDI_SCALE_G3,
    MIDI_SCALE_Gs3,
    MIDI_SCALE_A3,
    MIDI_SCALE_As3,
    MIDI_SCALE_B3,

    MIDI_SCALE_C4,
    MIDI_SCALE_Cs4,
    MIDI_SCALE_D4,
    MIDI_SCALE_Ds4,
    MIDI_SCALE_E4,
    MIDI_SCALE_F4,
    MIDI_SCALE_Fs4,
    MIDI_SCALE_G4,
    MIDI_SCALE_Gs4,
    MIDI_SCALE_A4,
    MIDI_SCALE_As4,
    MIDI_SCALE_B4,

    MIDI_SCALE_C5,
    MIDI_SCALE_Cs5,
    MIDI_SCALE_D5,
    MIDI_SCALE_Ds5,
    MIDI_SCALE_E5,
    MIDI_SCALE_F5,
    MIDI_SCALE_Fs5,
    MIDI_SCALE_G5,
    MIDI_SCALE_Gs5,
    MIDI_SCALE_A5,
    MIDI_SCALE_As5,
    MIDI_SCALE_B5,

    MIDI_SCALE_C6,
    MIDI_SCALE_Cs6,
    MIDI_SCALE_D6,
    MIDI_SCALE_Ds6,
    MIDI_SCALE_E6,
    MIDI_SCALE_F6,
    MIDI_SCALE_Fs6,
    MIDI_SCALE_G6,
    MIDI_SCALE_Gs6,
    MIDI_SCALE_A6,
    MIDI_SCALE_As6,
    MIDI_SCALE_B6,

    MIDI_SCALE_C7,
    MIDI_SCALE_Cs7,
    MIDI_SCALE_D7,
    MIDI_SCALE_Ds7,
    MIDI_SCALE_E7,
    MIDI_SCALE_F7,
    MIDI_SCALE_Fs7,
    MIDI_SCALE_G7,
    MIDI_SCALE_Gs7,
    MIDI_SCALE_A7,
    MIDI_SCALE_As7,
    MIDI_SCALE_B7,

    MIDI_SCALE_C8,
    MIDI_SCALE_Cs8,
    MIDI_SCALE_D8,
    MIDI_SCALE_Ds8,
    MIDI_SCALE_E8,
    MIDI_SCALE_F8,
    MIDI_SCALE_Fs8,
    MIDI_SCALE_G8,
    MIDI_SCALE_Gs8,
    MIDI_SCALE_A8,
    MIDI_SCALE_As8,
    MIDI_SCALE_B8,

    MIDI_SCALE_C9,
    MIDI_SCALE_Cs9,
    MIDI_SCALE_D9,
    MIDI_SCALE_Ds9,
    MIDI_SCALE_E9,
    MIDI_SCALE_F9,
    MIDI_SCALE_Fs9,
    MIDI_SCALE_G9
} midi_scale_t;

typedef enum {
    MIDI_CMD_NOTE_OFF = 0x80,          // Note Off
    MIDI_CMD_NOTE_ON = 0x90,           // Note On
    MIDI_CMD_POLYPHONIC_AFTERTOUCH = 0xA0, // Polyphonic Aftertouch (or Key Pressure)
    MIDI_CMD_CONTROL_CHANGE = 0xB0,    // Control Change (or Channel Mode Message)
    MIDI_CMD_PROGRAM_CHANGE = 0xC0,    // Program Change
    MIDI_CMD_CHANNEL_AFTERTOUCH = 0xD0, // Channel Aftertouch (or Channel Pressure)
    MIDI_CMD_PITCH_BEND = 0xE0,        // Pitch Bend
    MIDI_CMD_SYSTEM_EXCLUSIVE = 0xF0,  // System Exclusive (SysEx) Start
    MIDI_CMD_TIME_CODE = 0xF1,         // MIDI Time Code Quarter Frame
    MIDI_CMD_SONG_POSITION = 0xF2,     // Song Position Pointer
    MIDI_CMD_SONG_SELECT = 0xF3,       // Song Select
    MIDI_CMD_TUNE_REQUEST = 0xF6,      // Tune Request
    MIDI_CMD_END_OF_SYSEX = 0xF7,      // End of SysEx
    MIDI_CMD_TIMING_CLOCK = 0xF8,      // Timing Clock (used in System Real-Time Messages)
    MIDI_CMD_START = 0xFA,             // Start (used in System Real-Time Messages)
    MIDI_CMD_CONTINUE = 0xFB,          // Continue (used in System Real-Time Messages)
    MIDI_CMD_STOP = 0xFC,              // Stop (used in System Real-Time Messages)
    MIDI_CMD_ACTIVE_SENSING = 0xFE,    // Active Sensing (used in System Real-Time Messages)
    MIDI_CMD_SYSTEM_RESET = 0xFF       // System Reset
} midi_cmd_t;

enum 
{
	MIDI_NOTE_STATUS_START = 0,
	MIDI_NOTE_STATUS_END
};

typedef struct {
	uint8_t channel;
	uint8_t strength;
	uint8_t scale;
	uint32_t time;

	uint8_t status;
	uint32_t id;
} midi_note_t;

static const char* k_instrument_texts[] = {
    "001 (Grand) Piano 1",
    "002 (Bright) Piano 2",
    "003 (El. Grd) Piano 3",
    "004 Honky-tonk Piano",
    "005 El. Piano 1",
    "006 El. Piano 2",
    "007 Harpsichord",
    "008 Clavi",
    "009 Celesta",
    "010 Glockenspiel",
    "011 Music Box",
    "012 Vibraphone",
    "013 Marimba",
    "014 Xylophone",
    "015 Tubular Bells",
    "016 Santur",
    "017 Drawbar Organ",
    "018 Percussive Organ",
    "019 Rock Organ",
    "020 Church Organ",
    "021 Reed Organ",
    "022 Accordion (french)",
    "023 Harmonica",
    "024 Tango Accordion",
    "025 Ac. Guitar (nylon)",
    "026 Ac. Guitar (steel)",
    "027 El. Guitar (jazz)",
    "028 El. Guitar (clean)",
    "029 El. Guitar (muted)",
    "030 Overdriven Guitar",
    "031 Distortion Guitar",
    "032 Guitar harmonics",
    "033 Acoustic Bass",
    "034 Finger Bass",
    "035 Picked Bass",
    "036 Fretless Bass",
    "037 Slap Bass 1",
    "038 Slap Bass 2",
    "039 Synth Bass 1",
    "040 Synth Bass 2",
    "041 Violin",
    "042 Viola",
    "043 Cello",
    "044 Contrabass",
    "045 Tremolo Strings",
    "046 Pizzicato Strings",
    "047 Orchestral Harp",
    "048 Timpani",
    "049 String Ensemble 1",
    "050 String Ensemble 2",
    "051 Synth Strings 1",
    "052 Synth Strings 2",
    "053 Choir Aahs",
    "054 Voice Oohs",
    "055 Synth Voice",
    "056 Orchestra Hit",
    "057 Trumpet",
    "058 Trombone",
    "059 Tuba",
    "060 Muted Trumpet",
    "061 French Horn",
    "062 Brass Section",
    "063 Synth Brass 1",
    "064 Synth Brass 2",
    "065 Soprano Sax",
    "066 Alto Sax",
    "067 Tenor Sax",
    "068 Baritone Sax",
    "069 Oboe",
    "070 English Horn",
    "071 Bassoon",
    "072 Clarinet",
    "073 Piccolo",
    "074 Flute",
    "075 Recorder",
    "076 Pan Flute",
    "077 Blown Bottle",
    "078 Shakuhachi",
    "079 Whistle",
    "080 Ocarina",
    "081 Lead 1 (square)",
    "082 Lead 2 (sawtooth)",
    "083 Lead 3 (calliope)",
    "084 Lead 4 (chiff)",
    "085 Lead 5 (charang)",
    "086 Lead 6 (voice)",
    "087 Lead 7 (fifths)",
    "088 Lead 8 (bass+lead)",
    "089 Pad 1 (fantasia)",
    "090 Pad 2 (warm)",
    "091 Pad 3 (polysynth)",
    "092 Pad 4 (choir)",
    "093 Pad 5 (bowed)",
    "094 Pad 6 (metallic)",
    "095 Pad 7 (halo)",
    "096 Pad 8 (sweep)",
    "097 FX 1 (rain)",
    "098 FX 2 (soundtrack)",
    "099 FX 3 (crystal)",
    "100 FX4 (atmosphere)",
    "101 FX 5 (brightness)",
    "102 FX 6 (goblins)",
    "103 FX 7 (echoes)",
    "104 FX 8 (sci-fi)",
    "105 Sitar",
    "106 Banjo",
    "107 Shamisen",
    "108 Koto",
    "109 Kalimba",
    "110 Bag pipe",
    "111 Fiddle",
    "112 Shanai",
    "113 Tinkle Bell",
    "114 Agogo",
    "115 Steel Drums",
    "116 Woodblock",
    "117 Taiko Drum",
    "118 Melodic Tom",
    "119 Synth Drum",
    "120 Reverse Cymbal",
    "121 Gt. Fret Noise",
    "122 Breath Noise",
    "123 Seashore",
    "124 Bird Tweet",
    "125 Teleph. Ring",
    "126 Helicopter",
    "127 Applause",
    "128 Gunshot"
};


static const char *k_instrument_variation_texts[] = {
    "001 Piano 1",
    "002 Piano 2",
    "003 Piano 3",
    "004 Detuned EP 1",
    "005 E.Piano1",
    "006 E.Piano2",
    "007 Detuned EP2",
    "008 Honky-Tonk",
    "009 Organ 1",
    "010 Organ 2",
    "011 Organ 3",
    "012 Detuned Or. 1",
    "013 Church Org. 2",
    "014 Church Org.",
    "015 Church Org.",
    "016 Accordion Fr.",
    "017 Harpsichord",
    "018 Coupled Hps.",
    "019 Coupled Hps.",
    "020 Clav.",
    "021 Clav.",
    "022 Clav.",
    "023 Celesta",
    "024 Celesta",
    "025 Synth Brass1",
    "026 Synth Brass2",
    "027 Synth Brass3",
    "028 Synth Brass4",
    "029 Synth Bass1",
    "030 Synth Bass2",
    "031 Synth Bass3",
    "032 Synth Bass4",
    "033 Fantasia",
    "034 Syn Calliope",
    "035 Choir Aahs",
    "036 Bowed Glass",
    "037 Soundtrack",
    "038 Atmosphere",
    "039 Crystal",
    "040 Bag Pipe",
    "041 Tinkle Bell",
    "042 Ice Rain",
    "043 Oboe",
    "044 Pan Flute",
    "045 Saw Wave",
    "046 Charang",
    "047 Tubular Bells",
    "048 Square Wave",
    "049 Strings",
    "050 Tremolo Str.",
    "051 Slow Strings",
    "052 Pizzicato Str.",
    "053 Violin",
    "054 Viola",
    "055 Cello",
    "056 Cello",
    "057 Contrabass",
    "058 Harp",
    "059 Harp",
    "060 Nylon-str. Gt",
    "061 Steel-Str. Gt",
    "062 Chorus Gt.",
    "063 Funk Gt.",
    "064 Sitar",
    "065 Acoustic Bs.",
    "066 Fingered Bs.",
    "067 Picked Bs.",
    "068 Fretless Bs.",
    "069 Slap Bs. 1",
    "070 Slap Bs. 2",
    "071 Fretless Bs.",
    "072 Fretless Bs.",
    "073 Flute",
    "074 Flute",
    "075 Piccolo",
    "076 Piccolo",
    "077 Recorder",
    "078 Pan Flute",
    "079 Soprano Sax",
    "080 Alto Sax",
    "081 Tenor Sax",
    "082 Baritone Sax",
    "083 Clarinet",
    "084 Clarinet",
    "085 Oboe",
    "086 English Horn",
    "087 Bassoon",
    "088 Harmonica",
    "089 Trumpet",
    "090 Muted Trumpet",
    "091 Trombone",
    "092 Trombone",
    "093 French Horn",
    "094 French Horn",
    "095 Tuba",
    "096 Brass",
    "097 Brass 2",
    "098 Vibraphone",
    "099 Vibraphone",
    "100 Kalimba",
    "101 Tinkle Bell",
    "102 Glockenspiel",
    "103 Tubular-Bell",
    "104 Xylophone",
    "105 Marimba",
    "106 Koto",
    "107 Taisho Koto",
    "108 Shakuhachi",
    "109 Whistle",
    "110 Whistle",
    "111 Bottle Blow",
    "112 Pan Flute",
    "113 Timpani",
    "114 Melo Tom",
    "115 Melo Tom",
    "116 Synth Drum",
    "117 Synth Drum",
    "118 Taiko",
    "119 Taiko",
    "120 Reverse Cym.",
    "121 Castanets",
    "122 Tinkle Bell",
    "123 Orchestra Hit",
    "124 Telephone",
    "125 Bird",
    "126 Helicopter",
    "127 Bowed Glass",
    "128 Ice Rain"
};