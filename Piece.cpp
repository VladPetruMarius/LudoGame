//---------------------------------------------------------------------------


#pragma hdrstop
#include "Piece.h"
#include "Ludo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

Piece::Piece(int id, int currentPosition)
{
        this->id=id;
        this->currentPosition=currentPosition;
        wasMoved=false;
}

int Piece::GetId()
{
        return id;
}

void Piece::SetCurrentPosition(int currentPosition)
{
        this->currentPosition=currentPosition;
}

int Piece::GetCurrentPosition(int id)
{
        return currentPosition;
}

TImage* Piece::GivePiece(int id)
{

//---------------------Jucatorul albastru------------------------------------

        if(id==1)
        return formLudo->imageBluePiece1;
        else if(id==2)
        return formLudo->imageBluePiece2;
        else if(id==3)
        return formLudo->imageBluePiece3;
        else if(id==4)
        return formLudo->imageBluePiece4;

//---------------------Jucatorul galben--------------------------------------

        else if(id==5)
        return formLudo->imageYellowPiece1;
        else if(id==6)
        return formLudo->imageYellowPiece2;
        else if(id==7)
        return formLudo->imageYellowPiece3;
        else if(id==8)
        return formLudo->imageYellowPiece4;

//---------------------Jucatorul verde---------------------------------------

        else if(id==9)
        return formLudo->imageGreenPiece1;
        else if(id==10)
        return formLudo->imageGreenPiece2;
        else if(id==11)
        return formLudo->imageGreenPiece3;
        else if(id==12)
        return formLudo->imageGreenPiece4;

//---------------------Jucatorul rosu----------------------------------------

        else if(id==13)
        return formLudo->imageRedPiece1;
        else if(id==14)
        return formLudo->imageRedPiece2;
        else if(id==15)
        return formLudo->imageRedPiece3;

        return formLudo->imageRedPiece4;
}

int Piece::BaseIndex(int id)
{
//---------------------Jucatorul albastru------------------------------------

        if(id==1)
        return 76;
        else if(id==2)
        return 77;
        else if(id==3)
        return 78;
        else if(id==4)
        return 79;

//---------------------Jucatorul galben--------------------------------------

        else if(id==5)
        return 80;
        else if(id==6)
        return 81;
        else if(id==7)
        return 82;
        else if(id==8)
        return 83;

//---------------------Jucatorul verde---------------------------------------

        else if(id==9)
        return 84;
        else if(id==10)
        return 85;
        else if(id==11)
        return 86;
        else if(id==12)
        return 87;

//---------------------Jucatorul rosu----------------------------------------

        else if(id==13)
        return 88;
        else if(id==14)
        return 89;
        else if(id==15)
        return 90;

        return 91;
}

bool Piece::IsOnBase(int id)
{

//---------------------Verficare pentru jucatorul albastru-------------------

        if(id>=1 && id<=4)
        {
           int position=BaseIndex(id);
           if(square.GiveSquare(position)->ContainsControl(GivePiece(id)))
           return true;
        }

//---------------------Verificare pentru jucatorul  galben-------------------

        else if(id>=5 && id<=8)
        {
           int position=BaseIndex(id);
           if(square.GiveSquare(position)->ContainsControl(GivePiece(id)))
           return true;
        }

//---------------------Verificare pentru jucatorul verde---------------------

        else if(id>=9 && id<=12)
        {
           int position=BaseIndex(id);
           if(square.GiveSquare(position)->ContainsControl(GivePiece(id)))
           return true;
        }

//---------------------Verificare pentru jucatorul rosu----------------------

        else if(id>=13 && id<=16)
        {
           int position=BaseIndex(id);
           if(square.GiveSquare(position)->ContainsControl(GivePiece(id)))
           return true;
        }
        return false;
}

int Piece::IdOpponent(int position)
{
        if(square.GiveSquare(position)->ContainsControl(GivePiece(1)))
        return 1;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(2)))
        return 2;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(3)))
        return 3;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(4)))
        return 4;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(5)))
        return 5;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(6)))
        return 6;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(7)))
        return 7;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(8)))
        return 8;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(9)))
        return 9;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(10)))
        return 10;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(11)))
        return 11;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(12)))
        return 12;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(13)))
        return 13;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(14)))
        return 14;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(15)))
        return 15;
        else if(square.GiveSquare(position)->ContainsControl(GivePiece(16)))
        return 16;
        return 0;
}

bool Piece::WasMoved()
{
        return wasMoved;
}
