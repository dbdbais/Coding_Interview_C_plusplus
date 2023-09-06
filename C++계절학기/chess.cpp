//
// Created by newbi on 2023-07-08.
//

#include "chess.h"

void print_board(ChessBoard const board){
    cout<< "\t";
    for(int i=0;i<BOARD_SIZE;i++)
        cout<<i<<"\t";
    cout<<endl;
    for(int i=0;i<BOARD_SIZE;i++){
        cout<<i<<"\t";
        for(int j=0;j<BOARD_SIZE;j++){
            ChessPiece temp = board[i][j];
            if(temp.piece == EMPTY){
                cout<<"  ";
            }
            else if(temp.piece == PAWN){
                if(temp.color == WHITE){
                    cout<<"Pw";
                }
                else{
                    cout<<"Pb";
                }
            }
            else if(temp.piece == BISHOP){
                if(temp.color == WHITE){
                    cout<<"Bw";
                }
                else{
                    cout<<"Bb";
                }
            }
            else if(temp.piece == KNIGHT){
                if(temp.color == WHITE){
                    cout <<"Nw";
                }
                else{
                    cout<<"Nb";
                }
            }
            else if(temp.piece == ROOK){
                if(temp.color == WHITE){
                    cout<<"Rw";
                }
                else{
                    cout<<"Rb";
                }
            }
            else if(temp.piece ==KING){
                if(temp.color == WHITE){
                    cout<<"Kw";
                }
                else{
                    cout<<"Kb";
                }
            }
            else if(temp.piece == QUEEN){
                if(temp.color == WHITE){
                    cout<<"Qw";
                }
                else{
                    cout<<"Qb";
                }
            }
            cout<<"\t";
        }
        cout<<endl;
    }
}

vector<pair<int, int>> find_bishop_moves(ChessBoard board, int x, int y, Color color){
    vector<pair<int,int>> res;
    int i= x;
    int j =y;
    while(true){ //우하
        i++;
        j++;
        if(i<0 || i>7 || j<0 ||j>7) break;
        if(board[i][j].piece != EMPTY && board[i][j].color == color) //막혀있는데 동료라면
            break;
        if(board[i][j].piece != EMPTY && board[i][j].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,j));
            break;
        }
        res.push_back(make_pair(i,j));
    }
    i= x;
    j =y;
    while(true){ //우상
        i--;
        j++;
        if(i<0 || i>7 || j<0 ||j>7) break;
        if(board[i][j].piece != EMPTY && board[i][j].color == color) //막혀있는데 동료라면
            break;
        if(board[i][j].piece != EMPTY && board[i][j].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,j));
            break;
        }
        res.push_back(make_pair(i,j));
    }
    i= x;
    j =y;
    while(true){ //좌하
        i++;
        j--;
        if(i<0 || i>7 || j<0 ||j>7) break;
        if(board[i][j].piece != EMPTY && board[i][j].color == color) //막혀있는데 동료라면
            break;
        if(board[i][j].piece != EMPTY && board[i][j].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,j));
            break;
        }
        res.push_back(make_pair(i,j));
    }
    i= x;
    j =y;
    while(true){ //좌상
        i--;
        j--;
        if(i<0 || i>7 || j<0 ||j>7) break;
        if(board[i][j].piece != EMPTY && board[i][j].color == color) //막혀있는데 동료라면
            break;
        if(board[i][j].piece != EMPTY && board[i][j].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,j));
            break;
        }
        res.push_back(make_pair(i,j));
    }
    sort(res.begin(),res.end());
    return res;

}

