//
// Created by newbi on 2023-07-12.
//
#ifndef SUMMER_CHESSBOARD_H
#define SUMMER_CHESSBOARD_H

#include <iostream>
#include <vector>
using namespace std;
enum PIECE {B_ROOK=1, B_KING, B_BISHOP, B_QUEEN, B_KNIGHT, B_PAWN,
    W_ROOK, W_KING, W_BISHOP, W_QUEEN, W_KNIGHT, W_PAWN};
class ChessBoard {
public:
    ChessBoard() {
        board[0][0] = B_ROOK;     board[0][1] = B_KNIGHT; board[0][2] = B_BISHOP;   board[0][3] = B_QUEEN;
        board[0][4] = B_KING;     board[0][5] = B_BISHOP; board[0][6] = B_KNIGHT;   board[0][7] = B_ROOK;
        for (int i=0; i < 8; ++i) board[1][i] = B_PAWN;
        board[7][0] = W_ROOK;     board[7][1] = W_KNIGHT; board[7][2] = W_BISHOP;   board[7][3] = W_QUEEN;
        board[7][4] = W_KING;     board[7][5] = W_BISHOP; board[7][6] = W_KNIGHT;   board[7][7] = W_ROOK;
        for (int i=0; i < 8; ++i) board[6][i] = W_PAWN;
    }
    std::vector<PIECE>& operator[] (int index){
        return board[index];
    }
    friend std::ostream& operator<<(std::ostream& os, const ChessBoard& chess);
private:
    std::vector<std::vector<PIECE>> board = std::vector<std::vector<PIECE>>(8, std::vector<PIECE>(8));
};

std::ostream& operator<<(std::ostream& os, const PIECE& p) {
    if(p==1){
        os<< "Black Rook" << endl;
    }
    else if(p==5){
        os << "Black Knight"<<endl;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const ChessBoard& chess) {
    for(int i=0;i<8;i++){
        for(int j=0; j<8; j++){
            os << static_cast<int>(chess.board[i][j]) <<"\t";
        }
        os<<endl;
    }
    return os;
}
#endif //SUMMER_CHESSBOARD_H
