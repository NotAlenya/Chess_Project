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


void __fastcall TForm1::connectBtnClick(TObject *Sender)
{
        bool isServer = false;
        clientSocket->Host = Edit2->Text;
        clientSocket->Port = 54000;
        try {
                clientSocket->Open();
        } catch(Exception &e) {

        }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::disconnectBtnClick(TObject *Sender)
{
         if(clientSocket->Active) clientSocket->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        if(clientSocket->Active) clientShape->Brush->Color = clGreen;
        else clientShape->Brush->Color = clRed;
        if(serverSocket->Active) serverShape->Brush->Color = clGreen;
        else serverShape->Brush->Color = clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::tempBtnClick(TObject *Sender)
{
        clientSocket->Socket->SendText(Edit1->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClientSocketRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        String message = Socket->ReceiveText();
        txtBox->Text = message;       
}
//---------------------------------------------------------------------------

