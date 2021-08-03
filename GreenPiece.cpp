//---------------------------------------------------------------------------


#pragma hdrstop
#include "GreenPiece.h"
#include <vcl.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
int GreenPiece::NextPosition(int position, int dieValue)
{
        if(IsOnBase(id))
        {
           if(dieValue==6)
           {
              return 26;
           }
           else return -1;
        }
        if(position>=26 && position<=51)
        {
           if(position+dieValue>51)
           {
              return (position+dieValue-52);
           }
           else return position+dieValue;
        }
        else if(position>=0 && position<=24)
        {
           if(position+dieValue<=24)
           {
              return position+dieValue;
           }
           else if(position+dieValue>=31)
           {
              return -1;
           }
           else return ((position+dieValue-24)+63);
        }
        else if(position>=64 && position<=69)
        {
           if(position+dieValue>69)
           {
           return -1;
           }
           else return position+dieValue;
        }
         return position+dieValue;
}

void GreenPiece::MovePiece(int id, int dieValue)
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
              else if((idOpponent>=1 && idOpponent<=8) || idOpponent>12)
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
              else if((idOpponent>=1 && idOpponent<=8) || idOpponent>12)
              {
                 int baseIndex=BaseIndex(idOpponent);
                 square.RemovePiece(GivePiece(idOpponent), index);
                 square.AddPiece(GivePiece(idOpponent), baseIndex);

                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
              }
              else if(index==69)
              {
                 square.RemovePiece(GivePiece(id), position);
                 square.AddPiece(GivePiece(id), index);
                 SetCurrentPosition(index);
                 wasMoved=true;
                 if(square.GiveSquare(index)->ControlCount==4)
                 {
                    ShowMessage("Jucatorul verde a castigat :)");
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
