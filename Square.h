//---------------------------------------------------------------------------

#ifndef SquareH
#define SquareH
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Square
{
public:
        TPanel* GiveSquare(int position);
        void AddPiece(TImage *piece, int position);
        void RemovePiece(TImage *piece, int position);
        bool IsEmpty(int position);
};
#endif
