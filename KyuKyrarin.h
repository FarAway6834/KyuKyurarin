#pragma once
#ifndef _KYUKYURARIN_H
# define _KYUKYURARIN_H

typedef unsigned char uch;

enum vbitfield : uch {
    B0_true = 1,
    B1_true = 2,
    B2_true = 4,
    B3_true = 8,
    B4_true = 16,
    B5_true = 32,
    B6_true = 64,
    B7_true = 128,
    B0_false = ~1,
    B1_false = ~2,
    B2_false = ~4,
    B3_false = ~8,
    B4_false = ~16,
    B5_false = ~32,
    B6_false = ~64,
    B7_false = ~128
};

#endif