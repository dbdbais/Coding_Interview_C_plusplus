#include "chess.h"
using namespace std;

bool make_move(ChessBoard board, int from_x,int from_y){
    ChessPiece piece = board[from_x][from_y];

    vector<pair<int,int>>legal_moves;

    switch(piece.piece){
        case PAWN:
            legal_moves = find_pawn_moves(board,from_x,from_y,piece.color);
            break;
        case ROOK:
            legal_moves = find_rook_moves(board,from_x,from_y,piece.color);
            break;
        case KNIGHT:
            legal_moves = find_knight_moves(board,from_x,from_y,piece.color);
            break;
        case BISHOP:
            legal_moves = find_bishop_moves(board,from_x,from_y,piece.color);
            break;
    }
    if(legal_moves.size() > 0){
        cout<< "Legal moves: ";
        for (auto moves: legal_moves){
            cout<< "("<< moves.first << ", "<<moves.second<<") ";
        }
        cout <<endl;
        cout<< "Select a move (0-"<<legal_moves.size()-1<<"): ";
        int index;
        cin >> index;
        board[from_x][from_y] = {EMPTY,BLANK};
        board[legal_moves[index].first][legal_moves[index].second] = {piece.piece,piece.color};
        return true;
    }
    else{
        return false;
    }
}


            int main() {
                ChessBoard board = {
                        {{ROOK,   WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},{KING,  WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK,   WHITE}},
                        {{PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE}, {PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}},
                        {{EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY, BLANK}, {EMPTY, BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}},
                        {{EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY, BLANK}, {EMPTY, BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}},
                        {{EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY, BLANK}, {EMPTY, BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}},
                        {{EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY, BLANK}, {EMPTY, BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}, {EMPTY,  BLANK}},
                        {{PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}, {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}},
                        {{ROOK,   BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING,  BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK,   BLACK}}
                };

                print_board(board);

                while (true) {
                    int from_x, from_y;
                    std::cout << "Select your piece (x y): ";
                    std::cin >> from_x >> from_y;
                    std::cin.ignore();
                    if (from_x == -1 && from_y == -1) break;

                    if (!make_move(board, from_x, from_y)) {
                        std::cout << "Illegal move!\n";
                        continue;
                    }

                    print_board(board);
                }
                return 0;
            }