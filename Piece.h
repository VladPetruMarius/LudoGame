//---------------------------------------------------------------------------

#ifndef PieceH
#define PieceH
#include<ExtCtrls.hpp>
#include "Square.h"
//---------------------------------------------------------------------------
class Piece
{
protected:
        int id;
        int currentPosition;
        bool wasMoved;
        Square square;
public:
        Piece(int id, int currentPosition);
        ~Piece(){}
        
        TImage* GivePiece(int id);
        int GetId();
        int BaseIndex(int id);
        bool IsOnBase(int id);
        void SetCurrentPosition(int currentPosition);
        int GetCurrentPosition(int id);
        int IdOpponent(int position);
        bool WasMoved();
        virtual int NextPosition(int position, int dieValue)=0;
        virtual void MovePiece(int id, int dieValue)=0;
};
#endif
