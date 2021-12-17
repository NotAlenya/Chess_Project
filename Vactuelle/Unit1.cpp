//---------------------------------------------------------------------------
#include <iostream>
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include "Unit1.h"
using namespace std;
#include "C_Partie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
C_Partie Game;
//----------------------------MODIF PAR KEVIN----------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        //AnsiString str = Game.GetFileNameImagePiece(Y,X).c_str();

        AfficherEchiquier();
        nombre_de_click = 9999;








}
//---------------------------------------------------------------------------

void TForm1::AfficherEchiquier()
{
        Image_1_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,1).c_str());
        Image_1_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,2).c_str());
        Image_1_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,3).c_str());
        Image_1_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,4).c_str());
        Image_1_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,5).c_str());
        Image_1_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,6).c_str());
        Image_1_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,7).c_str());
        Image_1_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(1,8).c_str());
        Image_2_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,1).c_str());
        Image_2_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,2).c_str());
        Image_2_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,3).c_str());
        Image_2_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,4).c_str());
        Image_2_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,5).c_str());
        Image_2_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,6).c_str());
        Image_2_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,7).c_str());
        Image_2_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(2,8).c_str());
        Image_3_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,1).c_str());
        Image_3_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,2).c_str());
        Image_3_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,3).c_str());
        Image_3_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,4).c_str());
        Image_3_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,5).c_str());
        Image_3_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,6).c_str());
        Image_3_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,7).c_str());
        Image_3_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(3,8).c_str());
        Image_4_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,1).c_str());
        Image_4_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,2).c_str());
        Image_4_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,3).c_str());
        Image_4_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,4).c_str());
        Image_4_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,5).c_str());
        Image_4_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,6).c_str());
        Image_4_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,7).c_str());
        Image_4_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(4,8).c_str());
        Image_5_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,1).c_str());
        Image_5_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,2).c_str());
        Image_5_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,3).c_str());
        Image_5_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,4).c_str());
        Image_5_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,5).c_str());
        Image_5_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,6).c_str());
        Image_5_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,7).c_str());
        Image_5_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(5,8).c_str());
        Image_6_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,1).c_str());
        Image_6_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,2).c_str());
        Image_6_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,3).c_str());
        Image_6_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,4).c_str());
        Image_6_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,5).c_str());
        Image_6_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,6).c_str());
        Image_6_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,7).c_str());
        Image_6_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(6,8).c_str());
        Image_7_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,1).c_str());
        Image_7_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,2).c_str());
        Image_7_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,3).c_str());
        Image_7_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,4).c_str());
        Image_7_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,5).c_str());
        Image_7_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,6).c_str());
        Image_7_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,7).c_str());
        Image_7_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(7,8).c_str());
        Image_8_1->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,1).c_str());
        Image_8_2->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,2).c_str());
        Image_8_3->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,3).c_str());
        Image_8_4->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,4).c_str());
        Image_8_5->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,5).c_str());
        Image_8_6->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,6).c_str());
        Image_8_7->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,7).c_str());
        Image_8_8->Picture->LoadFromFile(Game.GetFileNameImagePiece(8,8).c_str());
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        int xDepart = Edit1->Text.ToInt();
        int yDepart = Edit2->Text.ToInt();
        int xArriver = Edit3->Text.ToInt();
        int yArriver = Edit4->Text.ToInt();

        Game.Demander(xDepart , yDepart , xArriver ,yArriver);
        Game.Deplacer();
        AfficherEchiquier();
}
//---------------------------------------------------------------------------
  // DEMANDER OBLIGATOIREMENT AU PROF UNE SOLUTION POUR CONVERTIR E3 ->


void __fastcall TForm1::Image_1_1Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image_2_1Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_1Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_1Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_1Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_1Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_1Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 1;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 1;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_1Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                  xDepart = 1;
                   yDepart = 8;
           }
            if(nombre_de_click%2 == 0){
                    xArriver = 1;
                    yArriver = 8;
                    Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                     Game.Deplacer();
                      AfficherEchiquier();
              }
              nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_2Click(TObject *Sender)
{
 if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_2Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 2;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 2;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_3Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_3Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 3;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 3;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_4Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_4Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 4;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 4;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_5Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 5;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 5;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_6Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 6;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 6;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_7Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 7;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 7;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_1_8Click(TObject *Sender)
{
         if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 1;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 1;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_2_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 2;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 2;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_3_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 3;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 3;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_4_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 4;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 4;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_5_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 5;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 5;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_6_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 6;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 6;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_7_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 7;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 7;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_8_8Click(TObject *Sender)
{
        if(nombre_de_click %2 == 1){
                xDepart = 8;
                yDepart = 8;
        }
        if(nombre_de_click%2 == 0){
                xArriver = 8;
                yArriver = 8;
                Game.Demander(xDepart , yDepart , xArriver ,yArriver);
                Game.Deplacer();
                 AfficherEchiquier();
        }
        nombre_de_click --;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        serverSocket->Port = 54000;
        serverSocket->Open();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerTimer(TObject *Sender)
{
        if(serverSocket->Active)
                serverShape->Brush->Color = clGreen;
        else serverShape->Brush->Color = clRed;
        Label5->Caption = serverSocket->Socket->ActiveConnections;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::serverSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
    // Basic message handler
    String message = Socket->ReceiveText();
    txtBox->Text = message;

    int xDepart = int ( message[2]-48 );
    int yDepart = int ( message[4]-48 );
    int xArr = int ( message[8]-48 );
    int yArr = int ( message[10]-48 );


    Label1->Caption = xDepart ;





}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnSendClick(TObject *Sender)
{
        // Return AnsiString so easy to use
        //serverSocket->Socket->Connections[0]->SendText(Edit->Text);
        String msg = "#"+Edit1->Text+"#"+Edit2->Text+"#"+
                                Edit3->Text+"#"+Edit4->Text+"#";
        serverSocket->Socket->Connections[0]->SendText(msg);
        }
//---------------------------------------------------------------------------

void __fastcall TForm1::serverSocketAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
        // Check for pee to peer only
        if(serverSocket->Socket->ActiveConnections > 1) {
                serverSocket->Socket->Connections[1]->Close();
        }
}
//---------------------------------------------------------------------------

