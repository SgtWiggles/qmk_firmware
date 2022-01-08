/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
// clang-format off

#include QMK_KEYBOARD_H

#include "muse.h"
#include "musical_notes.h"
#include "print.h"

#ifdef CLOSE_ENCOUNTERS_5_NOTE
#    undef CLOSE_ENCOUNTERS_5_NOTE
#endif
#ifdef DOE_A_DEER
#    undef DOE_A_DEER
#endif
#ifdef IN_LIKE_FLINT
#    undef IN_LIKE_FLINT
#endif
#ifdef IMPERIAL_MARCH
#    undef IMPERIAL_MARCH
#endif
#ifdef BASKET_CASE
#    undef BASKET_CASE
#endif
#ifdef COIN_SOUND
#    undef COIN_SOUND
#endif
#ifdef ONE_UP_SOUND
#    undef ONE_UP_SOUND
#endif
#ifdef SONIC_RING
#    undef SONIC_RING
#endif
#ifdef ZELDA_PUZZLE
#    undef ZELDA_PUZZLE
#endif
#ifdef ZELDA_TREASURE
#    undef ZELDA_TREASURE
#endif
#ifdef OVERWATCH_THEME
#    undef OVERWATCH_THEME
#endif
#ifdef MARIO_THEME
#    undef MARIO_THEME
#endif
#ifdef MARIO_GAMEOVER
#    undef MARIO_GAMEOVER
#endif
#ifdef MARIO_MUSHROOM
#    undef MARIO_MUSHROOM
#endif
#ifdef E1M1_DOOM
#    undef E1M1_DOOM
#endif
#ifdef DISNEY_SONG
#    undef DISNEY_SONG
#endif
#ifdef NUMBER_ONE
#    undef NUMBER_ONE
#endif
#ifdef CABBAGE_SONG
#    undef CABBAGE_SONG
#endif
#ifdef OLD_SPICE
#    undef OLD_SPICE
#endif
#ifdef VICTORY_FANFARE_SHORT
#    undef VICTORY_FANFARE_SHORT
#endif
#ifdef ALL_STAR
#    undef ALL_STAR
#endif
#ifdef RICK_ROLL
#    undef RICK_ROLL
#endif
#ifdef FF_PRELUDE
#    undef FF_PRELUDE
#endif
#ifdef TO_BOLDLY_GO
#    undef TO_BOLDLY_GO
#endif
#ifdef KATAWARE_DOKI
#    undef KATAWARE_DOKI
#endif
#ifdef MEGALOVANIA
#    undef MEGALOVANIA
#endif
#ifdef MICHISHIRUBE
#    undef MICHISHIRUBE
#endif
#ifdef LIEBESLEID
#    undef LIEBESLEID
#endif
#ifdef MELODIES_OF_LIFE
#    undef MELODIES_OF_LIFE
#endif
#ifdef EYES_ON_ME
#    undef EYES_ON_ME
#endif
#ifdef SONG_OF_THE_ANCIENTS
#    undef SONG_OF_THE_ANCIENTS
#endif
#ifdef NIER_AMUSEMENT_PARK
#    undef NIER_AMUSEMENT_PARK
#endif
#ifdef COPIED_CITY
#    undef COPIED_CITY
#endif
#ifdef VAGUE_HOPE_COLD_RAIN
#    undef VAGUE_HOPE_COLD_RAIN
#endif
#ifdef KAINE_SALVATION
#    undef KAINE_SALVATION
#endif
#ifdef WEIGHT_OF_THE_WORLD
#    undef WEIGHT_OF_THE_WORLD
#endif
#ifdef ISABELLAS_LULLABY
#    undef ISABELLAS_LULLABY
#endif
#ifdef TERRAS_THEME
#    undef TERRAS_THEME
#endif
#ifdef RENAI_CIRCULATION
#    undef RENAI_CIRCULATION
#endif
#ifdef PLATINUM_DISCO
#    undef PLATINUM_DISCO
#endif
#ifdef LP_NUMB
#    undef LP_NUMB
#endif


/*
#define SNOW_HALATION \
    H__NOTE(_E5),   \
    H__NOTE(_B5),   \
    H__NOTE(_GS5),  \
    H__NOTE(_A5),   \
    H__NOTE(_A5),   \
    H__NOTE(_GS5),  \
    H__NOTE(_A5),   \
    H__NOTE(_GS5),  \
    H__NOTE(_FS5),  \
    E__NOTE(_FS5),  \
    H__NOTE(_E5),   \
    H__NOTE(_E5),   \
    H__NOTE(_B5),   \
    H__NOTE(_GS5),  \
    H__NOTE(_A5),   \
    H__NOTE(_A5),   \
    H__NOTE(_B5),   \
    E__NOTE(_B5),   \
    H__NOTE(_CS6),  \
    H__NOTE(_B5),   \
    H__NOTE(_B5),   \
    H__NOTE(_B5),   \
    H__NOTE(_D6),   \
    H__NOTE(_CS6),  \
    H__NOTE(_B5),   \
    H__NOTE(_A5),
*/
#define SNOW_HALATION \
MUSICAL_NOTE(_A4, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_E5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_E5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_CS5, 227),\
MUSICAL_NOTE(_REST, 493),\
MUSICAL_NOTE(_GS5, 227),\
MUSICAL_NOTE(_REST, 253),\
MUSICAL_NOTE(_CS5, 227),\
MUSICAL_NOTE(_REST, 253),\
MUSICAL_NOTE(_CS5, 227),\
MUSICAL_NOTE(_REST, 493),\
MUSICAL_NOTE(_A5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_GS5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_A5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_GS5, 455),\
MUSICAL_NOTE(_REST, 25),\
MUSICAL_NOTE(_FS5, 227),\
MUSICAL_NOTE(_REST, 493),\
MUSICAL_NOTE(_D5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_A5, 227),\
MUSICAL_NOTE(_REST, 13),\
MUSICAL_NOTE(_D6, 227),


#define COIN_SOUND \
    E__NOTE(_A5  ),      \
    HD_NOTE(_E6  ),

#define ONE_UP_SOUND \
    Q__NOTE(_E6  ),  \
    Q__NOTE(_G6  ),  \
    Q__NOTE(_E7  ),  \
    Q__NOTE(_C7  ),  \
    Q__NOTE(_D7  ),  \
    Q__NOTE(_G7  ),

#define SONIC_RING \
    E__NOTE(_E6),  \
    E__NOTE(_G6),  \
    HD_NOTE(_C7),

#define ZELDA_PUZZLE \
    Q__NOTE(_G5),     \
    Q__NOTE(_FS5),    \
    Q__NOTE(_DS5),     \
    Q__NOTE(_A4),    \
    Q__NOTE(_GS4),     \
    Q__NOTE(_E5),     \
    Q__NOTE(_GS5),     \
    HD_NOTE(_C6),

#define ZELDA_TREASURE \
    Q__NOTE(_A4 ), \
    Q__NOTE(_AS4), \
    Q__NOTE(_B4 ), \
    HD_NOTE(_C5 ), \

#define OVERWATCH_THEME \
    HD_NOTE(_A4 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_A4 ), \
    HD_NOTE(_B4 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_B4 ), \
    W__NOTE(_CS5),

#define MARIO_THEME \
    Q__NOTE(_E5), \
    H__NOTE(_E5), \
    H__NOTE(_E5), \
    Q__NOTE(_C5), \
    H__NOTE(_E5), \
    W__NOTE(_G5), \
    Q__NOTE(_G4),

#define MARIO_GAMEOVER \
    HD_NOTE(_C5 ), \
    HD_NOTE(_G4 ), \
    H__NOTE(_E4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_B4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_AF4), \
    H__NOTE(_BF4), \
    H__NOTE(_AF4), \
    WD_NOTE(_G4 ),

#define MARIO_MUSHROOM \
    S__NOTE(_C5 ), \
    S__NOTE(_G4 ), \
    S__NOTE(_C5 ), \
    S__NOTE(_E5 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_C6 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_GS4), \
    S__NOTE(_C5 ), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_C6 ), \
    S__NOTE(_DS6), \
    S__NOTE(_GS6), \
    S__NOTE(_DS6), \
    S__NOTE(_AS4), \
    S__NOTE(_D5 ), \
    S__NOTE(_F5 ), \
    S__NOTE(_AS5), \
    S__NOTE(_D6 ), \
    S__NOTE(_F6 ), \
    S__NOTE(_AS6), \
    S__NOTE(_F6 )

#define E1M1_DOOM  \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_BF3), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_B3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    H__NOTE(_BF3),

#define DISNEY_SONG \
    H__NOTE(_G3 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_F4 ),  \
    H__NOTE(_E4 ),  \
    H__NOTE(_CS4),  \
    H__NOTE(_D4 ),  \
    W__NOTE(_A4 ),  \
    H__NOTE(_B3 ),  \
    H__NOTE(_B4 ),  \
    H__NOTE(_A4 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_FS4),  \
    H__NOTE(_G4 ),  \
    W__NOTE(_C5 ),  \
    H__NOTE(_D5 ),  \
    H__NOTE(_C5 ),  \
    H__NOTE(_B4 ),  \
    H__NOTE(_A4 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_F4 ),  \
    H__NOTE(_E4 ),  \
    H__NOTE(_D4 ),  \
    W__NOTE(_A4 ),  \
    W__NOTE(_B3 ),  \
    W__NOTE(_C4 ),

#define NUMBER_ONE \
    HD_NOTE(_F4 ), \
    Q__NOTE(_C5 ), \
    E__NOTE(_B4 ), \
    E__NOTE(_C5 ), \
    E__NOTE(_B4 ), \
    E__NOTE(_C5 ), \
    Q__NOTE(_B4 ), \
    Q__NOTE(_C5 ), \
    H__NOTE(_AF4), \
    HD_NOTE(_F4 ), \
    Q__NOTE(_F4 ), \
    Q__NOTE(_AF4), \
    Q__NOTE(_C5 ), \
    H__NOTE(_DF5), \
    H__NOTE(_AF4), \
    H__NOTE(_DF5), \
    H__NOTE(_EF5), \
    Q__NOTE(_C5 ), \
    Q__NOTE(_DF5), \
    Q__NOTE(_C5 ), \
    Q__NOTE(_DF5), \
    H__NOTE(_C5 ),

