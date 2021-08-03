//---------------------------------------------------------------------------

#ifndef GreenPieceH
#define GreenPieceH
#include "Piece.h"
//---------------------------------------------------------------------------
class GreenPiece: public Piece
{
public:
        GreenPiece(int id, int currentPosition):Piece(id, currentPosition){}
        

        int NextPosition(int position, int dieValue);
        void MovePiece(int id, int dieValue);
};
#endif
