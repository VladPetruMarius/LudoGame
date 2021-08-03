//---------------------------------------------------------------------------

#ifndef RedPieceH
#define RedPieceH
#include "Piece.h"
//---------------------------------------------------------------------------
class RedPiece: public Piece
{
public:
        RedPiece(int id, int currentPosition):Piece(id, currentPosition){}
        

        int NextPosition(int position, int dieValue);
        void MovePiece(int id, int dieValue);
};
#endif
