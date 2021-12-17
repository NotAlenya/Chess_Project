//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
public:
 int nombre_de_click;
 int xDepart;
 int yDepart;
 int xArriver;
 int yArriver;
__published:	// Composants gérés par l'EDI
        TImage *Board;
        TImage *Image_1_8;
        TImage *Image_2_1;
        TImage *Image_2_2;
        TImage *Image_2_3;
        TImage *Image_2_4;
        TImage *Image_2_6;
        TImage *Image_2_7;
        TImage *Image_2_8;
        TImage *Image_3_1;
        TImage *Image_3_2;
        TImage *Image_3_3;
        TImage *Image_3_4;
        TImage *Image_3_5;
        TImage *Image_3_6;
        TImage *Image_3_7;
        TImage *Image_3_8;
        TImage *Image_4_1;
        TImage *Image_4_3;
        TImage *Image_4_4;
        TImage *Image_4_5;
        TImage *Image_4_6;
        TImage *Image_4_7;
        TImage *Image_1_1;
        TImage *Image_1_2;
        TImage *Image_1_4;
        TImage *Image_1_6;
        TImage *Image_4_2;
        TImage *Image_1_3;
        TImage *Image_1_5;
        TImage *Image_1_7;
        TImage *Image_2_5;
        TImage *Image_4_8;
        TImage *Image_5_1;
        TImage *Image_5_2;
        TImage *Image_5_3;
        TImage *Image_5_4;
        TImage *Image_5_5;
        TImage *Image_5_6;
        TImage *Image_5_7;
        TImage *Image_5_8;
        TImage *Image_6_1;
        TImage *Image_6_2;
        TImage *Image_6_3;
        TImage *Image_6_4;
        TImage *Image_6_5;
        TImage *Image_6_6;
        TImage *Image_6_7;
        TImage *Image_6_8;
        TImage *Image_7_1;
        TImage *Image_7_2;
        TImage *Image_7_3;
        TImage *Image_7_4;
        TImage *Image_7_5;
        TImage *Image_7_6;
        TImage *Image_7_7;
        TImage *Image_7_8;
        TImage *Image_8_1;
        TImage *Image_8_2;
        TImage *Image_8_3;
        TImage *Image_8_4;
        TImage *Image_8_5;
        TImage *Image_8_6;
        TImage *Image_8_7;
        TImage *Image_8_8;
        TEdit *Edit1;
        TButton *Button1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TServerSocket *serverSocket;
        TShape *serverShape;
        TTimer *Timer;
        TMemo *txtBox;
        TButton *btnSend;
        TEdit *Edit;
        TLabel *Label5;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Image_2_1Click(TObject *Sender);
        void __fastcall Image_1_1Click(TObject *Sender);
        void __fastcall Image_3_1Click(TObject *Sender);
        void __fastcall Image_4_1Click(TObject *Sender);
        void __fastcall Image_5_1Click(TObject *Sender);
        void __fastcall Image_6_1Click(TObject *Sender);
        void __fastcall Image_7_1Click(TObject *Sender);
        void __fastcall Image_8_1Click(TObject *Sender);
        void __fastcall Image_1_2Click(TObject *Sender);
        void __fastcall Image_2_2Click(TObject *Sender);
        void __fastcall Image_3_2Click(TObject *Sender);
        void __fastcall Image_4_2Click(TObject *Sender);
        void __fastcall Image_5_2Click(TObject *Sender);
        void __fastcall Image_6_2Click(TObject *Sender);
        void __fastcall Image_7_2Click(TObject *Sender);
        void __fastcall Image_8_2Click(TObject *Sender);
        void __fastcall Image_1_3Click(TObject *Sender);
        void __fastcall Image_2_3Click(TObject *Sender);
        void __fastcall Image_3_3Click(TObject *Sender);
        void __fastcall Image_4_3Click(TObject *Sender);
        void __fastcall Image_5_3Click(TObject *Sender);
        void __fastcall Image_6_3Click(TObject *Sender);
        void __fastcall Image_7_3Click(TObject *Sender);
        void __fastcall Image_8_3Click(TObject *Sender);
        void __fastcall Image_1_4Click(TObject *Sender);
        void __fastcall Image_2_4Click(TObject *Sender);
        void __fastcall Image_3_4Click(TObject *Sender);
        void __fastcall Image_4_4Click(TObject *Sender);
        void __fastcall Image_5_4Click(TObject *Sender);
        void __fastcall Image_6_4Click(TObject *Sender);
        void __fastcall Image_7_4Click(TObject *Sender);
        void __fastcall Image_8_4Click(TObject *Sender);
        void __fastcall Image_1_5Click(TObject *Sender);
        void __fastcall Image_2_5Click(TObject *Sender);
        void __fastcall Image_3_5Click(TObject *Sender);
        void __fastcall Image_4_5Click(TObject *Sender);
        void __fastcall Image_5_5Click(TObject *Sender);
        void __fastcall Image_6_5Click(TObject *Sender);
        void __fastcall Image_7_5Click(TObject *Sender);
        void __fastcall Image_8_5Click(TObject *Sender);
        void __fastcall Image_1_6Click(TObject *Sender);
        void __fastcall Image_2_6Click(TObject *Sender);
        void __fastcall Image_3_6Click(TObject *Sender);
        void __fastcall Image_4_6Click(TObject *Sender);
        void __fastcall Image_5_6Click(TObject *Sender);
        void __fastcall Image_6_6Click(TObject *Sender);
        void __fastcall Image_7_6Click(TObject *Sender);
        void __fastcall Image_8_6Click(TObject *Sender);
        void __fastcall Image_1_7Click(TObject *Sender);
        void __fastcall Image_2_7Click(TObject *Sender);
        void __fastcall Image_3_7Click(TObject *Sender);
        void __fastcall Image_4_7Click(TObject *Sender);
        void __fastcall Image_5_7Click(TObject *Sender);
        void __fastcall Image_6_7Click(TObject *Sender);
        void __fastcall Image_7_7Click(TObject *Sender);
        void __fastcall Image_8_7Click(TObject *Sender);
        void __fastcall Image_1_8Click(TObject *Sender);
        void __fastcall Image_2_8Click(TObject *Sender);
        void __fastcall Image_3_8Click(TObject *Sender);
        void __fastcall Image_4_8Click(TObject *Sender);
        void __fastcall Image_5_8Click(TObject *Sender);
        void __fastcall Image_6_8Click(TObject *Sender);
        void __fastcall Image_7_8Click(TObject *Sender);
        void __fastcall Image_8_8Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall TimerTimer(TObject *Sender);
        void __fastcall serverSocketClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall btnSendClick(TObject *Sender);
        void __fastcall serverSocketAccept(TObject *Sender,
          TCustomWinSocket *Socket);


private:	// Déclarations de l'utilisateur
public:		// Déclarations de l'utilisateur
        __fastcall TForm1(TComponent* Owner);
        void AfficherPlateau();
        void AfficherEchiquier();

       // TImage LeTabDesComposantsImage [8][8];
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
