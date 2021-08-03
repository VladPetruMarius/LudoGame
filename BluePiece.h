//---------------------------------------------------------------------------

#ifndef BluePieceH
#define BluePieceH
#include <ExtCtrls.hpp>
#include "Piece.h"
#include "Die.h"
#include "Square.h"
//---------------------------------------------------------------------------
class BluePiece: public Piece
{

public:
        BluePiece(int id, int currentPosition):Piece(id, currentPosition){}
        
        int NextPosition(int position, int dieValue);
        void MovePiece(int id, int dieValue);
};
#endif