#define CABBAGE_SONG \
    H__NOTE(_C4),    \
    H__NOTE(_A4),    \
    H__NOTE(_B4),    \
    H__NOTE(_B4),    \
    H__NOTE(_A4),    \
    H__NOTE(_G4),    \
    H__NOTE(_E4),

#define OLD_SPICE  \
    Q__NOTE(_A4 ), \
    Q__NOTE(_A4 ), \
    H__NOTE(_B4 ), \
    H__NOTE(_D5 ), \
    H__NOTE(_CS5), \
    Q__NOTE(_E5 ), \
    H__NOTE(_FS5), \
    H__NOTE(_D5 ), \

#define VICTORY_FANFARE_SHORT \
    ED_NOTE(_C6), \
    ED_NOTE(_C6), \
    ED_NOTE(_C6), \
    ED_NOTE(_C6), \
    W__NOTE(_REST), \
    QD_NOTE(_GS5), \
    QD_NOTE(_AS5), \
    Q__NOTE(_C6), \
    Q__NOTE(_AS5), \
    Q__NOTE(_C6), \

#define ALL_STAR \
    H__NOTE(_AS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), \
    H__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_FS4), QD_NOTE(_AS4), \
    H__NOTE(_AS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), \
    H__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_AS4), H__NOTE(_REST),\
    W__NOTE(_AS4), W__NOTE(_CS5), H__NOTE(_B4),  H__NOTE(_CS5), H__NOTE(_DS5), W__NOTE(_FS5), \
    H__NOTE(_GS5), W__NOTE(_GS5), H__NOTE(_FS4), H__NOTE(_FS4), H__NOTE(_GS4), H__NOTE(_FS4), \
    H__NOTE(_AS4), W__NOTE(_GS4), W__NOTE(_GS4), W__NOTE(_FS4), W__NOTE(_GS4), \
    H__NOTE(_AS4), WD_NOTE(_DS4)

#define RICK_ROLL      \
    Q__NOTE(_F4),      \
    Q__NOTE(_G4),      \
    Q__NOTE(_BF4),     \
    Q__NOTE(_G4),      \
    HD_NOTE(_D5),      \
    HD_NOTE(_D5),      \
    W__NOTE(_C5),      \
    S__NOTE(_REST),    \
    Q__NOTE(_F4),      \
    Q__NOTE(_G4),      \
    Q__NOTE(_BF4),     \
    Q__NOTE(_G4),      \
    HD_NOTE(_C5),      \
    HD_NOTE(_C5),      \
    W__NOTE(_BF4),     \
    S__NOTE(_REST),    \
    Q__NOTE(_F4),      \
    Q__NOTE(_G4),      \
    Q__NOTE(_BF4),     \
    Q__NOTE(_G4),      \
    W__NOTE(_BF4),     \
    H__NOTE(_C5),      \
    H__NOTE(_A4),      \
    H__NOTE(_A4),      \
    H__NOTE(_G4),      \
    H__NOTE(_F4),      \
    H__NOTE(_F4),      \
    W__NOTE(_C5),      \
    W__NOTE(_BF4),

/* Prelude music from Final Fantasy */
#define FF_PRELUDE \
  M__NOTE(_C3, 20), M__NOTE(_D3, 20), M__NOTE(_E3, 20), M__NOTE(_G3, 20), \
  M__NOTE(_C4, 20), M__NOTE(_D4, 20), M__NOTE(_E4, 20), M__NOTE(_G4, 20), \
  M__NOTE(_C5, 20), M__NOTE(_D5, 20), M__NOTE(_E5, 20), M__NOTE(_G5, 20), \
  M__NOTE(_C6, 20), M__NOTE(_D6, 20), M__NOTE(_E6, 20), M__NOTE(_G6, 20), \
  M__NOTE(_C7, 20), M__NOTE(_G6, 20), M__NOTE(_E6, 20), M__NOTE(_D6, 20), \
  M__NOTE(_C6, 20), M__NOTE(_G5, 20), M__NOTE(_E5, 20), M__NOTE(_D5, 20), \
  M__NOTE(_C5, 20), M__NOTE(_G4, 20), M__NOTE(_E4, 20), M__NOTE(_D4, 20), \
  M__NOTE(_C4, 20), M__NOTE(_G3, 20), M__NOTE(_E3, 20), M__NOTE(_D3, 20), \
  M__NOTE(_A2, 20), M__NOTE(_B2, 20), M__NOTE(_C3, 20), M__NOTE(_E3, 20), \
  M__NOTE(_A3, 20), M__NOTE(_B3, 20), M__NOTE(_C4, 20), M__NOTE(_E4, 20), \
  M__NOTE(_A4, 20), M__NOTE(_B4, 20), M__NOTE(_C5, 20), M__NOTE(_E5, 20), \
  M__NOTE(_A5, 20), M__NOTE(_B5, 20), M__NOTE(_C6, 20), M__NOTE(_E6, 20), \
  M__NOTE(_A6, 20), M__NOTE(_E6, 20), M__NOTE(_C6, 20), M__NOTE(_B5, 20), \
  M__NOTE(_A5, 20), M__NOTE(_E5, 20), M__NOTE(_C5, 20), M__NOTE(_B4, 20), \
  M__NOTE(_A4, 20), M__NOTE(_E4, 20), M__NOTE(_C4, 20), M__NOTE(_B3, 20), \
  M__NOTE(_A3, 20), M__NOTE(_E3, 20), M__NOTE(_C3, 20), M__NOTE(_B2, 20),

/* Melody from the main themes of Star Trek TNG and the original series */
#define TO_BOLDLY_GO \
  W__NOTE(_BF3 ), \
  Q__NOTE(_EF4 ), \
  WD_NOTE(_AF4 ), \
  W__NOTE(_REST), \
  H__NOTE(_G4  ), \
  Q__NOTE(_EF4 ), \
  H__NOTE(_C4  ), \
  W__NOTE(_REST), \
  QD_NOTE(_F4  ), \
  M__NOTE(_BF4, 128),

#define KATAWARE_DOKI \
  W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_G5), H__NOTE(_G5), H__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_D5), Q__NOTE(_C5), \
  B__NOTE(_E5), H__NOTE(_C5), W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_C5), H__NOTE(_C6), Q__NOTE(_B5), \
  Q__NOTE(_A5), H__NOTE(_G5), Q__NOTE(_G5), Q__NOTE(_A5), W__NOTE(_G5), QD_NOTE(_E5), \
  QD_NOTE(_F5), Q__NOTE(_E5), WD_NOTE(_D5), H__NOTE(_C5), W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_G5), \
  H__NOTE(_G5), H__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_D5), Q__NOTE(_C5), B__NOTE(_E5), H__NOTE(_G4), \
  Q__NOTE(_C5), Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_C5), \
  Q__NOTE(_A4), H__NOTE(_C5), Q__NOTE(_C5), W__NOTE(_C5), Q__NOTE(_F4), Q__NOTE(_C5), \
  Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5), H__NOTE(_C5), Q__NOTE(_C5), H__NOTE(_G5), \
  Q__NOTE(_C5), HD_NOTE(_D5), H__NOTE(_G4), Q__NOTE(_C5), Q__NOTE(_D5), Q__NOTE(_E5), \
  H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_C5), Q__NOTE(_A4), H__NOTE(_C5), Q__NOTE(_C5), \
  W__NOTE(_C5), Q__NOTE(_F4), Q__NOTE(_C5), Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5), \
  H__NOTE(_C5), Q__NOTE(_C5), H__NOTE(_G5), Q__NOTE(_C5), HD_NOTE(_D5), \
  HD_NOTE(_G4), Q__NOTE(_C5), Q__NOTE(_D5), BD_NOTE(_C5),

#define CAMPANELLA \
  Q__NOTE(_DS4), E__NOTE(_DS4), E__NOTE(_DS5), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_DS5), E__NOTE(_DS5), \
  E__NOTE(_DS6), Q__NOTE(_CS5), E__NOTE(_CS5), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), \
  Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_GS4), \
  E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_G4), E__NOTE(_G4), E__NOTE(_DS6), Q__NOTE(_GS4), E__NOTE(_GS4), \
  E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_DS4), E__NOTE(_DS4), E__NOTE(_DS6), \
  Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_E5), E__NOTE(_E5), E__NOTE(_DS6), Q__NOTE(_DS5), \
  E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_CS5), E__NOTE(_CS5), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), \
  E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), \
  Q__NOTE(_GS4), E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_G4), E__NOTE(_G4), E__NOTE(_DS6), Q__NOTE(_GS4), \
  E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_DS4), E__NOTE(_DS4), \
  E__NOTE(_DS5), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_DS6), E__NOTE(_DS6), E__NOTE(_DS7), \
  Q__NOTE(_DS6), E__NOTE(_DS6), E__NOTE(_DS7), Q__NOTE(_CS6), E__NOTE(_CS6), E__NOTE(_DS7), Q__NOTE(_B5), \
  E__NOTE(_B5), E__NOTE(_DS7), Q__NOTE(_B5), E__NOTE(_B5), E__NOTE(_DS7), Q__NOTE(_AS5), E__NOTE(_AS5), \
  E__NOTE(_DS7), Q__NOTE(_GS5), E__NOTE(_GS5), E__NOTE(_DS7), Q__NOTE(_G5), E__NOTE(_G5), E__NOTE(_DS7), \
  Q__NOTE(_GS5), E__NOTE(_GS5), E__NOTE(_DS7), Q__NOTE(_AS5), E__NOTE(_AS5), E__NOTE(_DS7), Q__NOTE(_DS5), \
  E__NOTE(_DS5), E__NOTE(_DS7), W__NOTE(_DS6), W__NOTE(_GS5),

#define MEGALOVANIA \
  Q__NOTE(_D4), Q__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), \
  H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), \
  Q__NOTE(_B3), Q__NOTE(_B3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), \
  HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), \
  Q__NOTE(_G4),

