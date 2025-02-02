#ifndef DEFS_H
#define DEFS_H
#define MAX_SQ  120
typedef unsigned long long U64;
enum{ EMPTY, wP, wN ,wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK};
enum{FILE_A ,FILE_B ,FILE_C ,FILE_D ,FILE_E ,FILE_F ,FILE_G, FILE_H, FILE_NONE};
enum{RANK1, RANK2, RANK3 ,RANK4 ,RANK5 ,RANK6 ,RANK7, RANK8, RANK_NONE};
enum{WHITE, BLACK, NONE};
enum{
    A1 = 21, B1, C1, D1, E1, F1, G1, H1,
    A2 = 31, B2, C2, D2, E2, F2, G2, H2,
    A1 = 41, B3, C3, D3, E3, F3, G3, H3,
    A1 = 51, B4, C4, D4, E4, F4, G4, H4,
    A1 = 61, B5, C5, D5, E5, F5, G5, H5,
    A1 = 71, B6, C6, D6, E6, F6, G6, H6,
    A1 = 81, B7, C7, D7, E7, F7, G7, H7,
    A1 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ
};//for the program generating move , instead of begining from 0 , this representation will let us check for the invalid moves 
enum{FALSE, TRUE};

typedef struct{
    int pieces[MAX_SQ];
    U64 pawns[3];//bitboard map representation of pawns for each color...
    int side; //current side to move
    int kingSq[2];
    int Enpas;
    int fiftyMove;// just to decide is the game is drawn
    int ply;
    int hisply;
    U64 posKey;// a unique key which is generated for each position
    int pcNum[13];//because we have 12 pieces
    int heavyPce[3];
    int bigPce[3];
    int minorPce[3];
}T_BOARD;

#endif