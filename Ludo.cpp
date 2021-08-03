//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ludo.h"
#include "BluePiece.h"
#include "YellowPiece.h"
#include "GreenPiece.h"
#include "RedPiece.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TformLudo *formLudo;
//---------------------------------------------------------------------------
__fastcall TformLudo::TformLudo(TComponent* Owner)
        : TForm(Owner)
{
        Initializare();
}

//---------------------Initializare------------------------------------------

void TformLudo::Initializare()
{
        //-------Jucatorul albastru---------

        piece[0] = new BluePiece(1, 76);
        piece[1] = new BluePiece(2, 77);
        piece[2] = new BluePiece(3, 78);
        piece[3] = new BluePiece(4, 79);

        //-------Jucatorul galben-----------
        piece[4] = new YellowPiece(5, 80);
        piece[5] = new YellowPiece(6, 81);
        piece[6] = new YellowPiece(7, 82);
        piece[7] = new YellowPiece(8, 83);

        //-------Jucatorul verde------------
        piece[8] = new GreenPiece(9, 84);
        piece[9] = new GreenPiece(10, 85);
        piece[10] = new GreenPiece(11, 86);
        piece[11] = new GreenPiece(12, 87);

        //-------Jucatorul rosu-------------
        piece[12] = new RedPiece(13, 88);
        piece[13] = new RedPiece(14, 89);
        piece[14] = new RedPiece(15, 90);
        piece[15] = new RedPiece(16, 91);

        //-------Initializare zar-----------
        die = new Die();
}
//---------------------Restaetare--------------------------------------------

void TformLudo::Restart()
{
        for(int i=0;i<76;i++)
        {
           for(int j=1;j<17;j++)
           {
              if(square.GiveSquare(i)->ContainsControl(piece[j-1]->GivePiece(j)))
              {
                 square.RemovePiece(piece[j-1]->GivePiece(j), i);
                 square.AddPiece(piece[j-1]->GivePiece(j), piece[j-1]->BaseIndex(j));
              }
           }
        }
}

