//---------------------------------------------------------------------------


#pragma hdrstop
#include "YellowPiece.h"
#include <vcl.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

int YellowPiece::NextPosition(int position, int dieValue)
{
        if(IsOnBase(id))
        {
           if(dieValue==6)
           return 13;
           else return -1;
        }
        if(position>=13 && position<=51)
        {
           if(position+dieValue>51)
           {
              return (position+dieValue-52);
           }
           else return position+dieValue;
        }
        else if(position>=0 && position<=11)
        {
           if(position+dieValue<=11)
           {
              return position+dieValue;
           }
           else if(position+dieValue>=18)
           {
              return -1;
           }
           else return ((position+dieValue-11)+57);
        }
        else if(position>=58 && position<=63)
        {
           if(position+dieValue<=63)
           {
              return position+dieValue;
           }
           else return -1;
        }
        return position+dieValue;
}

void YellowPiece::MovePiece(int id, int dieValue)
{
         if(IsOnBase(id))
        {
           if(dieValue==6)
           {
              int position=BaseIndex(id);
              int index=NextPosition(position, dieValue);
              int idOpponent=IdOpponent(index);
              if(square.IsEmpty(index))
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if((idOpponent>=1 &&idOpponent<=4) || idOpponent>8)
              {
                 int baseIndex=BaseIndex(idOpponent);
                 square.RemovePiece(GivePiece(idOpponent), index);
                 square.AddPiece(GivePiece(idOpponent), baseIndex);

                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
           }
           else
           {
              wasMoved=false;
           }
        }
        else
        {
           int position=GetCurrentPosition(id);
           int index=NextPosition(position, dieValue);
           int idOpponent=IdOpponent(index);
           if(index!=-1)
           {
              if(square.IsEmpty(index))
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if((idOpponent>=1 &&idOpponent<=4) || idOpponent>8)
              {
                 int baseIndex=BaseIndex(idOpponent);
                 square.RemovePiece(GivePiece(idOpponent), index);
                 square.AddPiece(GivePiece(idOpponent), baseIndex);

                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if(index==63)
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
                 if(square.GiveSquare(index)->ControlCount==4)
                 {
                    ShowMessage("Jucatorul galben a castigat :)");
                 }
              }
              else
              {
                 wasMoved=false;
              }
           }
           else
           {
              wasMoved=false;
           }
        }
}

