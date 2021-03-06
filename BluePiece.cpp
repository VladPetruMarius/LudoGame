//---------------------------------------------------------------------------


#pragma hdrstop
#include "BluePiece.h"
#include "Ludo.h"
#include <vcl.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

int BluePiece::NextPosition(int position, int dieValue)
{
        if(IsOnBase(id))
        {
           if(dieValue==6)
           return 0;
           else return -1;
        }
        if(position+dieValue>50 && position<=50)
        {
           return (51+(position+dieValue-50));
        }
        if(position>=52)
        {
           if(position+dieValue>57)
           return -1;
        }
        return position+dieValue;
}

void BluePiece::MovePiece(int id, int dieValue)
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
              else if(idOpponent>4)
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
              else if(idOpponent>4)
              {
                 int baseIndex=BaseIndex(idOpponent);
                 square.RemovePiece(GivePiece(idOpponent), index);
                 square.AddPiece(GivePiece(idOpponent), baseIndex);

                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if(index==57)
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
                 if(square.GiveSquare(index)->ControlCount==4)
                 {
                    ShowMessage("Jucatorul albastru a castigat :)");
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

