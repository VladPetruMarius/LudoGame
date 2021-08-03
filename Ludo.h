//---------------------------------------------------------------------------

#ifndef LudoH
#define LudoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
#include "Piece.h"
#include "Die.h"
#include "Square.h"
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TformLudo : public TForm
{
__published:	// IDE-managed Components
        TImage *imageBoard;
        TMainMenu *mainMenu;
        TMenuItem *itemGame;
        TMenuItem *itemRestart;
        TMenuItem *itemExit;
        TMenuItem *itemPieces;
        TMenuItem *itemBluePiece;
        TMenuItem *itemYellowPiece;
        TMenuItem *itemGreenPiece;
        TMenuItem *itemRedPiece;
        TMenuItem *itemNetwork;
        TMenuItem *itemServer;
        TMenuItem *itemClient;
        TMenuItem *itemDisconnect;
        TPanel *panelSquare51;
        TPanel *panelSquare0;
        TPanel *panelSquare1;
        TPanel *panelSquare2;
        TPanel *panelSquare3;
        TPanel *panelSquare4;
        TPanel *panelSquare5;
        TPanel *panelSquare6;
        TPanel *panelSquare7;
        TPanel *panelSquare8;
        TPanel *panelSquare9;
        TPanel *panelSquare10;
        TPanel *panelSquare11;
        TPanel *panelSquare12;
        TPanel *panelSquare13;
        TPanel *panelSquare14;
        TPanel *panelSquare15;
        TPanel *panelSquare16;
        TPanel *panelSquare17;
        TPanel *panelSquare18;
        TPanel *panelSquare19;
        TPanel *panelSquare20;
        TPanel *panelSquare21;
        TPanel *panelSquare22;
        TPanel *panelSquare23;
        TPanel *panelSquare24;
        TPanel *panelSquare25;
        TPanel *panelSquare26;
        TPanel *panelSquare27;
        TPanel *panelSquare28;
        TPanel *panelSquare29;
        TPanel *panelSquare30;
        TPanel *panelSquare31;
        TPanel *panelSquare32;
        TPanel *panelSquare33;
        TPanel *panelSquare34;
        TPanel *panelSquare35;
        TPanel *panelSquare36;
        TPanel *panelSquare37;
        TPanel *panelSquare38;
        TPanel *panelSquare39;
        TPanel *panelSquare40;
        TPanel *panelSquare41;
        TPanel *panelSquare42;
        TPanel *panelSquare43;
        TPanel *panelSquare44;
        TPanel *panelSquare45;
        TPanel *panelSquare46;
        TPanel *panelSquare47;
        TPanel *panelSquare48;
        TPanel *panelSquare49;
        TPanel *panelSquare50;
        TPanel *panelBlueHome1;
        TPanel *panelBlueHome2;
        TPanel *panelBlueHome3;
        TPanel *panelBlueHome4;
        TPanel *panelBlueHome5;
        TPanel *panelBlueHome;
        TPanel *panelYellowHome1;
        TPanel *panelYellowHome2;
        TPanel *panelYellowHome3;
        TPanel *panelYellowHome4;
        TPanel *panelYellowHome5;
        TPanel *panelYellowHome;
        TPanel *panelGreenHome1;
        TPanel *panelGreenHome2;
        TPanel *panelGreenHome3;
        TPanel *panelGreenHome4;
        TPanel *panelGreenHome5;
        TPanel *panelGreenHome;
        TPanel *panelRedHome1;
        TPanel *panelRedHome2;
        TPanel *panelRedHome3;
        TPanel *panelRedHome4;
        TPanel *panelRedHome5;
        TPanel *panelRedHome;
        TPanel *panelBlueBase1;
        TPanel *panelBlueBase2;
        TPanel *panelBlueBase3;
        TPanel *panelBlueBase4;
        TPanel *panelYellowBase1;
        TPanel *panelYellowBase2;
        TPanel *panelYellowBase3;
        TPanel *panelYellowBase4;
        TPanel *panelGreenBase1;
        TPanel *panelGreenBase2;
        TPanel *panelGreenBase3;
        TPanel *panelGreenBase4;
        TPanel *panelRedBase1;
        TPanel *panelRedBase2;
        TPanel *panelRedBase3;
        TPanel *panelRedBase4;
        TImage *imageDie;
        TButton *buttonRoll;
        TImage *imageBluePiece1;
        TImage *imageBluePiece2;
        TImage *imageBluePiece3;
        TImage *imageBluePiece4;
        TImage *imageYellowPiece1;
        TImage *imageYellowPiece2;
        TImage *imageYellowPiece3;
        TImage *imageYellowPiece4;
        TImage *imageGreenPiece1;
        TImage *imageGreenPiece2;
        TImage *imageGreenPiece3;
        TImage *imageGreenPiece4;
        TImage *imageRedPiece1;
        TImage *imageRedPiece2;
        TImage *imageRedPiece3;
        TImage *imageRedPiece4;
        TClientSocket *clientSocket;
        TServerSocket *serverSocket;
        TGroupBox *groupBox;
        TLabel *labelPlayer;
        void __fastcall itemRestartClick(TObject *Sender);
        void __fastcall itemExitClick(TObject *Sender);
        void __fastcall buttonRollClick(TObject *Sender);
        void __fastcall imageBluePiece1Click(TObject *Sender);
        void __fastcall imageBluePiece2Click(TObject *Sender);
        void __fastcall imageBluePiece3Click(TObject *Sender);
        void __fastcall imageBluePiece4Click(TObject *Sender);
        void __fastcall imageYellowPiece1Click(TObject *Sender);
        void __fastcall imageYellowPiece2Click(TObject *Sender);
        void __fastcall imageYellowPiece3Click(TObject *Sender);
        void __fastcall imageYellowPiece4Click(TObject *Sender);
        void __fastcall imageGreenPiece1Click(TObject *Sender);
        void __fastcall imageGreenPiece2Click(TObject *Sender);
        void __fastcall imageGreenPiece3Click(TObject *Sender);
        void __fastcall imageGreenPiece4Click(TObject *Sender);
        void __fastcall imageRedPiece1Click(TObject *Sender);
        void __fastcall imageRedPiece2Click(TObject *Sender);
        void __fastcall imageRedPiece3Click(TObject *Sender);
        void __fastcall imageRedPiece4Click(TObject *Sender);
        void __fastcall itemServerClick(TObject *Sender);
        void __fastcall itemClientClick(TObject *Sender);
        void __fastcall itemDisconnectClick(TObject *Sender);
        void __fastcall serverSocketClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall clientSocketRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall itemBluePieceClick(TObject *Sender);
        void __fastcall itemYellowPieceClick(TObject *Sender);
        void __fastcall itemGreenPieceClick(TObject *Sender);
        void __fastcall itemRedPieceClick(TObject *Sender);
private:	// User declarations
        int dieValue;
public:		// User declarations
        __fastcall TformLudo(TComponent* Owner);
         Piece *piece[16];
        Die *die;
        Square square;
        
        void Initializare();
        void Restart();
        void Send(int id, int zar);
        void Receive(TCustomWinSocket *Socket);
        void CheckPlayer(bool check);
};
//---------------------------------------------------------------------------
extern PACKAGE TformLudo *formLudo;
//---------------------------------------------------------------------------
#endif
