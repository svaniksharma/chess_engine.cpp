#ifndef UTILITY_H
#define UTILITY_H

#include <cstdint>

#define NUM_TYPE_PIECES 6

#define WHITE_PAWN 0
#define WHITE_ROOK 1
#define WHITE_KNIGHT 2
#define WHITE_BISHOP 3
#define WHITE_QUEEN 4
#define WHITE_KING 5
#define BLACK_PAWN 6
#define BLACK_ROOK 7
#define BLACK_KNIGHT 8
#define BLACK_BISHOP 9
#define BLACK_QUEEN 10
#define BLACK_KING 11
#define NONE 12

typedef uint32_t Piece;
typedef uint64_t BitBoard;

inline bool getBit(BitBoard bb, uint64_t pos) { return bb & (0x1UL << pos); }

#endif