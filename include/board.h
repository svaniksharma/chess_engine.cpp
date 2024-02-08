#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "move.h"
#include "utility.h"
#include <memory>
#include <stack>
#include <string>
#include <vector>

class Board {
public:
  Board();
  Board(const std::string fen);
  ~Board();
  Piece getPiece(const int i, const int j) const;
  void makeMove(const Move move);
  void undoMove();
  friend std::ostream &operator<<(std::ostream &os, const Board &b);

private:
  // white pieces, black pieces, all pieces, none pieces
  BitBoard _board[2 * NUM_TYPE_PIECES + 2];
  std::shared_ptr<std::stack<Move>> _move_stack;
  void generateMoves(const std::vector<Move> &moves);
};

#endif