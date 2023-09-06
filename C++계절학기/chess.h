#ifndef SUMMER_CHESS_H
#define SUMMER_CHESS_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int BOARD_SIZE = 8;

// Piece types
enum Piece {
    EMPTY,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

// Colors
enum Color {
    BLANK,
    WHITE,
    BLACK
};

// Struct for a chess piece
struct ChessPiece{
    Piece piece;
    Color color;
};
typedef ChessPiece ChessBoard[BOARD_SIZE][BOARD_SIZE];

void print_board(ChessBoard const board);

vector<pair<int,int>> find_bishop_moves(ChessBoard board, int x,int y, Color color);

vector<pair<int,int>> find_knight_moves(ChessBoard board, int x, int y, Color color);

vector<pair<int,int>> find_pawn_moves(ChessBoard board, int x, int y, Color color);

vector <pair<int,int>> find_rook_moves(ChessBoard board, int x, int y, Color color);


#endif //SUMMER_CHESS_H