#define MICHISHIRUBE \
  W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5), W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), BD_NOTE(_CS6), W__NOTE(_E6), \
  W__NOTE(_CS6), WD_NOTE(_B5), H__NOTE(_A5), BD_NOTE(_A5), W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5), \
  W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), W__NOTE(_A5), W__NOTE(_A6), W__NOTE(_GS6), H__NOTE(_CS6), \
  Q__NOTE(_E6), Q__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_A5), \
  Q__NOTE(_B5), BD_NOTE(_A5), \
  H__NOTE(_E6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6), \
  W__NOTE(_A6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_A6), H__NOTE(_B6), \
  B__NOTE(_CS7), H__NOTE(_E6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_E6), \
  H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_A6), H__NOTE(_GS6), B__NOTE(_E6), H__NOTE(_E6), \
  H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_E6), H__NOTE(_B6), \
  W__NOTE(_A6), H__NOTE(_A6), H__NOTE(_B6), H__NOTE(_CS7), B__NOTE(_CS7), H__NOTE(_E6), H__NOTE(_E6), \
  H__NOTE(_E6), H__NOTE(_E6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_CS6), H__NOTE(_CS6), Q__NOTE(_B5), \
  BD_NOTE(_B5), W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5), W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), \
  BD_NOTE(_CS6), W__NOTE(_E6), W__NOTE(_CS6), WD_NOTE(_B5), H__NOTE(_A5), BD_NOTE(_A5), W__NOTE(_A5), \
  H__NOTE(_A5), H__NOTE(_A5), W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), W__NOTE(_A5), W__NOTE(_A6), \
  W__NOTE(_GS6), H__NOTE(_CS6), Q__NOTE(_E6), Q__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6), \
  W__NOTE(_B5), H__NOTE(_A5), Q__NOTE(_B5), BD_NOTE(_A5),

#define LIEBESLEID \
  Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_E4), Q__NOTE(_FS4), Q__NOTE(_EF4), Q__NOTE(_G4), Q__NOTE(_D4), \
  Q__NOTE(_GS4), Q__NOTE(_CS4), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_E5), HD_NOTE(_G4), Q__NOTE(_E5), E__NOTE(_E5), \
  E__NOTE(_F5), ED_NOTE(_E5), HD_NOTE(_D5), Q__NOTE(_E5), H__NOTE(_F5), H__NOTE(_CS5), H__NOTE(_C5), W__NOTE(_G4), \
  H__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_D5), Q__NOTE(_D5), E__NOTE(_D5), E__NOTE(_E5), E__NOTE(_D5), HD_NOTE(_C5), \
  Q__NOTE(_D5), H__NOTE(_E5), H__NOTE(_B4), H__NOTE(_BF4), W__NOTE(_F4), H__NOTE(_C5), H__NOTE(_C5), HD_NOTE(_EF4), \
  Q__NOTE(_C5), E__NOTE(_C5), E__NOTE(_D5), E__NOTE(_C5), HD_NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_FS4), \
  H__NOTE(_F4), HD_NOTE(_E4), Q__NOTE(_A4), HD_NOTE(_FS4), Q__NOTE(_A4), HD_NOTE(_GS4), Q__NOTE(_B4), Q__NOTE(_A4), \
  Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_FS4), Q__NOTE(_CS4), Q__NOTE(_G4), \
  Q__NOTE(_C4), Q__NOTE(_GS4), Q__NOTE(_D4), WD_NOTE(_A4),

#define MELODIES_OF_LIFE \
  H__NOTE(_B5), W__NOTE(_GS6), H__NOTE(_GS6), H__NOTE(_FS6), W__NOTE(_E6), H__NOTE(_E6), H__NOTE(_DS6), H__NOTE(_CS6), H__NOTE(_DS6), \
  H__NOTE(_E6), H__NOTE(_FS6), WD_NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_E6), H__NOTE(_CS6), \
  H__NOTE(_CS6), H__NOTE(_B5), H__NOTE(_E6), H__NOTE(_GS6), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_E6), H__NOTE(_GS6), \
  WD_NOTE(_FS6), H__NOTE(_GS6), WD_NOTE(_B6), H__NOTE(_CS7), H__NOTE(_B6), H__NOTE(_A6), H__NOTE(_A6), H__NOTE(_GS6), \
  H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_FS6), H__NOTE(_GS6), WD_NOTE(_A6), Q__NOTE(_GS6), Q__NOTE(_FS6), Q__NOTE(_FS6), \
  Q__NOTE(_E6), W__NOTE(_E6), Q__NOTE(_B5), Q__NOTE(_CS6), WD_NOTE(_E6), Q__NOTE(_E6), Q__NOTE(_FS6), W__NOTE(_GS6), \
  H__NOTE(_A6), B__NOTE(_FS6),

#define EYES_ON_ME \
  Q__NOTE(_A6), Q__NOTE(_G6), Q__NOTE(_FS6), Q__NOTE(_D6), Q__NOTE(_A5), Q__NOTE(_G5), Q__NOTE(_FS5), Q__NOTE(_D5), \
  W__NOTE(_A4), W__NOTE(_D5), W__NOTE(_E5), W__NOTE(_FS5), H__NOTE(_A5), M__NOTE(_FS5, 256), H__NOTE(_E5), \
  H__NOTE(_FS5), B__NOTE(_D5), H__NOTE(_B4), H__NOTE(_D5), BD_NOTE(_E5), H__NOTE(_A4), W__NOTE(_D5), W__NOTE(_E5), \
  W__NOTE(_FS5), H__NOTE(_A5), BD_NOTE(_CS6), W__NOTE(_A5), H__NOTE(_CS6), H__NOTE(_D6), WD_NOTE(_B5), \
  H__NOTE(_A5), H__NOTE(_B5), B__NOTE(_A5), WD_NOTE(_B4), W__NOTE(_CS5), WD_NOTE(_D6), H__NOTE(_D6), \
  W__NOTE(_CS6), H__NOTE(_B5), H__NOTE(_B5), H__NOTE(_B5), B__NOTE(_A5), H__NOTE(_A5), H__NOTE(_FS5), H__NOTE(_A5), \
  WD_NOTE(_B5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_D5), W__NOTE(_FS5), WD_NOTE(_E5), \
  H__NOTE(_CS4), H__NOTE(_E4), H__NOTE(_A4), H__NOTE(_CS5), W__NOTE(_D5), W__NOTE(_E5), W__NOTE(_FS5), H__NOTE(_G5), \
  H__NOTE(_A5), B__NOTE(_A5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_D5), BD_NOTE(_FS5), W__NOTE(_E5), B__NOTE(_D5), \
  H__NOTE(_G4), H__NOTE(_FS4), W__NOTE(_E4), BD_NOTE(_D4),

#define SONG_OF_THE_ANCIENTS \
  H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_C6), H__NOTE(_D6), \
  H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_G6), H__NOTE(_G5), \
  H__NOTE(_AF5), B__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), \
  B__NOTE(_EF6), WD_NOTE(_G5), WD_NOTE(_BF5), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), \
  H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_C6), WD_NOTE(_B5), WD_NOTE(_G5), WD_NOTE(_G6), W__NOTE(_G6), H__NOTE(_AF6), \
  W__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), \
  WD_NOTE(_E6), H__NOTE(_E6), H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), \
  H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), BD_NOTE(_G6), WD_NOTE(_B5), WD_NOTE(_G6), \
  W__NOTE(_G6), H__NOTE(_AF6), W__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), \
  H__NOTE(_EF6), B__NOTE(_EF6), WD_NOTE(_E6), H__NOTE(_E6), H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), \
  W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), H__NOTE(_G6), W__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), BD_NOTE(_EF6), \
  WD_NOTE(_F6), WD_NOTE(_G6), BD_NOTE(_C7),

#define NIER_AMUSEMENT_PARK \
  H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6), Q__NOTE(_EF6), WD_NOTE(_D6), \
  Q__NOTE(_G5), Q__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6), H__NOTE(_A6), W__NOTE(_BF6), W__NOTE(_EF7), \
  H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6), Q__NOTE(_EF6), \
  WD_NOTE(_D6), Q__NOTE(_G5), Q__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6), H__NOTE(_A6), W__NOTE(_BF6), \
  H__NOTE(_EF7), H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5), \
  H__NOTE(_EF5), WD_NOTE(_D5), H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), WD_NOTE(_D5), W__NOTE(_D5), B__NOTE(_G5), \
  H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5), H__NOTE(_EF5), \
  W__NOTE(_D5), W__NOTE(_C5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_D5), W__NOTE(_G5), B__NOTE(_D5), B__NOTE(_E5), \
  W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), \
  B__NOTE(_D5), B__NOTE(_BF4), W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), \
  H__NOTE(_EF5), H__NOTE(_F5), W__NOTE(_D5), W__NOTE(_BF5), W__NOTE(_G5), W__NOTE(_D5), W__NOTE(_EF5), QD_NOTE(_C5), \
  QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), B__NOTE(_D5), B__NOTE(_BF4), \
  B__NOTE(_C5), H__NOTE(_C5), H__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_F5), WD_NOTE(_G5), H__NOTE(_C5), W__NOTE(_AF5), \
  WD_NOTE(_G5),

#define COPIED_CITY \
  Q__NOTE(_F6), Q__NOTE(_BF5), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_G6), Q__NOTE(_AF6), Q__NOTE(_EF6), Q__NOTE(_BF5), \
  Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_D6), Q__NOTE(_C6), \
  Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_EF5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_BF4), H__NOTE(_C5), \
  Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_G6), Q__NOTE(_EF6), Q__NOTE(_BF6), \
  Q__NOTE(_AF6), Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF6), Q__NOTE(_BF5), \
  Q__NOTE(_B6), Q__NOTE(_DF6), Q__NOTE(_EF6), Q__NOTE(_F6), Q__NOTE(_AF6), Q__NOTE(_EF7), Q__NOTE(_F6), Q__NOTE(_C6), \
  Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), \
  Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_C5), Q__NOTE(_BF4), Q__NOTE(_G4), \
  Q__NOTE(_F4), Q__NOTE(_G4), H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), \
  Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), \
  Q__NOTE(_AF4), Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF5), Q__NOTE(_F5), \
  Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_G6), Q__NOTE(_EF6), WD_NOTE(_F7),

