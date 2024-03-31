/* Copyright 2020
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

/* Ce tableau de convertion a été fait pour mon usage afin de simplifier le travail avec ma keymap sous ZMK.
 * Il est basé sur la verion 1.5 d'Optimot par Pyjam.
 *
 * Si vous utilez des labels pour vos layers, il est nécessaire de positionner l'include des combos après les define les labels des layes, sans quoi le code ne pourra pas se compiler. Exemple ci-dessous :
 *
 * #define OPTIM   0
 * #define LOWER   1
 * #define RAISE   2
 * #define ARROW   3
 * #define NUMBERS 4
 * #define SCREEN  5
 *
 * #include "combos.dtsi" // This include **has** to be made **after** the layers' define, else it won't compile.
 *
 */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ « │ » │ " │ - │ + │ * │ / │ = │ ( │ ) │ @ │ # │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ À │ J │ O │ É │ B │ F │ D │ L │ ' │ Q │ X │ Ç │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ I │ E │ U │ , │ P │ T │ S │ R │ N │ ^ │ Z │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ K │ Y │ È │ . │ W │   │ G │ C │ M │ H │ V │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_DLR  GRAVE // $
#define OP_LDAQ N1    // «
#define OP_RDAQ N2    // »
#define OP_DQUO N3    // "
#define OP_MIN  N4    // -
#define OP_PLUS N5    // +
#define OP_ASTR N6    // *
#define OP_SLSH N7    // /
#define OP_EQL  N8    // =
#define OP_LPRN N9    // (
#define OP_RPRN N0    // )
#define OP_AT   MINUS // @
#define OP_HASH EQUAL // #
// Row 2
#define OP_AGRV Q     // À
#define OP_J    W     // J
#define OP_O    E     // O
#define OP_EACU R     // É
#define OP_B    T     // B
#define OP_F    Y     // F
#define OP_D    U     // D
#define OP_L    I     // L
#define OP_QUOT O     // '
#define OP_Q    P     // Q
#define OP_X    LBKT  // X
//#define OP_CCED RBKT  // Ç Use this with my tweaked version of Optimot 1.5
#define OP_Z RBKT  // Z Use this with Optimot 1.8.1
// Row 3
#define OP_A    A     // A
#define OP_I    S     // I
#define OP_E    D     // E
#define OP_U    F     // U
#define OP_COMM G     // ,
#define OP_P    H     // P
#define OP_T    J     // T
#define OP_S    K     // S
#define OP_R    L     // R
#define OP_N    SEMI  // N
#define OP_CIR  SQT   // ^
//#define OP_Z    BSLH  // Z Use this with my tweaked version of Optimot 1.5
#define OP_CCED    BSLH  // Ç Use this with Optimot 1.8.1
// Row 4
#define OP_K    Z     // K
#define OP_Y    X     // Y
#define OP_EGRV C     // È
#define OP_DOT  V     // .
#define OP_W    B     // W
#define OP_G    N     // G
#define OP_C    M     // C
#define OP_M    COMMA // M
#define OP_H    DOT   // H
#define OP_V    FSLH  // V

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ € │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ % │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │ ? │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │ ! │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_EURO  LS(OP_DLR)  // €
#define OP_1     LS(OP_LDAQ) // 1
#define OP_2     LS(OP_RDAQ) // 2
#define OP_3     LS(OP_DQUO) // 3
#define OP_4     LS(OP_MIN)  // 4
#define OP_5     LS(OP_PLUS) // 5
#define OP_6     LS(OP_ASTR) // 6
#define OP_7     LS(OP_SLSH) // 7
#define OP_8     LS(OP_EQL)  // 8
#define OP_9     LS(OP_LPRN) // 9
#define OP_0     LS(OP_RPRN) // 0
#define OP_UNDS  LS(OP_AT)   // _
#define OP_DEGRE LA(OP_HASH) // º
// Added since this is useful
#define OP_PERC  LS(OP_HASH) // %
// Row 2
#define OP_QUES LS(OP_QUOT)  // ?
// Row 3
#define OP_SCLN LS(OP_COMM)  // ;
// Row 4
#define OP_COLN LS(OP_DOT)   // :
// Row 5
#define OP_NBSP LA(SPACE)   //   (non-breaking space) /!\ Pour la disposition Optimot non altérée, il faut utiler le code LA(SPACE)