void __fastcall TformLudo::itemRestartClick(TObject *Sender)
{
        Restart();
        for(int i=0;i<16;i++)
        {
           delete piece[i];
        }
        delete die;
        Initializare();
        imageDie->Picture->LoadFromFile("Blank.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::itemExitClick(TObject *Sender)
{
        exit(0);
}
//---------------------------------------------------------------------------
//---------------------Roll die----------------------------------------------

void __fastcall TformLudo::buttonRollClick(TObject *Sender)
{
        die->RollDie();
        imageDie->Picture->LoadFromFile("Dice"+(String)die->DieValue()+".jpg");
        dieValue=die->DieValue();

        if(die->DieValue()==6)
        {
           buttonRoll->Enabled=true;
        }

        else
        {
           buttonRoll->Enabled=false;
        }
        
        if(serverSocket->Active)
        {
           serverSocket->Socket->Connections[0]->SendText((String)die->DieValue());
        }

        else
        {
           clientSocket->Socket->SendText((String)die->DieValue());
        }

}
//---------------------------------------------------------------------------
//---------------------Trinitere mesaj---------------------------------------

void TformLudo::Send(int id, int zar)
{
        if(serverSocket->Active)
        {
           serverSocket->Socket->Connections[0]->SendText((String)id+"-"+(String)zar);
        }

        else 
        {
           clientSocket->Socket->SendText((String)id+"-"+(String)zar);
        }
}

void __fastcall TformLudo::imageBluePiece1Click(TObject *Sender)
{
        piece[0]->MovePiece(piece[0]->GetId(), dieValue);
        Send(piece[0]->GetId(), dieValue);

        if(piece[0]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageBluePiece2Click(TObject *Sender)
{
        piece[1]->MovePiece(piece[1]->GetId(), dieValue);
        Send(piece[1]->GetId(), dieValue);

        if(piece[1]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageBluePiece3Click(TObject *Sender)
{
        piece[2]->MovePiece(piece[2]->GetId(), dieValue);
        Send(piece[2]->GetId(), dieValue);

        if(piece[2]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageBluePiece4Click(TObject *Sender)
{
        piece[3]->MovePiece(piece[3]->GetId(), dieValue);
        Send(piece[3]->GetId(), dieValue);

        if(piece[3]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageYellowPiece1Click(TObject *Sender)
{
        piece[4]->MovePiece(piece[4]->GetId(), dieValue);
        Send(piece[4]->GetId(), dieValue);

        if(piece[4]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageYellowPiece2Click(TObject *Sender)
{
        piece[5]->MovePiece(piece[5]->GetId(), dieValue);
        Send(piece[5]->GetId(), dieValue);

        if(piece[5]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageYellowPiece3Click(TObject *Sender)
{
        piece[6]->MovePiece(piece[6]->GetId(), dieValue);
        Send(piece[6]->GetId(), dieValue);

        if(piece[6]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageYellowPiece4Click(TObject *Sender)
{
        piece[7]->MovePiece(piece[7]->GetId(), dieValue);
        Send(piece[7]->GetId(), dieValue);

        if(piece[7]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageGreenPiece1Click(TObject *Sender)
{
        piece[8]->MovePiece(piece[8]->GetId(), dieValue);
        Send(piece[8]->GetId(), dieValue);

        if(piece[8]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageGreenPiece2Click(TObject *Sender)
{
        piece[9]->MovePiece(piece[9]->GetId(), dieValue);
        Send(piece[9]->GetId(), dieValue);

        if(piece[9]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageGreenPiece3Click(TObject *Sender)
{
        piece[10]->MovePiece(piece[10]->GetId(), dieValue);
        Send(piece[10]->GetId(), dieValue);

        if(piece[10]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageGreenPiece4Click(TObject *Sender)
{
        piece[11]->MovePiece(piece[11]->GetId(), dieValue);
        Send(piece[11]->GetId(), dieValue);

        if(piece[11]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageRedPiece1Click(TObject *Sender)
{
        piece[12]->MovePiece(piece[12]->GetId(), dieValue);
        Send(piece[12]->GetId(), dieValue);

        if(piece[12]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageRedPiece2Click(TObject *Sender)
{
        piece[13]->MovePiece(piece[13]->GetId(), dieValue);
        Send(piece[13]->GetId(), dieValue);

        if(piece[13]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageRedPiece3Click(TObject *Sender)
{
        piece[14]->MovePiece(piece[14]->GetId(), dieValue);
        Send(piece[14]->GetId(), dieValue);

        if(piece[14]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::imageRedPiece4Click(TObject *Sender)
{
        piece[15]->MovePiece(piece[15]->GetId(), dieValue);
        Send(piece[15]->GetId(), dieValue);

        if(piece[15]->WasMoved())
        {
           dieValue=0;
        }
}
//---------------------------------------------------------------------------
//---------------------Server------------------------------------------------

void __fastcall TformLudo::itemServerClick(TObject *Sender)
{
        serverSocket->Active=true;
        itemClient->Enabled=false;
        itemDisconnect->Enabled=true;
        itemPieces->Enabled=true;
}
//---------------------------------------------------------------------------
//---------------------Client------------------------------------------------

void __fastcall TformLudo::itemClientClick(TObject *Sender)
{
        String ipAddress;
        if(InputQuery("Connect to server", "IP Address:", ipAddress))
        {
           if(ipAddress.Length()<1)
           {
              ShowMessage("Introduceti adresa ip");
           }
           
           else
           {
              clientSocket->Active=false;
              clientSocket->Address=ipAddress;
              clientSocket->Active=true;

              itemPieces->Enabled=true;
              itemDisconnect->Enabled=true;
              itemServer->Enabled=false;
           }
        }
}
//---------------------------------------------------------------------------
//---------------------Cerificare jucatori-----------------------------------

void TformLudo::CheckPlayer(bool check)
{
        if(itemBluePiece->Checked)
        {
           itemBluePiece->Checked=check;

           imageBluePiece1->Enabled=check;
           imageBluePiece2->Enabled=check;
           imageBluePiece3->Enabled=check;
           imageBluePiece4->Enabled=check;
           labelPlayer->Caption="Jucatorul albastru";
           groupBox->Color=clGradientActiveCaption;
        }

        else if(itemYellowPiece->Checked)
        {
           itemYellowPiece->Checked=check;

           imageYellowPiece1->Enabled=check;
           imageYellowPiece2->Enabled=check;
           imageYellowPiece3->Enabled=check;
           imageYellowPiece4->Enabled=check;
           labelPlayer->Caption="Jucatorul galben";
           groupBox->Color=clYellow;
        }

        else if(itemGreenPiece->Checked)
        {
           itemGreenPiece->Checked=check;

           imageGreenPiece1->Enabled=check;
           imageGreenPiece2->Enabled=check;
           imageGreenPiece3->Enabled=check;
           imageGreenPiece4->Enabled=check;
           labelPlayer->Caption="Jucatorul verde";
           groupBox->Color=clLime;
           }

        else if(itemRedPiece->Checked)
        {
           itemRedPiece->Checked=check;

           imageRedPiece1->Enabled=check;
           imageRedPiece2->Enabled=check;
           imageRedPiece3->Enabled=check;
           imageRedPiece4->Enabled=check;
           labelPlayer->Caption="Jucatorul rosu";
           groupBox->Color=clRed;
        }

        else
        {
           labelPlayer->Caption="---";
           groupBox->Color=clGradientInactiveCaption;

           imageBluePiece1->Enabled=false;
           imageBluePiece2->Enabled=false;
           imageBluePiece3->Enabled=false;
           imageBluePiece4->Enabled=false;

           imageYellowPiece1->Enabled=false;
           imageYellowPiece2->Enabled=false;
           imageYellowPiece3->Enabled=false;
           imageYellowPiece4->Enabled=false;

           imageGreenPiece1->Enabled=false;
           imageGreenPiece2->Enabled=false;
           imageGreenPiece3->Enabled=false;
           imageGreenPiece4->Enabled=false;

           imageRedPiece1->Enabled=false;
           imageRedPiece2->Enabled=false;
           imageRedPiece3->Enabled=false;
           imageRedPiece4->Enabled=false;
        }
}

//---------------------Deconectare-------------------------------------------
void __fastcall TformLudo::itemDisconnectClick(TObject *Sender)
{
        itemBluePiece->Enabled=true;
        itemYellowPiece->Enabled=true;
        itemGreenPiece->Enabled=true;
        itemRedPiece->Enabled=true;

        if(serverSocket->Active)
        {
           serverSocket->Active=false;
           itemDisconnect->Enabled=false;
           itemPieces->Enabled=false;
           itemClient->Enabled=true;
           buttonRoll->Enabled=false;
           CheckPlayer(false);
           groupBox->Color=clGradientInactiveCaption;
           labelPlayer->Caption="---";
        }

        else
        {
           clientSocket->Socket->SendText("Deconectat");
           clientSocket->Active=false;
           itemDisconnect->Enabled=false;
           itemPieces->Enabled=false;
           itemServer->Enabled=true;
           buttonRoll->Enabled=false;
           CheckPlayer(false);
           groupBox->Color=clGradientInactiveCaption;
           labelPlayer->Caption="---";
        }
}
//---------------------------------------------------------------------------
//---------------------Receptionare mesaj------------------------------------

void TformLudo::Receive(TCustomWinSocket *Socket)
{
        String message;
        int id;
        int zar;

        message=Socket->ReceiveText();
        if(message.Length()==1)
        {
           imageDie->Picture->LoadFromFile("Dice"+message+".jpg");

           if(message!="6")
           {
              if(serverSocket->Active)
              {
                 buttonRoll->Enabled=true;
              }

              else
              {
                 buttonRoll->Enabled=true;
              }
           }
        }

        else if(message.Length()==3)
        {
           id=message.SubString(0, 1).ToInt();
           zar=message.SubString(3, 1).ToInt();
           piece[id-1]->MovePiece(id, zar);
        }

        else if(message.Length()==4)
        {
           id=message.SubString(0, 2).ToInt();
           zar=message.SubString(4, 1).ToInt();
           piece[id-1]->MovePiece(id, zar);
        }

        else
        {
           if(serverSocket->Active)
           {
              if(message=="Conectat")
              {
                 buttonRoll->Enabled=true;
              }

              else
              {
                 buttonRoll->Enabled=false;
              }
           }
        }
}

//---------------------Server-ul receptioneaza mesajul-----------------------
void __fastcall TformLudo::serverSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        Receive(Socket);
}
//---------------------------------------------------------------------------

//---------------------Client-ul receptioneaza mesajul-----------------------
void __fastcall TformLudo::clientSocketRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        Receive(Socket);
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::itemBluePieceClick(TObject *Sender)
{
        itemBluePiece->Checked=!itemBluePiece->Checked;
        itemYellowPiece->Enabled=!itemBluePiece->Checked;
        itemGreenPiece->Enabled=!itemBluePiece->Checked;
        itemRedPiece->Enabled=!itemBluePiece->Checked;

        CheckPlayer(itemBluePiece->Checked);

        if(clientSocket->Active)
        {
           clientSocket->Socket->SendText("Conectat");
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::itemYellowPieceClick(TObject *Sender)
{
        itemYellowPiece->Checked=!itemYellowPiece->Checked;
        itemBluePiece->Enabled=!itemYellowPiece->Checked;
        itemGreenPiece->Enabled=!itemYellowPiece->Checked;
        itemRedPiece->Enabled=!itemYellowPiece->Checked;

        CheckPlayer(itemYellowPiece->Checked);

        if(clientSocket->Active)
        {
           clientSocket->Socket->SendText("Conectat");
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::itemGreenPieceClick(TObject *Sender)
{
        itemGreenPiece->Checked=!itemGreenPiece->Checked;
        itemBluePiece->Enabled=!itemGreenPiece->Checked;
        itemYellowPiece->Enabled=!itemGreenPiece->Checked;
        itemRedPiece->Enabled=!itemGreenPiece->Checked;

        CheckPlayer(itemGreenPiece->Checked);

        if(clientSocket->Active)
        {
           clientSocket->Socket->SendText("Conectat");
        }
}
//---------------------------------------------------------------------------

void __fastcall TformLudo::itemRedPieceClick(TObject *Sender)
{
        itemRedPiece->Checked=!itemRedPiece->Checked;
        itemBluePiece->Enabled=!itemRedPiece->Checked;
        itemYellowPiece->Enabled=!itemRedPiece->Checked;
        itemGreenPiece->Enabled=!itemRedPiece->Checked;

        CheckPlayer(itemRedPiece->Checked);
        
        if(clientSocket->Active)
        {
           clientSocket->Socket->SendText("Conectat");
        }
}
//---------------------------------------------------------------------------