#define VAGUE_HOPE_COLD_RAIN \
  HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_CS6), HD_NOTE(_D6), HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_D6), WD_NOTE(_A6), \
  HD_NOTE(_FS6), HD_NOTE(_G6), HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), Q__NOTE(_D5), Q__NOTE(_CS5), Q__NOTE(_A4), \
  W__NOTE(_FS4), H__NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), HD_NOTE(_CS6), HD_NOTE(_E6), HD_NOTE(_D6), Q__NOTE(_CS6), \
  Q__NOTE(_D6), Q__NOTE(_E6), W__NOTE(_FS6), H__NOTE(_CS6), WD_NOTE(_D6), HD_NOTE(_D6), Q__NOTE(_D6), H__NOTE(_E6), \
  WD_NOTE(_CS6), HD_NOTE(_AS5), HD_NOTE(_B5), HD_NOTE(_B5), Q__NOTE(_B4), Q__NOTE(_CS5), Q__NOTE(_D5), HD_NOTE(_A5), \
  Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_D5), Q__NOTE(_CS5), Q__NOTE(_A4), H__NOTE(_FS4), \
  HD_NOTE(_FS6), HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_CS5), Q__NOTE(_D5), Q__NOTE(_A5), \
  HD_NOTE(_FS5), Q__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_GS6), HD_NOTE(_A6), Q__NOTE(_B6), H__NOTE(_A6), H__NOTE(_GS6), \
  H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_CS6), H__NOTE(_FS6), E__NOTE(_FS5), E__NOTE(_CS5), Q__NOTE(_B4), H__NOTE(_AS4), \
  W__NOTE(_FS5), HD_NOTE(_FS6), HD_NOTE(_B5), H__NOTE(_D6), H__NOTE(_CS6), H__NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_E6), \
  W__NOTE(_D6), Q__NOTE(_CS6), Q__NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), WD_NOTE(_B6), HD_NOTE(_E6), HD_NOTE(_FS6), \
  HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_CS6), H__NOTE(_D6), H__NOTE(_E6), H__NOTE(_FS6), HD_NOTE(_E6), \
  HD_NOTE(_CS6), H__NOTE(_FS6), H__NOTE(_A6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_FS6), BD_NOTE(_B6),

#define KAINE_SALVATION \
  BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_F5), BD_NOTE(_D5), BD_NOTE(_BF4), BD_NOTE(_C5), W__NOTE(_BF4), W__NOTE(_C5), \
  W__NOTE(_D5), BD_NOTE(_C5), BD_NOTE(_F4), BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_F5), BD_NOTE(_D5), \
  BD_NOTE(_BF4), WD_NOTE(_EF5), WD_NOTE(_BF4), W__NOTE(_A4), W__NOTE(_BF4), W__NOTE(_C5), B__NOTE(_C5), H__NOTE(_B4), \
  H__NOTE(_C5), BD_NOTE(_D5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), \
  H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), \
  H__NOTE(_A5), WD_NOTE(_G5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), \
  H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), \
  BD_NOTE(_E5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), \
  H__NOTE(_G5), H__NOTE(_FS5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), H__NOTE(_A5), \
  WD_NOTE(_G5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), \
  H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_D6), WD_NOTE(_D6), W__NOTE(_F5), H__NOTE(_C6), H__NOTE(_C6), \
  H__NOTE(_BF5), H__NOTE(_A5), WD_NOTE(_G5), WD_NOTE(_F5), WD_NOTE(_G5), WD_NOTE(_A5), BD_NOTE(_G5),

#define WEIGHT_OF_THE_WORLD \
  H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), WD_NOTE(_G6), H__NOTE(_B5), Q__NOTE(_C6), \
  Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), H__NOTE(_G6), Q__NOTE(_A6), W__NOTE(_G6), Q__NOTE(_C6), \
  Q__NOTE(_D6), H__NOTE(_E6), Q__NOTE(_F6), H__NOTE(_E6), H__NOTE(_F6), HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), \
  H__NOTE(_D6), WD_NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5), WD_NOTE(_B5), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), \
  Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), WD_NOTE(_G6), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), \
  H__NOTE(_C6), H__NOTE(_G6), H__NOTE(_G6), Q__NOTE(_A6), W__NOTE(_G6), Q__NOTE(_C6), Q__NOTE(_D6), H__NOTE(_E6), \
  Q__NOTE(_F6), H__NOTE(_E6), H__NOTE(_F6), HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_D6), BD_NOTE(_D6), \
  Q__NOTE(_E6), Q__NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), Q__NOTE(_C6), H__NOTE(_C6), HD_NOTE(_C6), \
  H__NOTE(_B5), H__NOTE(_C6), H__NOTE(_E6), H__NOTE(_G6), WD_NOTE(_G6), Q__NOTE(_C6), B__NOTE(_C6), H__NOTE(_B6), \
  Q__NOTE(_C7), BD_NOTE(_C7),

#define ISABELLAS_LULLABY \
  W__NOTE(_BF4), B__NOTE(_D5), W__NOTE(_EF5), B__NOTE(_F5), W__NOTE(_BF5), B__NOTE(_AF5), W__NOTE(_GF5), BD_NOTE(_F5), B__NOTE(_CS5), \
  W__NOTE(_F5), B__NOTE(_C5), W__NOTE(_EF5), BD_NOTE(_BF4), W__NOTE(_AF4), W__NOTE(_BF4), W__NOTE(_F5), W__NOTE(_GF5), \
  WD_NOTE(_AF5), H__NOTE(_FS5), W__NOTE(_F5), B__NOTE(_EF5), W__NOTE(_C6), B__NOTE(_AF5), W__NOTE(_F5), WD_NOTE(_AF5), \
  H__NOTE(_BF5), W__NOTE(_F5), WD_NOTE(_AF5), H__NOTE(_BF5), W__NOTE(_F5), W__NOTE(_EF5), W__NOTE(_BF4), W__NOTE(_AF5), \
  WD_NOTE(_F5), H__NOTE(_F5), H__NOTE(_BF5), H__NOTE(_C6), WD_NOTE(_CS6), H__NOTE(_C6), W__NOTE(_BF5), W__NOTE(_AF5), \
  W__NOTE(_F5), W__NOTE(_EF5), WD_NOTE(_EF5), H__NOTE(_DF5), W__NOTE(_AF5), BD_NOTE(_F5), WD_NOTE(_BF4), H__NOTE(_C5), \
  W__NOTE(_CS5), W__NOTE(_EF5), W__NOTE(_AF4), W__NOTE(_EF5), WD_NOTE(_GF5), H__NOTE(_F5), W__NOTE(_EF5), WD_NOTE(_F5), \
  H__NOTE(_F5), H__NOTE(_BF5), H__NOTE(_C6), WD_NOTE(_CS6), H__NOTE(_C6), W__NOTE(_CS6), W__NOTE(_EF6), W__NOTE(_AF5), \
  W__NOTE(_EF6), WD_NOTE(_GF6), H__NOTE(_F6), W__NOTE(_EF6), B__NOTE(_DF6), H__NOTE(_GF6), H__NOTE(_AF6), BD_NOTE(_DF6), \
  B__NOTE(_BF5), W__NOTE(_F6), BD_NOTE(_C6), W__NOTE(_AF5), WD_NOTE(_EF6), H__NOTE(_DF6), W__NOTE(_C6), B__NOTE(_BF5),

#define FANTASIE_IMPROMPTU \
  E__NOTE(_GS4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), \
  E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_GS4), E__NOTE(_A4), \
  E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), \
  E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_A4), E__NOTE(_CS5), E__NOTE(_DS5), \
  E__NOTE(_FS5), E__NOTE(_A5), E__NOTE(_CS6), E__NOTE(_DS6), E__NOTE(_B6), E__NOTE(_A6), E__NOTE(_GS6), E__NOTE(_FS6), \
  E__NOTE(_E6), E__NOTE(_DS6), E__NOTE(_FS6), E__NOTE(_CS6), E__NOTE(_C5), E__NOTE(_DS6), E__NOTE(_A5), E__NOTE(_GS5), \
  E__NOTE(_FS5), E__NOTE(_A5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_FS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_DS5), \
  E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_B4), E__NOTE(_A4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_A4), E__NOTE(_GS4), \
  E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), \
  E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_GS4), E__NOTE(_AS4), E__NOTE(_GS4), E__NOTE(_REST), \
  E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), \
  E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_DS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_REST), E__NOTE(_DS5), \
  E__NOTE(_B5), E__NOTE(_AS5), E__NOTE(_GS5), E__NOTE(_REST), E__NOTE(_E6), E__NOTE(_DS6), E__NOTE(_CS6), E__NOTE(_B5), \
  E__NOTE(_AS5), E__NOTE(_GS5), E__NOTE(_REST), E__NOTE(_AS5), WD_NOTE(_GS5),

#define TERRAS_THEME \
  Q__NOTE(_GS5), Q__NOTE(_AS5), Q__NOTE(_B5), Q__NOTE(_EF6), BD_NOTE(_B5), Q__NOTE(_AS5), Q__NOTE(_GS5), W__NOTE(_AS5), \
  BD_NOTE(_DS5), Q__NOTE(_AF5), Q__NOTE(_BF5), Q__NOTE(_B5), Q__NOTE(_DS6), BD_NOTE(_B5), \
  Q__NOTE(_BF5), Q__NOTE(_AF5), W__NOTE(_AS5), BD_NOTE(_DS6), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_DS6), \
  Q__NOTE(_FS6), BD_NOTE(_DS6), Q__NOTE(_CS6), Q__NOTE(_B5), W__NOTE(_CS6), BD_NOTE(_FS5), \
  Q__NOTE(_B5), Q__NOTE(_AS5), BD_NOTE(_GS5), Q__NOTE(_B5), Q__NOTE(_AS5), BD_NOTE(_GS5),

