//---------------------------------------------------------------------------


#pragma hdrstop
#include "Square.h"
#include "Ludo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
TPanel* Square::GiveSquare(int position)
{
        TPanel* panelSquare = NULL;
//---------------------Traseu urmat de jucatori------------------------------

      switch(position)
      {
//---------------------Pozitia de start a jucatorului albastru---------------
        case 0:
          panelSquare =  formLudo->panelSquare0;
        break;
        case 1:
          panelSquare =  formLudo->panelSquare1;
        break;
        case 2:
          panelSquare =  formLudo->panelSquare2;
        break;
        case 3:
          panelSquare =  formLudo->panelSquare3;
        break;
        case 4:
          panelSquare =  formLudo->panelSquare4;
        break;
        case 5:
          panelSquare =  formLudo->panelSquare5;
        break;
        case 6:
          panelSquare =  formLudo->panelSquare6;
        break;
        case 7:
          panelSquare =  formLudo->panelSquare7;
        break;
        case 8:
          panelSquare =  formLudo->panelSquare8;
        break;
        case 9:
          panelSquare =  formLudo->panelSquare9;
        break;
        case 10:
          panelSquare =  formLudo->panelSquare10;
        break;
        case 11:
          panelSquare =  formLudo->panelSquare11;
        break;
        case 12:
          panelSquare =  formLudo->panelSquare12;
        break;
//---------------------Pozitia de start a jucatorului galben-----------------
        case 13:
          panelSquare =  formLudo->panelSquare13;
        break;
        case 14:
          panelSquare =  formLudo->panelSquare14;
        break;
        case 15:
          panelSquare =  formLudo->panelSquare15;
        break;
        case 16:
          panelSquare =  formLudo->panelSquare16;
        break;
        case 17:
          panelSquare =  formLudo->panelSquare17;
        break;
        case 18:
          panelSquare =  formLudo->panelSquare18;
        break;
        case 19:
          panelSquare =  formLudo->panelSquare19;
        break;
        case 20:
          panelSquare =  formLudo->panelSquare20;
        break;
        case 21:
          panelSquare =  formLudo->panelSquare21;
        break;
        case 22:
          panelSquare =  formLudo->panelSquare22;
        break;
        case 23:
          panelSquare =  formLudo->panelSquare23;
        break;
        case 24:
          panelSquare =  formLudo->panelSquare24;
        break;
        case 25:
          panelSquare =  formLudo->panelSquare25;
        break;
//---------------------Pozitia de start a jucatorului verde------------------
        case 26:
          panelSquare =  formLudo->panelSquare26;
        break;
        case 27:
          panelSquare =  formLudo->panelSquare27;
        break;
        case 28:
          panelSquare =  formLudo->panelSquare28;
        break;
        case 29:
          panelSquare =  formLudo->panelSquare29;
        break;
        case 30:
          panelSquare =  formLudo->panelSquare30;
        break;
        case 31:
          panelSquare =  formLudo->panelSquare31;
        break;
        case 32:
          panelSquare =  formLudo->panelSquare32;
        break;
        case 33:
          panelSquare =  formLudo->panelSquare33;
        break;
        case 34:
          panelSquare =  formLudo->panelSquare34;
        break;
        case 35:
          panelSquare =  formLudo->panelSquare35;
        break;
        case 36:
          panelSquare =  formLudo->panelSquare36;
        break;
        case 37:
          panelSquare =  formLudo->panelSquare37;
        break;
        case 38:
          panelSquare =  formLudo->panelSquare38;
        break;
//---------------------Pozitia de start a jucatorului rosu-------------------
        case 39:
          panelSquare =  formLudo->panelSquare39;
        break;
        case 40:
          panelSquare =  formLudo->panelSquare40;
        break;
        case 41:
          panelSquare =  formLudo->panelSquare41;
        break;
        case 42:
          panelSquare =  formLudo->panelSquare42;
        break;
        case 43:
          panelSquare =  formLudo->panelSquare43;
        break;
        case 44:
          panelSquare =  formLudo->panelSquare44;
        break;
        case 45:
          panelSquare =  formLudo->panelSquare45;
        break;
        case 46:
          panelSquare =  formLudo->panelSquare46;
        break;
        case 47:
          panelSquare =  formLudo->panelSquare47;
        break;
        case 48:
          panelSquare =  formLudo->panelSquare48;
        break;
        case 49:
          panelSquare =  formLudo->panelSquare49;
        break;
        case 50:
          panelSquare =  formLudo->panelSquare50;
        break;
        case 51:
          panelSquare =  formLudo->panelSquare51;
        break;
//---------------------Casa jucatorului albastru-----------------------------
        case 52:
          panelSquare =  formLudo->panelBlueHome1;
        break;
        case 53:
          panelSquare =  formLudo->panelBlueHome2;
        break;
        case 54:
          panelSquare =  formLudo->panelBlueHome3;
        break;
        case 55:
          panelSquare =  formLudo->panelBlueHome4;
        break;
        case 56:
          panelSquare =  formLudo->panelBlueHome5;
        break;
        case 57:
          panelSquare =  formLudo->panelBlueHome;
        break;
//---------------------Casa jucatorului galben-------------------------------
        case 58:
          panelSquare =  formLudo->panelYellowHome1;
        break;
        case 59:
          panelSquare =  formLudo->panelYellowHome2;
        break;
        case 60:
          panelSquare =  formLudo->panelYellowHome3;
        break;
        case 61:
          panelSquare =  formLudo->panelYellowHome4;
        break;
        case 62:
          panelSquare =  formLudo->panelYellowHome5;
        break;
        case 63:
          panelSquare =  formLudo->panelYellowHome;
        break;
//---------------------Casa jucatorului verde--------------------------------
        case 64:
          panelSquare =  formLudo->panelGreenHome1;
        break;
        case 65:
          panelSquare =  formLudo->panelGreenHome2;
        break;
        case 66:
          panelSquare =  formLudo->panelGreenHome3;
        break;
        case 67:
          panelSquare =  formLudo->panelGreenHome4;
        break;
        case 68:
          panelSquare =  formLudo->panelGreenHome5;
        break;
        case 69:
          panelSquare =  formLudo->panelGreenHome;
        break;
//---------------------Casa jucatorului rosu---------------------------------
        case 70:
          panelSquare =  formLudo->panelRedHome1;
        break;
        case 71:
          panelSquare =  formLudo->panelRedHome2;
        break;
        case 72:
          panelSquare =  formLudo->panelRedHome3;
        break;
        case 73:
          panelSquare =  formLudo->panelRedHome4;
        break;
        case 74:
          panelSquare =  formLudo->panelRedHome5;
        break;
        case 75:
          panelSquare =  formLudo->panelRedHome;
        break;
//---------------------Baza jucatorului albastru-----------------------------
        case 76:
          panelSquare =  formLudo->panelBlueBase1;
        break;
        case 77:
          panelSquare =  formLudo->panelBlueBase2;
        break;
        case 78:
          panelSquare =  formLudo->panelBlueBase3;
        break;
        case 79:
          panelSquare =  formLudo->panelBlueBase4;
        break;
//---------------------Baza jucatorului galben-------------------------------
        case 80:
          panelSquare =  formLudo->panelYellowBase1;
        break;
        case 81:
          panelSquare =  formLudo->panelYellowBase2;
        break;
        case 82:
          panelSquare =  formLudo->panelYellowBase3;
        break;
        case 83:
          panelSquare =  formLudo->panelYellowBase4;
        break;
//---------------------Baza jucatorului verde--------------------------------
        case 84:
          panelSquare =  formLudo->panelGreenBase1;
        break;
        case 85:
          panelSquare =  formLudo->panelGreenBase2;
        break;
        case 86:
          panelSquare =  formLudo->panelGreenBase3;
        break;
        case 87:
          panelSquare =  formLudo->panelGreenBase4;
        break;
//---------------------Baza jucatorului rosu---------------------------------
        case 88:
          panelSquare =  formLudo->panelRedBase1;
        break;
        case 89:
          panelSquare =  formLudo->panelRedBase2;
        break;
        case 90:
          panelSquare =  formLudo->panelRedBase3;
        break;
        case 91:
          panelSquare =  formLudo->panelRedBase4;
        break;
      }
      return panelSquare;
}

void Square::AddPiece(TImage* piece, int position)
{
        GiveSquare(position)->InsertControl(piece);
}

void Square::RemovePiece(TImage* piece, int position)
{
        GiveSquare(position)->RemoveControl(piece);
}

bool Square::IsEmpty(int position)
{
        if(GiveSquare(position)->ControlCount>=1)
        return false;
        return true;
}
