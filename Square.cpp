//---------------------------------------------------------------------------


#pragma hdrstop
#include "Square.h"
#include "Ludo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
TPanel* Square::GiveSquare(int position)
{
//---------------------Traseu urmat de jucatori------------------------------

//---------------------Pozitia de start a jucatorului albastru---------------
        if(position==0)
        return formLudo->panelSquare0;

        else if(position==1)
        return formLudo->panelSquare1;
        else if(position==2)
        return formLudo->panelSquare2;
        else if(position==3)
        return formLudo->panelSquare3;
        else if(position==4)
        return formLudo->panelSquare4;
        else if(position==5)
        return formLudo->panelSquare5;
        else if(position==6)
        return formLudo->panelSquare6;
        else if(position==7)
        return formLudo->panelSquare7;
        else if(position==8)
        return formLudo->panelSquare8;
        else if(position==9)
        return formLudo->panelSquare9;
        else if(position==10)
        return formLudo->panelSquare10;
        else if(position==11)
        return formLudo->panelSquare11;
        else if(position==12)
        return formLudo->panelSquare12;
//---------------------Pozitia de start a jucatorului galben-----------------
        else if(position==13)
        return formLudo->panelSquare13;

        else if(position==14)
        return formLudo->panelSquare14;
        else if(position==15)
        return formLudo->panelSquare15;
        else if(position==16)
        return formLudo->panelSquare16;
        else if(position==17)
        return formLudo->panelSquare17;
        else if(position==18)
        return formLudo->panelSquare18;
        else if(position==19)
        return formLudo->panelSquare19;
        else if(position==20)
        return formLudo->panelSquare20;
        else if(position==21)
        return formLudo->panelSquare21;
        else if(position==22)
        return formLudo->panelSquare22;
        else if(position==23)
        return formLudo->panelSquare23;
        else if(position==24)
        return formLudo->panelSquare24;
        else if(position==25)
        return formLudo->panelSquare25;
//---------------------Pozitia de start a jucatorului verde------------------
        else if(position==26)
        return formLudo->panelSquare26;

        else if(position==27)
        return formLudo->panelSquare27;
        else if(position==28)
        return formLudo->panelSquare28;
        else if(position==29)
        return formLudo->panelSquare29;
        else if(position==30)
        return formLudo->panelSquare30;
        else if(position==31)
        return formLudo->panelSquare31;
        else if(position==32)
        return formLudo->panelSquare32;
        else if(position==33)
        return formLudo->panelSquare33;
        else if(position==34)
        return formLudo->panelSquare34;
        else if(position==35)
        return formLudo->panelSquare35;
        else if(position==36)
        return formLudo->panelSquare36;
        else if(position==37)
        return formLudo->panelSquare37;
        else if(position==38)
        return formLudo->panelSquare38;
//---------------------Pozitia de start a jucatorului rosu-------------------
        else if(position==39)
        return formLudo->panelSquare39;

        else if(position==40)
        return formLudo->panelSquare40;
        else if(position==41)
        return formLudo->panelSquare41;
        else if(position==42)
        return formLudo->panelSquare42;
        else if(position==43)
        return formLudo->panelSquare43;
        else if(position==44)
        return formLudo->panelSquare44;
        else if(position==45)
        return formLudo->panelSquare45;
        else if(position==46)
        return formLudo->panelSquare46;
        else if(position==47)
        return formLudo->panelSquare47;
        else if(position==48)
        return formLudo->panelSquare48;
        else if(position==49)
        return formLudo->panelSquare49;
        else if(position==50)
        return formLudo->panelSquare50;
        else if(position==51)
        return formLudo->panelSquare51;

//---------------------Casa jucatorului albastru-----------------------------

        else if(position==52)
        return formLudo->panelBlueHome1;
        else if(position==53)
        return formLudo->panelBlueHome2;
        else if(position==54)
        return formLudo->panelBlueHome3;
        else if(position==55)
        return formLudo->panelBlueHome4;
        else if(position==56)
        return formLudo->panelBlueHome5;
        else if(position==57)
        return formLudo->panelBlueHome;

//---------------------Casa jucatorului galben-------------------------------

        else if(position==58)
        return formLudo->panelYellowHome1;
        else if(position==59)
        return formLudo->panelYellowHome2;
        else if(position==60)
        return formLudo->panelYellowHome3;
        else if(position==61)
        return formLudo->panelYellowHome4;
        else if(position==62)
        return formLudo->panelYellowHome5;
        else if(position==63)
        return formLudo->panelYellowHome;

//---------------------Casa jucatorului verde--------------------------------

        else if(position==64)
        return formLudo->panelGreenHome1;
        else if(position==65)
        return formLudo->panelGreenHome2;
        else if(position==66)
        return formLudo->panelGreenHome3;
        else if(position==67)
        return formLudo->panelGreenHome4;
        else if(position==68)
        return formLudo->panelGreenHome5;
        else if(position==69)
        return formLudo->panelGreenHome;

//---------------------Casa jucatorului rosu---------------------------------

        else if(position==70)
        return formLudo->panelRedHome1;
        else if(position==71)
        return formLudo->panelRedHome2;
        else if(position==72)
        return formLudo->panelRedHome3;
        else if(position==73)
        return formLudo->panelRedHome4;
        else if(position==74)
        return formLudo->panelRedHome5;
        else if(position==75)
        return formLudo->panelRedHome;

//---------------------Baza jucatorului albastru-----------------------------

        else if(position==76)
        return formLudo->panelBlueBase1;
        else if(position==77)
        return formLudo->panelBlueBase2;
        else if(position==78)
        return formLudo->panelBlueBase3;
        else if(position==79)
        return formLudo->panelBlueBase4;

//---------------------Baza jucatorului galben-------------------------------

        else if(position==80)
        return formLudo->panelYellowBase1;
        else if(position==81)
        return formLudo->panelYellowBase2;
        else if(position==82)
        return formLudo->panelYellowBase3;
        else if(position==83)
        return formLudo->panelYellowBase4;

//---------------------Baza jucatorului verde--------------------------------

        else if(position==84)
        return formLudo->panelGreenBase1;
        else if(position==85)
        return formLudo->panelGreenBase2;
        else if(position==86)
        return formLudo->panelGreenBase3;
        else if(position==87)
        return formLudo->panelGreenBase4;

//---------------------Baza jucatorului rosu---------------------------------

        else if(position==88)
        return formLudo->panelRedBase1;
        else if(position==89)
        return formLudo->panelRedBase2;
        else if(position==90)
        return formLudo->panelRedBase3;
        else
        return formLudo->panelRedBase4;
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
