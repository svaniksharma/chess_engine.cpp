#include "board.h"
#include <cassert>
#include <iostream>

Board::Board() {
  _move_stack = std::make_shared<std::stack<Move>>();
  _board[WHITE_PAWN] = 0x000000000000FF00;
  _board[BLACK_PAWN] = 0x00FF000000000000;
  _board[WHITE_ROOK] = 0x0000000000000081;
  _board[BLACK_ROOK] = 0x8100000000000000;
  _board[WHITE_KNIGHT] = 0x0000000000000042;
  _board[BLACK_KNIGHT] = 0x4200000000000000;
  _board[WHITE_BISHOP] = 0x0000000000000024;
  _board[BLACK_BISHOP] = 0x2400000000000000;
  _board[WHITE_QUEEN] = 0x0000000000000010;
  _board[BLACK_QUEEN] = 0x1000000000000000;
  _board[WHITE_KING] = 0x0000000000000008;
  _board[BLACK_KING] = 0x0800000000000000;
}

Board::~Board() {}

Piece Board::getPiece(const int i, const int j) const {
  const int k = 8 * i + j;
  for (Piece p = WHITE_PAWN; p <= BLACK_KING; p++) {
    if (getBit(_board[p], k)) {
      return p;
    }
  }
  return NONE;
}

void Board::makeMove(const Move move) {}

void Board::undoMove() {}

std::ostream &operator<<(std::ostream &os, const Board &b) {
  for (int i = 7; i >= 0; i--) {
    for (int j = 7; j >= 0; j--) {
      Piece p = b.getPiece(i, j);
      char p_str = '.';
      switch (p) {
      case WHITE_PAWN:
        p_str = 'P';
        break;
      case WHITE_ROOK:
        p_str = 'R';
        break;
      case WHITE_KNIGHT:
        p_str = 'N';
        break;
      case WHITE_BISHOP:
        p_str = 'B';
        break;
      case WHITE_QUEEN:
        p_str = 'Q';
        break;
      case WHITE_KING:
        p_str = 'K';
        break;
      case BLACK_PAWN:
        p_str = 'p';
        break;
      case BLACK_ROOK:
        p_str = 'r';
        break;
      case BLACK_KNIGHT:
        p_str = 'n';
        break;
      case BLACK_BISHOP:
        p_str = 'b';
        break;
      case BLACK_QUEEN:
        p_str = 'q';
        break;
      case BLACK_KING:
        p_str = 'k';
        break;
      case NONE:
        p_str = '.';
        break;
      }
      os << p_str << " ";
    }
    os << "\n";
  }
  return os;
}