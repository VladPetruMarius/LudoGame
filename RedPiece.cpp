//---------------------------------------------------------------------------


#pragma hdrstop
#include "RedPiece.h"
#include <vcl.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
int RedPiece::NextPosition(int position, int dieValue)
{
        if(IsOnBase(id))
        {
           if(dieValue==6)
           {
              return 39;
           }
            else return -1;
        }
        if(position>=39 && position<=51)
        {
           if(position+dieValue>51)
           {
              return (position+dieValue-52);
           }
           else return position+dieValue;
        }
        else if(position>=0 && position<=37)
        {
           if(position+dieValue<=37)
           {
              return position+dieValue;
           }
           else if(position+dieValue>=44)
           {
              return -1;
           }
           else return ((position+dieValue-37)+69);
        }
        else if(position>=70 && position<=75)
        {
           if(position+dieValue<=75)
           {
              return position+dieValue;
           }
           else return -1;
        }
        return position+dieValue;
}

void RedPiece::MovePiece(int id, int dieValue)
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
              else if(idOpponent>=1 && idOpponent<=12)
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
              else if(idOpponent>=1 && idOpponent<=12)
              {
                 int baseIndex=BaseIndex(idOpponent);
                 square.RemovePiece(GivePiece(idOpponent), index);
                 square.AddPiece(GivePiece(idOpponent), baseIndex);

                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if(index==75)
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
                 if(square.GiveSquare(index)->ControlCount==4)
                 {
                    ShowMessage("Jucatorul rosu a castigat :)");
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