#define RENAI_CIRCULATION \
  Q__NOTE(_E5), Q__NOTE(_B5), HD_NOTE(_CS6), HD_NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), HD_NOTE(_E6), Q__NOTE(_E6), Q__NOTE(_B5), \
  HD_NOTE(_CS5), HD_NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), HD_NOTE(_GS6), Q__NOTE(_E6), Q__NOTE(_B5), HD_NOTE(_CS6), \
  H__NOTE(_CS5), Q__NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_FS6), HD_NOTE(_E6), \
  H__NOTE(_E5), Q__NOTE(_E6), H__NOTE(_CS6), WD_NOTE(_GS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_FS6), H__NOTE(_G6), \
  HD_NOTE(_GS5), HD_NOTE(_E6), Q__NOTE(_B5), Q__NOTE(_CS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_FS6), H__NOTE(_G6), \
  HD_NOTE(_GS5), HD_NOTE(_E6), H__NOTE(_CS6), H__NOTE(_E6), Q__NOTE(_CS6), HD_NOTE(_E6), H__NOTE(_CS6), H__NOTE(_E6), \
  Q__NOTE(_CS5), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_A6), H__NOTE(_GS6), HD_NOTE(_E6), H__NOTE(_FS6), WD_NOTE(_E6), \
  H__NOTE(_GS5), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_A6), W__NOTE(_B6), H__NOTE(_GS6), H__NOTE(_A6), H__NOTE(_GS6), \
  H__NOTE(_A5), W__NOTE(_B6), H__NOTE(_B6), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_A6), Q__NOTE(_GS6), H__NOTE(_E6), \
  H__NOTE(_E5), Q__NOTE(_E6), H__NOTE(_CS6), Q__NOTE(_GS6), H__NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_CS6), \
  Q__NOTE(_E5), H__NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_FS6), WD_NOTE(_E6), W__NOTE(_B6), W__NOTE(_GS6), \
  W__NOTE(_FS5), H__NOTE(_GS6), H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_FS6), B__NOTE(_GS6), H__NOTE(_GS6), \
  W__NOTE(_CS6), W__NOTE(_GS6), W__NOTE(_E6), H__NOTE(_GS6), H__NOTE(_GS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), \
  H__NOTE(_FS5), WD_NOTE(_E6),

#define PLATINUM_DISCO \
  H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), W__NOTE(_GS6), H__NOTE(_DS6), H__NOTE(_FS6), \
  H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_CS6), H__NOTE(_FS6), WD_NOTE(_FS6), H__NOTE(_CS6), W__NOTE(_DS6), H__NOTE(_FS6), \
  H__NOTE(_AS6), W__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_GS6), Q__NOTE(_AS6), Q__NOTE(_CS7), Q__NOTE(_GS6), Q__NOTE(_AS6), \
  Q__NOTE(_FS6), Q__NOTE(_GS6), Q__NOTE(_DS6), Q__NOTE(_FS6), Q__NOTE(_CS6), Q__NOTE(_DS6), Q__NOTE(_AS5), Q__NOTE(_CS6), \
  H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), W__NOTE(_GS6), H__NOTE(_DS6), \
  H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_CS7), H__NOTE(_GS6), WD_NOTE(_FS6), H__NOTE(_CS6), W__NOTE(_DS6), \
  H__NOTE(_FS6), H__NOTE(_AS6), WD_NOTE(_GS6), H__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_GS5), Q__NOTE(_AS5), Q__NOTE(_CS6), \
  Q__NOTE(_FS6), Q__NOTE(_GS6), Q__NOTE(_AS6), Q__NOTE(_CS7), WD_NOTE(_FS7), H__NOTE(_CS6), WD_NOTE(_DS6), H__NOTE(_CS6), \
  WD_NOTE(_DS6), H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), WD_NOTE(_GS6), H__NOTE(_FS6), \
  WD_NOTE(_GS6), H__NOTE(_FS6), WD_NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), \
  WD_NOTE(_FS6), H__NOTE(_CS6), WD_NOTE(_DS6), H__NOTE(_CS6), WD_NOTE(_DS6), H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_FS6), \
  H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_CS7), H__NOTE(_AS6), H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_DS6), W__NOTE(_FS6), \
  H__NOTE(_CS6), H__NOTE(_DS6), W__NOTE(_FS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_FS6), \
  B__NOTE(_FS6),

#define NOCTURNE_OP_9_NO_1 \
  H__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_DF6), H__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_GF5), W__NOTE(_F5), W__NOTE(_F5), W__NOTE(_F5), \
  W__NOTE(_F5), H__NOTE(_GF5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_C5), B__NOTE(_DF5), W__NOTE(_BF4), Q__NOTE(_BF5), \
  Q__NOTE(_C6), Q__NOTE(_DF6), Q__NOTE(_A5), Q__NOTE(_BF5), Q__NOTE(_A5), Q__NOTE(_GS5), Q__NOTE(_A5), Q__NOTE(_C6), \
  Q__NOTE(_BF5), Q__NOTE(_GF5), Q__NOTE(_F5), Q__NOTE(_GF5), Q__NOTE(_E5), Q__NOTE(_F5), Q__NOTE(_BF5), Q__NOTE(_A5), \
  Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_GF5), Q__NOTE(_F5), Q__NOTE(_E5), Q__NOTE(_EF5), Q__NOTE(_D5), Q__NOTE(_DF5), \
  Q__NOTE(_C5), Q__NOTE(_DF5), Q__NOTE(_C5), Q__NOTE(_B4), Q__NOTE(_C5), Q__NOTE(_F5), Q__NOTE(_E5), Q__NOTE(_EF5), \
  B__NOTE(_DF5), W__NOTE(_BF4), W__NOTE(_BF5), W__NOTE(_BF5), W__NOTE(_BF5), BD_NOTE(_AF5), W__NOTE(_DF5), H__NOTE(_BF4), \
  H__NOTE(_C5), H__NOTE(_DF5), H__NOTE(_GF5), H__NOTE(_GF5), BD_NOTE(_F5), W__NOTE(_EF5), H__NOTE(_F5), H__NOTE(_EF5), \
  H__NOTE(_DF5), H__NOTE(_A4), B__NOTE(_AF4), W__NOTE(_DF5), W__NOTE(_EF5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_DF5), \
  H__NOTE(_EF5), BD_NOTE(_F5),


enum preonic_layers {
  _QWERTY,
  _MAPLE_RS,
  _LOWER,
  _RAISE,
  _FN,
  _ADJUST,
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  MAPLE_RS,
  LOWER,
  RAISE,
  BACKLIT,
  FN,
  SNOW_HALA_BUTTON,
  RENAI_BUTTON,
  PLATINUM_BUTTON,
  RICK_BUTTON,
  ALL_STAR_BUTTON,
  FF_PRELUDE_BUTTON,
  CEG_BUTTON,
  SHUT_UP_BUTTON,
};


enum preonic_tap_dance {
    TD_PLAY_NEXT_PREV
};

float snow_halation[][2] = {
    {880.00f, 23},
};

float renai[][2] = {};
float platinum[][2] = {};
float rick[][2] = {};
float allstar[][2] = {};
float ffprelude[][2] = {};

// uint16_t cegEnds[AUDIO_MAX_SIMULTANEOUS_TONES] =  {4, 8, 12, 12, 12, 12, 12, 12, };