vector<pair<int, int>> find_knight_moves(ChessBoard board, int x, int y, Color color){
    vector<pair<int,int>> res;
    const int mxv =8;
    const int mnv = -1;

    if(x+2 < mxv && y-1 > mnv ){
        if(board[x+2][y-1].piece == EMPTY || board[x+2][y-1].color != color)
        res.push_back(make_pair(x+2,y-1));
    }
    if(x+2 < mxv && y+1 <mxv){
        if(board[x+2][y+1].piece == EMPTY || board[x+2][y+1].color != color)
        res.push_back(make_pair(x+2,y+1));
    }
    if(x-2 > mnv && y-1 >mnv){
        if(board[x-2][y-1].piece == EMPTY || board[x-2][y-1].color != color)
        res.push_back(make_pair(x-2,y-1));
    }
    if(x-2 > mnv && y+1 <mxv){
        if(board[x-2][y+1].piece == EMPTY || board[x-2][y+1].color != color)
        res.push_back(make_pair(x-2,y+1));
    }
    if(y+2 <mxv && x-1 >mnv){
        if(board[x-1][y+2].piece == EMPTY || board[x-1][y+2].color != color)
        res.push_back(make_pair(x-1,y+2));
    }
    if(y+2 < mxv && x+1 <mxv){
        if(board[x+1][y+2].piece == EMPTY || board[x+1][y+2].color != color)
        res.push_back(make_pair(x+1,y+2));
    }
    if(y-2 >mnv && x-1 >mnv){
        if(board[x-1][y-2].piece == EMPTY || board[x-1][y-2].color != color)
        res.push_back(make_pair(x-1,y-2));
    }
    if(y-2 > mnv && x+1 <mxv){
        if(board[x+1][y-2].piece == EMPTY || board[x+1][y-2].color != color)
        res.push_back(make_pair(x+1,y-2));
    }
    sort(res.begin(),res.end());
    return res;
}
vector<pair<int,int>> find_pawn_moves(ChessBoard board, int x, int y, Color color){
    vector<pair<int,int>> res;
    if(color == WHITE){
        if(x==1){
            res.push_back(make_pair(x+2,y));
        }
        if(board[x+1][y].piece == EMPTY)
            res.push_back(make_pair(x+1,y));
        if(y-1 >=0){
            if(board[x+1][y-1].piece != EMPTY && board[x+1][y-1].color != color)
                res.push_back(make_pair(x+1,y-1));
        }
        if(y+1 <=7){
            if(board[x+1][y+1].piece != EMPTY && board[x+1][y+1].color != color)
                res.push_back(make_pair(x+1,y+1));
        }
    }
    else{
        if(x==6){
            res.push_back(make_pair(x-2,y));
        }
        if(board[x-1][y].piece == EMPTY)
            res.push_back(make_pair(x-1,y));
        if(y-1 >=0){
            if(board[x-1][y+1].piece != EMPTY && board[x-1][y+1].color !=color)
                res.push_back(make_pair(x-1,y-1));
        }
        if(y+1 <=7){
            if(board[x-1][y+1].piece != EMPTY && board[x-1][y+1].color != color)
                res.push_back(make_pair(x-1,y+1));
        }
    }
    sort(res.begin(),res.end());
    return res;
}


vector<pair<int, int>> find_rook_moves(ChessBoard board,int x, int y, Color color){
    vector<pair<int,int>> res;
    for(int i =x+1;i<8;i++){ //세로
        if(i<0 || i>7) continue;
        if(board[i][y].piece != EMPTY && board[i][y].color == color) //막혀있는데 동료라면
            break;
        if(board[i][y].piece != EMPTY && board[i][y].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,y));
            break;
        }
        res.push_back(make_pair(i,y));
    }
    for(int i =x-1;i>=0;i--){ //세로
        if(i<0 || i>7) continue;
        if(board[i][y].piece != EMPTY && board[i][y].color == color) //막혀있는데 동료라면
            break;
        if(board[i][y].piece != EMPTY && board[i][y].color != color){ //막혀있는데 적이라면
            res.push_back(make_pair(i,y));
            break;
        }
        res.push_back(make_pair(i,y));
    }
    for(int i=y+1;i<8;i++) { //가로
        if(i<0 || i>7) continue;
        if(board[x][i].piece != EMPTY && board[x][i].color == color)
            break;
        if(board[x][i].piece != EMPTY && board[x][i].color != color){
            res.push_back(make_pair(x,i));
            break;
        }
        res.push_back(make_pair(x,i));
    }
    for(int i = y-1; i>=0;i--){
        if(i<0 || i>7) continue;
        if(board[x][i].piece != EMPTY && board[x][i].color == color)
            break;
        if(board[x][i].piece != EMPTY && board[x][i].color!= color){
            res.push_back(make_pair(x,i));
            break;
        }
        res.push_back(make_pair(x,i));
    }
    sort(res.begin(),res.end());
    return res;
}

