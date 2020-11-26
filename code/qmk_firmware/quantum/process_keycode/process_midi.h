#ifndef PROCESS_MIDI_H
#define PROCESS_MIDI_H

#include "quantum.h"

bool process_midi(uint16_t keycode, keyrecord_t *record);

#define MIDI(n) ((n) | 0x6000)
#define MIDI12 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000

#define CHNL(note, channel) (note + (channel << 8))

#define SCALE (int8_t []){ 0 + (12*0), 2 + (12*0), 4 + (12*0), 5 + (12*0), 7 + (12*0), 9 + (12*0), 11 + (12*0), \
                           0 + (12*1), 2 + (12*1), 4 + (12*1), 5 + (12*1), 7 + (12*1), 9 + (12*1), 11 + (12*1), \
                           0 + (12*2), 2 + (12*2), 4 + (12*2), 5 + (12*2), 7 + (12*2), 9 + (12*2), 11 + (12*2), \
                           0 + (12*3), 2 + (12*3), 4 + (12*3), 5 + (12*3), 7 + (12*3), 9 + (12*3), 11 + (12*3), \
                           0 + (12*4), 2 + (12*4), 4 + (12*4), 5 + (12*4), 7 + (12*4), 9 + (12*4), 11 + (12*4), }

#define N_CN1  (0x600C + (12 * -1) + 0 )
#define N_CN1S (0x600C + (12 * -1) + 1 )
#define N_DN1F (0x600C + (12 * -1) + 1 )
#define N_DN1  (0x600C + (12 * -1) + 2 )
#define N_DN1S (0x600C + (12 * -1) + 3 )
#define N_EN1F (0x600C + (12 * -1) + 3 )
#define N_EN1  (0x600C + (12 * -1) + 4 )
#define N_FN1  (0x600C + (12 * -1) + 5 )
#define N_FN1S (0x600C + (12 * -1) + 6 )
#define N_GN1F (0x600C + (12 * -1) + 6 )
#define N_GN1  (0x600C + (12 * -1) + 7 )
#define N_GN1S (0x600C + (12 * -1) + 8 )
#define N_AN1F (0x600C + (12 * -1) + 8 )
#define N_AN1  (0x600C + (12 * -1) + 9 )
#define N_AN1S (0x600C + (12 * -1) + 10)
#define N_BN1F (0x600C + (12 * -1) + 10)
#define N_BN1  (0x600C + (12 * -1) + 11)
#define N_C0   (0x600C + (12 *  0) + 0 )
#define N_C0S  (0x600C + (12 *  0) + 1 )
#define N_D0F  (0x600C + (12 *  0) + 1 )
#define N_D0   (0x600C + (12 *  0) + 2 )
#define N_D0S  (0x600C + (12 *  0) + 3 )
#define N_E0F  (0x600C + (12 *  0) + 3 )
#define N_E0   (0x600C + (12 *  0) + 4 )
#define N_F0   (0x600C + (12 *  0) + 5 )
#define N_F0S  (0x600C + (12 *  0) + 6 )
#define N_G0F  (0x600C + (12 *  0) + 6 )
#define N_G0   (0x600C + (12 *  0) + 7 )
#define N_G0S  (0x600C + (12 *  0) + 8 )
#define N_A0F  (0x600C + (12 *  0) + 8 )
#define N_A0   (0x600C + (12 *  0) + 9 )
#define N_A0S  (0x600C + (12 *  0) + 10)
#define N_B0F  (0x600C + (12 *  0) + 10)
#define N_B0   (0x600C + (12 *  0) + 11)
#define N_C1   (0x600C + (12 *  1) + 0 )
#define N_C1S  (0x600C + (12 *  1) + 1 )
#define N_D1F  (0x600C + (12 *  1) + 1 )
#define N_D1   (0x600C + (12 *  1) + 2 )
#define N_D1S  (0x600C + (12 *  1) + 3 )
#define N_E1F  (0x600C + (12 *  1) + 3 )
#define N_E1   (0x600C + (12 *  1) + 4 )
#define N_F1   (0x600C + (12 *  1) + 5 )
#define N_F1S  (0x600C + (12 *  1) + 6 )
#define N_G1F  (0x600C + (12 *  1) + 6 )
#define N_G1   (0x600C + (12 *  1) + 7 )
#define N_G1S  (0x600C + (12 *  1) + 8 )
#define N_A1F  (0x600C + (12 *  1) + 8 )
#define N_A1   (0x600C + (12 *  1) + 9 )
#define N_A1S  (0x600C + (12 *  1) + 10)
#define N_B1F  (0x600C + (12 *  1) + 10)
#define N_B1   (0x600C + (12 *  1) + 11)
#define N_C2   (0x600C + (12 *  2) + 0 )
#define N_C2S  (0x600C + (12 *  2) + 1 )
#define N_D2F  (0x600C + (12 *  2) + 1 )
#define N_D2   (0x600C + (12 *  2) + 2 )
#define N_D2S  (0x600C + (12 *  2) + 3 )
#define N_E2F  (0x600C + (12 *  2) + 3 )
#define N_E2   (0x600C + (12 *  2) + 4 )
#define N_F2   (0x600C + (12 *  2) + 5 )
#define N_F2S  (0x600C + (12 *  2) + 6 )
#define N_G2F  (0x600C + (12 *  2) + 6 )
#define N_G2   (0x600C + (12 *  2) + 7 )
#define N_G2S  (0x600C + (12 *  2) + 8 )
#define N_A2F  (0x600C + (12 *  2) + 8 )
#define N_A2   (0x600C + (12 *  2) + 9 )
#define N_A2S  (0x600C + (12 *  2) + 10)
#define N_B2F  (0x600C + (12 *  2) + 10)
#define N_B2   (0x600C + (12 *  2) + 11)
#define N_C3   (0x600C + (12 *  3) + 0 )
#define N_C3S  (0x600C + (12 *  3) + 1 )
#define N_D3F  (0x600C + (12 *  3) + 1 )
#define N_D3   (0x600C + (12 *  3) + 2 )
#define N_D3S  (0x600C + (12 *  3) + 3 )
#define N_E3F  (0x600C + (12 *  3) + 3 )
#define N_E3   (0x600C + (12 *  3) + 4 )
#define N_F3   (0x600C + (12 *  3) + 5 )
#define N_F3S  (0x600C + (12 *  3) + 6 )
#define N_G3F  (0x600C + (12 *  3) + 6 )
#define N_G3   (0x600C + (12 *  3) + 7 )
#define N_G3S  (0x600C + (12 *  3) + 8 )
#define N_A3F  (0x600C + (12 *  3) + 8 )
#define N_A3   (0x600C + (12 *  3) + 9 )
#define N_A3S  (0x600C + (12 *  3) + 10)
#define N_B3F  (0x600C + (12 *  3) + 10)
#define N_B3   (0x600C + (12 *  3) + 11)
#define N_C4   (0x600C + (12 *  4) + 0 )
#define N_C4S  (0x600C + (12 *  4) + 1 )
#define N_D4F  (0x600C + (12 *  4) + 1 )
#define N_D4   (0x600C + (12 *  4) + 2 )
#define N_D4S  (0x600C + (12 *  4) + 3 )
#define N_E4F  (0x600C + (12 *  4) + 3 )
#define N_E4   (0x600C + (12 *  4) + 4 )
#define N_F4   (0x600C + (12 *  4) + 5 )
#define N_F4S  (0x600C + (12 *  4) + 6 )
#define N_G4F  (0x600C + (12 *  4) + 6 )
#define N_G4   (0x600C + (12 *  4) + 7 )
#define N_G4S  (0x600C + (12 *  4) + 8 )
#define N_A4F  (0x600C + (12 *  4) + 8 )
#define N_A4   (0x600C + (12 *  4) + 9 )
#define N_A4S  (0x600C + (12 *  4) + 10)
#define N_B4F  (0x600C + (12 *  4) + 10)
#define N_B4   (0x600C + (12 *  4) + 11)
#define N_C5   (0x600C + (12 *  5) + 0 )
#define N_C5S  (0x600C + (12 *  5) + 1 )
#define N_D5F  (0x600C + (12 *  5) + 1 )
#define N_D5   (0x600C + (12 *  5) + 2 )
#define N_D5S  (0x600C + (12 *  5) + 3 )
#define N_E5F  (0x600C + (12 *  5) + 3 )
#define N_E5   (0x600C + (12 *  5) + 4 )
#define N_F5   (0x600C + (12 *  5) + 5 )
#define N_F5S  (0x600C + (12 *  5) + 6 )
#define N_G5F  (0x600C + (12 *  5) + 6 )
#define N_G5   (0x600C + (12 *  5) + 7 )
#define N_G5S  (0x600C + (12 *  5) + 8 )
#define N_A5F  (0x600C + (12 *  5) + 8 )
#define N_A5   (0x600C + (12 *  5) + 9 )
#define N_A5S  (0x600C + (12 *  5) + 10)
#define N_B5F  (0x600C + (12 *  5) + 10)
#define N_B5   (0x600C + (12 *  5) + 11)
#define N_C6   (0x600C + (12 *  6) + 0 )
#define N_C6S  (0x600C + (12 *  6) + 1 )
#define N_D6F  (0x600C + (12 *  6) + 1 )
#define N_D6   (0x600C + (12 *  6) + 2 )
#define N_D6S  (0x600C + (12 *  6) + 3 )
#define N_E6F  (0x600C + (12 *  6) + 3 )
#define N_E6   (0x600C + (12 *  6) + 4 )
#define N_F6   (0x600C + (12 *  6) + 5 )
#define N_F6S  (0x600C + (12 *  6) + 6 )
#define N_G6F  (0x600C + (12 *  6) + 6 )
#define N_G6   (0x600C + (12 *  6) + 7 )
#define N_G6S  (0x600C + (12 *  6) + 8 )
#define N_A6F  (0x600C + (12 *  6) + 8 )
#define N_A6   (0x600C + (12 *  6) + 9 )
#define N_A6S  (0x600C + (12 *  6) + 10)
#define N_B6F  (0x600C + (12 *  6) + 10)
#define N_B6   (0x600C + (12 *  6) + 11)
#define N_C7   (0x600C + (12 *  7) + 0 )
#define N_C7S  (0x600C + (12 *  7) + 1 )
#define N_D7F  (0x600C + (12 *  7) + 1 )
#define N_D7   (0x600C + (12 *  7) + 2 )
#define N_D7S  (0x600C + (12 *  7) + 3 )
#define N_E7F  (0x600C + (12 *  7) + 3 )
#define N_E7   (0x600C + (12 *  7) + 4 )
#define N_F7   (0x600C + (12 *  7) + 5 )
#define N_F7S  (0x600C + (12 *  7) + 6 )
#define N_G7F  (0x600C + (12 *  7) + 6 )
#define N_G7   (0x600C + (12 *  7) + 7 )
#define N_G7S  (0x600C + (12 *  7) + 8 )
#define N_A7F  (0x600C + (12 *  7) + 8 )
#define N_A7   (0x600C + (12 *  7) + 9 )
#define N_A7S  (0x600C + (12 *  7) + 10)
#define N_B7F  (0x600C + (12 *  7) + 10)
#define N_B7   (0x600C + (12 *  7) + 11)
#define N_C8   (0x600C + (12 *  8) + 0 )
#define N_C8S  (0x600C + (12 *  8) + 1 )
#define N_D8F  (0x600C + (12 *  8) + 1 )
#define N_D8   (0x600C + (12 *  8) + 2 )
#define N_D8S  (0x600C + (12 *  8) + 3 )
#define N_E8F  (0x600C + (12 *  8) + 3 )
#define N_E8   (0x600C + (12 *  8) + 4 )
#define N_F8   (0x600C + (12 *  8) + 5 )
#define N_F8S  (0x600C + (12 *  8) + 6 )
#define N_G8F  (0x600C + (12 *  8) + 6 )
#define N_G8   (0x600C + (12 *  8) + 7 )
#define N_G8S  (0x600C + (12 *  8) + 8 )
#define N_A8F  (0x600C + (12 *  8) + 8 )
#define N_A8   (0x600C + (12 *  8) + 9 )
#define N_A8S  (0x600C + (12 *  8) + 10)
#define N_B8F  (0x600C + (12 *  8) + 10)
#define N_B8   (0x600C + (12 *  8) + 11)
#define N_C8   (0x600C + (12 *  8) + 0 )
#define N_C8S  (0x600C + (12 *  8) + 1 )
#define N_D8F  (0x600C + (12 *  8) + 1 )
#define N_D8   (0x600C + (12 *  8) + 2 )
#define N_D8S  (0x600C + (12 *  8) + 3 )
#define N_E8F  (0x600C + (12 *  8) + 3 )
#define N_E8   (0x600C + (12 *  8) + 4 )
#define N_F8   (0x600C + (12 *  8) + 5 )
#define N_F8S  (0x600C + (12 *  8) + 6 )
#define N_G8F  (0x600C + (12 *  8) + 6 )
#define N_G8   (0x600C + (12 *  8) + 7 )
#define N_G8S  (0x600C + (12 *  8) + 8 )
#define N_A8F  (0x600C + (12 *  8) + 8 )
#define N_A8   (0x600C + (12 *  8) + 9 )
#define N_A8S  (0x600C + (12 *  8) + 10)
#define N_B8F  (0x600C + (12 *  8) + 10)
#define N_B8   (0x600C + (12 *  8) + 11)

#endif