uint16_t ceg6NumChannels = 2;
uint16_t ceg6Ends[3] = {1959, 2997};
float ceg6[][2] = {
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{880.00f, 1139},
{0.00f, 301},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{830.61f, 911},
{0.00f, 49},
{987.77f, 911},
{0.00f, 49},
{880.00f, 911},
{0.00f, 289},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{659.26f, 683},
{0.00f, 37},
{739.99f, 683},
{0.00f, 37},
{1108.73f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{440.00f, 1823},
{0.00f, 97},
{1318.51f, 1823},
{0.00f, 97},
{659.26f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{246.94f, 455},
{0.00f, 25},
{246.94f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{277.18f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{174.61f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{277.18f, 227},
{0.00f, 13},
{349.23f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{1108.73f, 227},
{0.00f, 13},
{207.65f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 13},
{207.65f, 227},
{0.00f, 13},
{277.18f, 1139},
{0.00f, 61},
{659.26f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 253},
{123.47f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{207.65f, 227},
{0.00f, 13},
{329.63f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{293.66f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{207.65f, 683},
{0.00f, 37},
{220.00f, 227},
{0.00f, 253},
{440.00f, 455},
{0.00f, 265},
{185.00f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{329.63f, 455},
{0.00f, 25},
{415.30f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 493},
{554.37f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 493},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{61.74f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{61.74f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{61.74f, 227},
{0.00f, 13},
{369.99f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{146.83f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{415.30f, 683},
{0.00f, 37},
{329.63f, 455},
{0.00f, 25},
{110.00f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{739.99f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{123.47f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{293.66f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 253},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{138.59f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{155.56f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{1318.51f, 239},
{0.00f, 241},
{1318.51f, 239},
{0.00f, 241},
{1318.51f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{1174.66f, 227},
{0.00f, 13},
{1244.51f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 493},
{987.77f, 227},
{0.00f, 13},
{987.77f, 21},
{0.00f, 3},
{932.33f, 21},
{0.00f, 3},
{880.00f, 21},
{0.00f, 3},
{830.61f, 21},
{0.00f, 3},
{783.99f, 21},
{0.00f, 3},
{739.99f, 19},
{0.00f, 11},
{698.46f, 14},
{0.00f, 16},
{659.26f, 21},
{0.00f, 24},
{587.33f, 13},
{0.00f, 17},
{554.37f, 13},
{0.00f, 2},
{523.25f, 44},
{0.00f, 6},
{466.16f, 24},
{0.00f, 3},
{440.00f, 24},
{0.00f, 2},
{415.30f, 24},
{0.00f, 3},
{392.00f, 24},
{0.00f, 3},
{369.99f, 24},
{0.00f, 2},
{349.23f, 24},
{0.00f, 3},
{329.63f, 227},
{0.00f, 13},
{55.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{92.50f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{82.41f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{1108.73f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{55.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{82.41f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{77.78f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{1108.73f, 359},
{0.00f, 361},
{440.00f, 455},
{0.00f, 25},
{554.37f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{174.61f, 227},
{0.00f, 13},
{174.61f, 455},
{0.00f, 505},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{830.61f, 239},
{0.00f, 241},
{554.37f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 683},
{0.00f, 37},
{138.59f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{146.83f, 1823},
{0.00f, 97},
{185.00f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 253},
{659.26f, 227},
{0.00f, 13},
{207.65f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{55.00f, 455},
{0.00f, 25},
{110.00f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{92.50f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{92.50f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{1479.98f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{277.18f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 493},
{739.99f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 493},
{146.83f, 455},
{0.00f, 25},
{277.18f, 227},
{0.00f, 13},
{246.94f, 455},
{0.00f, 25},
{246.94f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{493.88f, 455},
{0.00f, 25},
{554.37f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{554.37f, 227},
{0.00f, 13},
{554.37f, 1025},
{0.00f, 415},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{554.37f, 683},
{0.00f, 37},
{587.33f, 227},
{0.00f, 13},
{440.00f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{293.66f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{207.65f, 683},
{0.00f, 37},
{220.00f, 227},
{0.00f, 253},
{440.00f, 455},
{0.00f, 25},
{493.88f, 911},
{0.00f, 49},
{415.30f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{392.00f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{349.23f, 227},
{0.00f, 13},
{277.18f, 227},
{0.00f, 13},
{349.23f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 227},
{0.00f, 13},
{61.74f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{61.74f, 227},
{0.00f, 13},
{369.99f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{146.83f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{415.30f, 683},
{0.00f, 37},
{329.63f, 455},
{0.00f, 25},
{110.00f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{739.99f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{123.47f, 227},
{0.00f, 13},
{220.00f, 227},
{0.00f, 13},
{293.66f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 253},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{138.59f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{155.56f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{164.81f, 239},
{0.00f, 241},
{1318.51f, 239},
{0.00f, 241},
{164.81f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{1174.66f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 493},
{987.77f, 227},
{0.00f, 13},
{987.77f, 21},
{0.00f, 3},
{932.33f, 21},
{0.00f, 3},
{880.00f, 21},
{0.00f, 3},
{830.61f, 21},
{0.00f, 3},
{783.99f, 21},
{0.00f, 3},
{739.99f, 19},
{0.00f, 11},
{698.46f, 14},
{0.00f, 16},
{659.26f, 21},
{0.00f, 24},
{587.33f, 13},
{0.00f, 17},
{554.37f, 13},
{0.00f, 2},
{523.25f, 44},
{0.00f, 6},
{466.16f, 24},
{0.00f, 3},
{440.00f, 24},
{0.00f, 2},
{415.30f, 24},
{0.00f, 3},
{392.00f, 24},
{0.00f, 3},
{369.99f, 24},
{0.00f, 2},
{349.23f, 24},
{0.00f, 3},
{329.63f, 227},
{0.00f, 13},
{55.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{880.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{82.41f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{1108.73f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{1318.51f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{92.50f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{82.41f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{77.78f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{1108.73f, 359},
{0.00f, 361},
{440.00f, 455},
{0.00f, 25},
{554.37f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{174.61f, 227},
{0.00f, 13},
{174.61f, 455},
{0.00f, 505},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{830.61f, 239},
{0.00f, 241},
{554.37f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 683},
{0.00f, 37},
{138.59f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{146.83f, 1823},
{0.00f, 97},
{98.00f, 911},
{0.00f, 49},
{987.77f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{174.61f, 455},
{0.00f, 25},
{174.61f, 227},
{0.00f, 13},
{196.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{659.26f, 341},
{0.00f, 19},
{659.26f, 341},
{0.00f, 19},
{587.33f, 227},
{0.00f, 13},
{493.88f, 341},
{0.00f, 19},
{523.25f, 341},
{0.00f, 19},
{587.33f, 227},
{0.00f, 13},
{587.33f, 455},
{0.00f, 25},
{523.25f, 227},
{0.00f, 13},
{493.88f, 455},
{0.00f, 25},
{392.00f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{392.00f, 1139},
{0.00f, 61},
{783.99f, 911},
{0.00f, 49},
{493.88f, 455},
{0.00f, 265},
{329.63f, 227},
{0.00f, 13},
{392.00f, 455},
{0.00f, 25},
{440.00f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 253},
{523.25f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 253},
{523.25f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{698.46f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 253},
{587.33f, 227},
{0.00f, 13},
{523.25f, 227},
{0.00f, 13},
{523.25f, 683},
{0.00f, 37},
{123.47f, 455},
{0.00f, 25},
{329.63f, 455},
{0.00f, 25},
{392.00f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 265},
{329.63f, 113},
{0.00f, 7},
{392.00f, 113},
{0.00f, 7},
{587.33f, 455},
{0.00f, 25},
{523.25f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 253},
{392.00f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{392.00f, 1025},
{0.00f, 175},
{523.25f, 455},
{0.00f, 265},
{329.63f, 113},
{0.00f, 7},
{349.23f, 113},
{0.00f, 7},
{587.33f, 455},
{0.00f, 25},
{587.33f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 253},
{523.25f, 227},
{0.00f, 253},
{659.26f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{523.25f, 227},
{0.00f, 13},
{523.25f, 227},
{0.00f, 13},
{587.33f, 911},
{0.00f, 49},
{349.23f, 227},
{0.00f, 13},
{392.00f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{246.94f, 455},
{0.00f, 25},
{329.63f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{523.25f, 227},
{0.00f, 13},
{587.33f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{987.77f, 1823},
{0.00f, 97},
{1318.51f, 1823},
{0.00f, 97},
{440.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{207.65f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{123.47f, 455},
{0.00f, 25},
{103.83f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{440.00f, 227},
{0.00f, 13},
{415.30f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{415.30f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{164.81f, 683},
{0.00f, 37},
{329.63f, 455},
{0.00f, 265},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{110.00f, 455},
{0.00f, 25},
{110.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{110.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{164.81f, 227},
{0.00f, 493},
{55.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{73.42f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{1318.51f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{92.50f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{82.41f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{77.78f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{123.47f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{1108.73f, 359},
{0.00f, 361},
{440.00f, 455},
{0.00f, 25},
{554.37f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{174.61f, 227},
{0.00f, 13},
{174.61f, 455},
{0.00f, 505},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{830.61f, 239},
{0.00f, 241},
{554.37f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{123.47f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 2051},
{0.00f, 109},
{69.30f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 253},
{73.42f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{830.61f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{92.50f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{92.50f, 227},
{0.00f, 13},
{92.50f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{82.41f, 227},
{0.00f, 13},
{164.81f, 455},
{0.00f, 25},
{1479.98f, 227},
{0.00f, 13},
{1108.73f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{739.99f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 13},
{440.00f, 227},
{0.00f, 13},
{369.99f, 227},
{0.00f, 13},
{277.18f, 227},
{0.00f, 13},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{87.31f, 227},
{0.00f, 13},
{87.31f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{55.00f, 455},
{0.00f, 25},
{110.00f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{110.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{880.00f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{87.31f, 227},
{0.00f, 13},
{87.31f, 227},
{0.00f, 13},
{554.37f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{55.00f, 227},
{0.00f, 13},
{55.00f, 227},
{0.00f, 13},
{880.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{69.30f, 227},
{0.00f, 13},
{69.30f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{73.42f, 227},
{0.00f, 13},
{146.83f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 25},
{87.31f, 227},
{0.00f, 13},
{87.31f, 227},
{0.00f, 13},
{554.37f, 455},
{0.00f, 505},
{554.37f, 1367},
{0.00f, 73},
{185.00f, 239},
{0.00f, 1201},
{659.26f, 341},
{0.00f, 19},
{987.77f, 569},
{0.00f, 31},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 25},
{415.30f, 455},
{0.00f, 9600},
{1318.51f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{369.99f, 1025},
{0.00f, 2095},
{220.00f, 3647},
{0.00f, 193},
{146.83f, 455},
{0.00f, 25},
{277.18f, 227},
{0.00f, 13},
{659.26f, 683},
{0.00f, 37},
{277.18f, 227},
{0.00f, 13},
{329.63f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{185.00f, 455},
{0.00f, 25},
{185.00f, 227},
{0.00f, 13},
{1108.73f, 1025},
{0.00f, 1135},
{277.18f, 911},
{0.00f, 529},
{587.33f, 227},
{0.00f, 13},
{440.00f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{554.37f, 683},
{0.00f, 37},
{440.00f, 227},
{0.00f, 13},
{415.30f, 455},
{0.00f, 25},
{246.94f, 683},
{0.00f, 757},
{415.30f, 227},
{0.00f, 13},
{92.50f, 911},
{0.00f, 49},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 493},
{110.00f, 227},
{0.00f, 13},
{554.37f, 227},
{0.00f, 493},
{659.26f, 455},
{0.00f, 25},
{73.42f, 227},
{0.00f, 13},
{659.26f, 683},
{0.00f, 37},
{739.99f, 227},
{0.00f, 13},
{659.26f, 683},
{0.00f, 37},
{554.37f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 265},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{659.26f, 683},
{0.00f, 37},
{440.00f, 455},
{0.00f, 25},
{440.00f, 227},
{0.00f, 13},
{440.00f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{61.74f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{493.88f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{440.00f, 911},
{0.00f, 49},
{587.33f, 455},
{0.00f, 25},
{587.33f, 683},
{0.00f, 37},
{554.37f, 683},
{0.00f, 37},
{554.37f, 1025},
{0.00f, 175},
{146.83f, 683},
{0.00f, 37},
{146.83f, 227},
{0.00f, 13},
{739.99f, 455},
{0.00f, 25},
{277.18f, 227},
{0.00f, 13},
{146.83f, 683},
{0.00f, 37},
{73.42f, 455},
{0.00f, 25},
{146.83f, 227},
{0.00f, 13},
{415.30f, 683},
{0.00f, 37},
{103.83f, 683},
{0.00f, 37},
{103.83f, 227},
{0.00f, 13},
{130.81f, 455},
{0.00f, 25},
{130.81f, 455},
{0.00f, 25},
{138.59f, 683},
{0.00f, 37},
{138.59f, 227},
{0.00f, 13},
{123.47f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 985},
{739.99f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{415.30f, 683},
{0.00f, 37},
{146.83f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 265},
{739.99f, 455},
{0.00f, 25},
{77.78f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{987.77f, 227},
{0.00f, 13},
{164.81f, 239},
{0.00f, 241},
{164.81f, 239},
{0.00f, 241},
{164.81f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{155.56f, 227},
{0.00f, 13},
{1108.73f, 455},
{0.00f, 945},
{622.25f, 19},
{0.00f, 74},
{493.88f, 24},
{0.00f, 403},
{440.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{82.41f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 1465},
{220.00f, 455},
{0.00f, 505},
{185.00f, 455},
{0.00f, 505},
{185.00f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 505},
{164.81f, 227},
{0.00f, 13},
{880.00f, 359},
{0.00f, 361},
{440.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{185.00f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{1318.51f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{92.50f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 1465},
{220.00f, 455},
{0.00f, 25},
{1108.73f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 265},
{138.59f, 455},
{0.00f, 745},
{185.00f, 683},
{0.00f, 37},
{185.00f, 227},
{0.00f, 13},
{185.00f, 683},
{0.00f, 37},
{87.31f, 911},
{0.00f, 49},
{830.61f, 1025},
{0.00f, 175},
{164.81f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{164.81f, 683},
{0.00f, 37},
{77.78f, 227},
{0.00f, 13},
{77.78f, 683},
{0.00f, 37},
{880.00f, 1025},
{0.00f, 175},
{123.47f, 683},
{0.00f, 37},
{123.47f, 227},
{0.00f, 13},
{123.47f, 683},
{0.00f, 37},
{1108.73f, 683},
{0.00f, 37},
{880.00f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 2507},
{0.00f, 613},
{987.77f, 227},
{0.00f, 13},
{207.65f, 227},
{0.00f, 253},
{880.00f, 2051},
{0.00f, 109},
{987.77f, 911},
{0.00f, 49},
{1318.51f, 911},
{0.00f, 49},
{830.61f, 683},
{0.00f, 37},
{880.00f, 1025},
{0.00f, 175},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{174.61f, 455},
{0.00f, 25},
{880.00f, 911},
{0.00f, 49},
{1108.73f, 911},
{0.00f, 49},
{987.77f, 911},
{0.00f, 49},
{1318.51f, 911},
{0.00f, 49},
{77.78f, 455},
{0.00f, 25},
{155.56f, 455},
{0.00f, 25},
{77.78f, 455},
{0.00f, 25},
{155.56f, 455},
{0.00f, 25},
{659.26f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 493},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 493},
{659.26f, 683},
{0.00f, 37},
{659.26f, 683},
{0.00f, 37},
{277.18f, 227},
{0.00f, 13},
{659.26f, 227},
{0.00f, 13},
{164.81f, 1823},
{0.00f, 97},
{185.00f, 2735},
{0.00f, 145},
{329.63f, 911},
{0.00f, 49},
{123.47f, 1025},
{0.00f, 175},
{587.33f, 455},
{0.00f, 25},
{554.37f, 683},
{0.00f, 37},
{440.00f, 227},
{0.00f, 13},
{415.30f, 455},
{0.00f, 25},
{246.94f, 683},
{0.00f, 37},
{185.00f, 911},
{0.00f, 49},
{92.50f, 911},
{0.00f, 49},
{164.81f, 911},
{0.00f, 49},
{82.41f, 911},
{0.00f, 49},
{659.26f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{659.26f, 683},
{0.00f, 37},
{739.99f, 227},
{0.00f, 13},
{659.26f, 683},
{0.00f, 37},
{554.37f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{493.88f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 265},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{659.26f, 683},
{0.00f, 37},
{440.00f, 455},
{0.00f, 25},
{61.74f, 227},
{0.00f, 13},
{440.00f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{61.74f, 227},
{0.00f, 13},
{659.26f, 455},
{0.00f, 25},
{82.41f, 227},
{0.00f, 13},
{493.88f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 25},
{440.00f, 911},
{0.00f, 49},
{587.33f, 455},
{0.00f, 25},
{587.33f, 683},
{0.00f, 37},
{554.37f, 683},
{0.00f, 37},
{554.37f, 1025},
{0.00f, 175},
{146.83f, 683},
{0.00f, 37},
{146.83f, 227},
{0.00f, 13},
{739.99f, 455},
{0.00f, 25},
{277.18f, 227},
{0.00f, 13},
{146.83f, 683},
{0.00f, 37},
{73.42f, 455},
{0.00f, 25},
{146.83f, 227},
{0.00f, 13},
{415.30f, 683},
{0.00f, 37},
{103.83f, 683},
{0.00f, 37},
{103.83f, 227},
{0.00f, 13},
{130.81f, 455},
{0.00f, 25},
{130.81f, 455},
{0.00f, 25},
{138.59f, 683},
{0.00f, 37},
{138.59f, 227},
{0.00f, 13},
{123.47f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{123.47f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 985},
{138.59f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{138.59f, 227},
{0.00f, 13},
{69.30f, 455},
{0.00f, 25},
{415.30f, 683},
{0.00f, 37},
{146.83f, 455},
{0.00f, 25},
{587.33f, 455},
{0.00f, 25},
{739.99f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 265},
{739.99f, 455},
{0.00f, 25},
{77.78f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{987.77f, 227},
{0.00f, 13},
{1318.51f, 239},
{0.00f, 241},
{164.81f, 239},
{0.00f, 241},
{1318.51f, 227},
{0.00f, 13},
{138.59f, 227},
{0.00f, 13},
{146.83f, 227},
{0.00f, 13},
{1244.51f, 227},
{0.00f, 13},
{1108.73f, 455},
{0.00f, 945},
{622.25f, 19},
{0.00f, 74},
{493.88f, 24},
{0.00f, 403},
{440.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{739.99f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{82.41f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{87.31f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{92.50f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 1465},
{220.00f, 455},
{0.00f, 505},
{185.00f, 455},
{0.00f, 505},
{185.00f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 505},
{164.81f, 227},
{0.00f, 13},
{880.00f, 359},
{0.00f, 361},
{55.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{185.00f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{82.41f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{207.65f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 1465},
{220.00f, 455},
{0.00f, 25},
{1108.73f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 265},
{138.59f, 455},
{0.00f, 745},
{185.00f, 683},
{0.00f, 37},
{185.00f, 227},
{0.00f, 13},
{185.00f, 683},
{0.00f, 37},
{87.31f, 911},
{0.00f, 49},
{830.61f, 1025},
{0.00f, 175},
{164.81f, 683},
{0.00f, 37},
{164.81f, 227},
{0.00f, 13},
{164.81f, 683},
{0.00f, 37},
{554.37f, 227},
{0.00f, 13},
{77.78f, 683},
{0.00f, 37},
{880.00f, 1025},
{0.00f, 175},
{123.47f, 683},
{0.00f, 37},
{659.26f, 227},
{0.00f, 13},
{123.47f, 683},
{0.00f, 37},
{1108.73f, 683},
{0.00f, 37},
{880.00f, 227},
{0.00f, 13},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 2507},
{0.00f, 373},
{659.26f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 13},
{164.81f, 227},
{0.00f, 493},
{880.00f, 911},
{0.00f, 289},
{261.63f, 683},
{0.00f, 37},
{196.00f, 455},
{0.00f, 25},
{293.66f, 227},
{0.00f, 13},
{392.00f, 1025},
{0.00f, 175},
{261.63f, 1367},
{0.00f, 73},
{261.63f, 455},
{0.00f, 25},
{196.00f, 911},
{0.00f, 49},
{174.61f, 911},
{0.00f, 49},
{164.81f, 911},
{0.00f, 49},
{196.00f, 455},
{0.00f, 25},
{220.00f, 227},
{0.00f, 13},
{493.88f, 227},
{0.00f, 13},
{164.81f, 911},
{0.00f, 49},
{196.00f, 911},
{0.00f, 49},
{220.00f, 911},
{0.00f, 49},
{246.94f, 911},
{0.00f, 49},
{130.81f, 455},
{0.00f, 25},
{293.66f, 455},
{0.00f, 25},
{110.00f, 455},
{0.00f, 25},
{82.41f, 455},
{0.00f, 25},
{174.61f, 1025},
{0.00f, 175},
{130.81f, 1595},
{0.00f, 85},
{196.00f, 911},
{0.00f, 49},
{174.61f, 911},
{0.00f, 49},
{130.81f, 911},
{0.00f, 49},
{174.61f, 1823},
{0.00f, 97},
{164.81f, 1823},
{0.00f, 97},
{164.81f, 911},
{0.00f, 49},
{246.94f, 911},
{0.00f, 49},
{293.66f, 3191},
{0.00f, 169},
{82.41f, 455},
{0.00f, 25},
{246.94f, 1025},
{0.00f, 175},
{220.00f, 227},
{0.00f, 13},
{246.94f, 227},
{0.00f, 13},
{277.18f, 911},
{0.00f, 49},
{440.00f, 455},
{0.00f, 25},
{329.63f, 227},
{0.00f, 13},
{277.18f, 455},
{0.00f, 25},
{73.42f, 683},
{0.00f, 37},
{659.26f, 1025},
{0.00f, 175},
{415.30f, 911},
{0.00f, 49},
{493.88f, 911},
{0.00f, 49},
{185.00f, 911},
{0.00f, 289},
{440.00f, 227},
{0.00f, 13},
{830.61f, 227},
{0.00f, 13},
{880.00f, 1595},
{0.00f, 85},
{246.94f, 455},
{0.00f, 25},
{1108.73f, 683},
{0.00f, 37},
{110.00f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{110.00f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 505},
{164.81f, 227},
{0.00f, 13},
{880.00f, 359},
{0.00f, 361},
{440.00f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{185.00f, 227},
{0.00f, 13},
{659.26f, 1025},
{0.00f, 175},
{82.41f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{659.26f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{220.00f, 455},
{0.00f, 1465},
{220.00f, 455},
{0.00f, 25},
{1108.73f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{987.77f, 683},
{0.00f, 37},
{987.77f, 227},
{0.00f, 13},
{1174.66f, 455},
{0.00f, 265},
{138.59f, 455},
{0.00f, 745},
{185.00f, 683},
{0.00f, 37},
{185.00f, 227},
{0.00f, 13},
{185.00f, 683},
{0.00f, 37},
{87.31f, 911},
{0.00f, 49},
{830.61f, 1025},
{0.00f, 175},
{164.81f, 683},
{0.00f, 37},
{659.26f, 227},
{0.00f, 13},
{164.81f, 683},
{0.00f, 37},
{77.78f, 227},
{0.00f, 13},
{77.78f, 683},
{0.00f, 37},
{880.00f, 1025},
{0.00f, 175},
{123.47f, 683},
{0.00f, 37},
{659.26f, 227},
{0.00f, 13},
{123.47f, 239},
{0.00f, 481},
{1108.73f, 683},
{0.00f, 3397},
{987.77f, 683},
{0.00f, 37},
{659.26f, 227},
{0.00f, 13},
{987.77f, 227},
{0.00f, 13},
{880.00f, 227},
{0.00f, 13},
{138.59f, 455},
{0.00f, 1945},
{82.41f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{87.31f, 227},
{0.00f, 13},
{87.31f, 227},
{0.00f, 13},
{185.00f, 455},
{0.00f, 25},
{880.00f, 911},
{0.00f, 49},
{1108.73f, 911},
{0.00f, 49},
{987.77f, 911},
{0.00f, 49},
{1318.51f, 911},
{0.00f, 49},
{77.78f, 455},
{0.00f, 25},
{155.56f, 455},
{0.00f, 25},
{77.78f, 227},
{0.00f, 13},
{77.78f, 227},
{0.00f, 13},
{155.56f, 455},
{0.00f, 25},
{440.00f, 455},
{0.00f, 265},
{830.61f, 455},
{0.00f, 25},
{880.00f, 227},
{0.00f, 13},
{987.77f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{146.83f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{1174.66f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{174.61f, 455},
{0.00f, 25},
{55.00f, 455},
{0.00f, 25},
{110.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{110.00f, 455},
{0.00f, 25},
{69.30f, 455},
{0.00f, 25},
{138.59f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{73.42f, 455},
{0.00f, 25},
{830.61f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{880.00f, 455},
{0.00f, 25},
{987.77f, 455},
{0.00f, 25},
{164.81f, 455},
{0.00f, 25},
{1108.73f, 455},
{0.00f, 25},
{174.61f, 455},
{0.00f, 505},
{220.00f, 1367},
{0.00f, 2713},
{987.77f, 227},
{0.00f, 733},
{1318.51f, 7523},
};


uint16_t cegEnds[3] = {1, 2, 3, };
uint16_t cegNumChannels = 3;
float ceg1[][2] = {
    W__NOTE(_C5),
    W__NOTE(_REST),
    W__NOTE(_REST),
};
float ceg2[][2] = {
    W__NOTE(_REST),
    W__NOTE(_E5),
    W__NOTE(_REST),
};
float ceg3[][2] = {
    W__NOTE(_REST),
    W__NOTE(_REST),
    W__NOTE(_G5),
};
float ceg4[][2] = {
    W__NOTE(_C5),
    W__NOTE(_E5),
    W__NOTE(_G5),
};

uint16_t ceg5Ends[3] = {4, 8, 12, };
uint16_t ceg5NumChannels = 3;
float ceg5[][2] = {
    W__NOTE(_C5),
    W__NOTE(_REST),
    W__NOTE(_REST),
    W__NOTE(_C5),

    W__NOTE(_REST),
    W__NOTE(_E5),
    W__NOTE(_REST),
    W__NOTE(_E5),

    W__NOTE(_REST),
    W__NOTE(_REST),
    W__NOTE(_G5),
    W__NOTE(_G5),
};

/*
void dance_play_next_prev_finished(qk_tap_dance_state_t* state, void* user_data);

typedef enum { TAP_NONE, TAP_ONCE, TAP_ONCE_HOLD, TAP_DOUBLE } tapping_state_t;

tapping_state_t play_next_prev_state = TAP_NONE;

tapping_state_t compute_tap_state(qk_tap_dance_state_t* state) {
    switch (state->count) {
        case 1:
            return state->pressed ? TAP_ONCE_HOLD : TAP_ONCE;
        case 2:
            return TAP_DOUBLE;
        default:
            return TAP_NONE;
    }
}
int dance_play_next_prev_data[] = {0, KC_MPLY, KC_MPRV, KC_MNXT};

void dance_play_next_prev_finished(qk_tap_dance_state_t* state, void* user_data) {
    play_next_prev_state = compute_tap_state(state);
    if (play_next_prev_state == TAP_NONE) return;
    tap_code_delay(dance_play_next_prev_data[play_next_prev_state], 100);
}


qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_PLAY_NEXT_PREV] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_play_next_prev_finished, NULL),
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1, KC_2,       KC_3,      KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    C(A(KC_LEFT)),
  KC_TAB,  KC_Q, KC_W,       KC_E,      KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_QUOT,
  KC_ESC,  KC_A, KC_S,       KC_D,      KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT,
  KC_LSFT, KC_Z, KC_X,       KC_C,      KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL, FN,   KC_LALT,    KC_LGUI,   LOWER, KC_SPC, KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_MAPLE_RS] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1, KC_2,       KC_3,      KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,     KC_BSPC,
  KC_TAB,  KC_Q, KC_W,       KC_E,      KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_UP,   KC_P,     KC_QUOT,
  KC_ESC,  KC_A, KC_S,       KC_D,      KC_F,  KC_G,   KC_H,   KC_J,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT,
  KC_LSFT, KC_Z, KC_X,       KC_C,      KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
  KC_LCTL, FN,   KC_LALT,    KC_LGUI,   LOWER, KC_SPC, KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT
),

[_LOWER] = LAYOUT_preonic_grid(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR,  KC_LPRN, KC_RPRN, KC_BSPC,
  KC_TAB,  KC_EXLM, KC_PIPE, KC_AMPR, KC_EQL,  KC_PERC, KC_CIRC, KC_PLUS, KC_MINUS, KC_ASTR, _______, KC_DQUO,
  _______, KC_SLSH, KC_LABK, KC_LCBR, KC_LPRN, KC_LBRC, KC_RBRC, KC_RPRN, KC_RCBR,  KC_RABK, KC_BSLS, _______,
  _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_COLN,  _______, KC_PIPE, _______,
  _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC, _______, _______,  _______, _______, _______
),

[_RAISE] = LAYOUT_preonic_grid(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_MPLY, _______,
  _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_PENT,
  _______, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, _______, _______, _______, KC_MUTE, _______, _______, _______,
  _______, FN,      _______, _______, _______, KC_DEL , KC_DEL , _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
),


[_FN] = LAYOUT_preonic_grid(
  KC_F11 ,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,  KC_F12,
  _______, _______, _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______,
  _______, _______, _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______,
  _______, _______, _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______,
  _______,      FN, _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______
),

[_ADJUST] = LAYOUT_preonic_grid(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,
  _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF, BL_TOGG, RGB_TOG, KC_DEL,
  _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  MAPLE_RS, _______, _______, _______,
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  BACKLIT, _______,  _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
)
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case MAPLE_RS:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MAPLE_RS);
            }
            return false;
            break;

        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case FN:
            if (record->event.pressed) {
                layer_on(_FN);
            } else {
                layer_off(_FN);
            }
            return false;
            break;
        case BACKLIT:
            if (record->event.pressed) {
                register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
                backlight_step();
#endif
#ifdef RGBLIGHT_ENABLE
                rgblight_step();
#endif
#ifdef __AVR__
                writePinLow(E6);
#endif
            } else {
                unregister_code(KC_RSFT);
#ifdef __AVR__
                writePinHigh(E6);
#endif
            }
            return false;
            break;

        case SNOW_HALA_BUTTON:
            if (record->event.pressed) {
                audio_set_tempo(254);
                PLAY_SONG(snow_halation);
            }
            break;

        case RENAI_BUTTON:
            if (record->event.pressed) {
                print("playing ceg audio\n");
                audio_set_tempo(120);
                audio_play_channel_melody(&ceg1, &cegEnds, cegNumChannels);
            }
            break;

        case PLATINUM_BUTTON:
            if (record->event.pressed) {
                audio_increase_tempo(128);
            }
            break;

        case RICK_BUTTON:
            if (record->event.pressed) {
                audio_decrease_tempo(128);
            }
            break;

        case ALL_STAR_BUTTON:
            if (record->event.pressed) {
                print("playing ceg audio\n");
                audio_set_tempo(120);
                audio_play_channel_melody(&ceg4, &cegEnds, cegNumChannels);
            }
            break;

        case FF_PRELUDE_BUTTON:
            if (record->event.pressed) {
                print("playing ceg audio\n");
                audio_set_tempo(120);
                audio_play_channel_melody(&ceg5, &ceg5Ends, ceg5NumChannels);
            }
            break;

        case CEG_BUTTON:
            if (record->event.pressed) {
                print("playing ceg6 audio\n");
                audio_set_tempo(1536);
                audio_play_channel_melody(&ceg6, &ceg6Ends, ceg6NumChannels);
            }
            break;

        case SHUT_UP_BUTTON:
            if (record->event.pressed) {
                audio_stop_all();
            }
            break;
    }
    return true;
};

bool     muse_mode      = false;
uint8_t  last_muse_note = 0;
uint16_t muse_counter   = 0;
uint8_t  muse_offset    = 70;
uint16_t muse_tempo     = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo += 1;
            } else {
                muse_tempo -= 1;
            }
        }
    } else {
        if (clockwise) {
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        } else {
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        }
    }
    return true;
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
        case RAISE:
        case LOWER:
            return false;
        default:
            return true;
    }
}

