//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        serverSocket->Port = 54000;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnConnectClick(TObject *Sender)
{
        serverSocket->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerTimer(TObject *Sender)
{
        if(serverSocket->Active) serverShape->Brush->Color = clGreen;
        else serverShape->Brush->Color = clRed;
        Label2->Caption = serverSocket->Socket->ActiveConnections;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::serverSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
    String message = Socket->ReceiveText();
    txtBox->Text = message;    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnStopClick(TObject *Sender)
{
        serverSocket->Active = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnSendClick(TObject *Sender)
{
        serverSocket->Socket->Connections[0]->SendText(Edit->Text);
       //Works   serverSocket->Socket->Connections[1]->Close();
}
//--------------------------------------------------------------------------

void __fastcall TForm1::serverSocketAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
        if(serverSocket->Socket->ActiveConnections > 1) {
                serverSocket->Socket->Connections[1]->Close();
        }
}
//---------------------------------------------------------------------------
