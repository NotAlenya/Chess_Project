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
/*
void Afficher();

int main()
{
    Game.Init();
    Afficher();
    Game.Deplacer();
    cout<<"\n"<<endl;
    Afficher();
    return 0;
}

void Afficher()
{

    int i;
    int j;

    for(i=1;i<9;i++)
    {
        printf("\n");

        for(j=1;j<9;j++)
        {
            printf("%3d",Game.Plateau[i][j]);
        }
    }
    cout<<endl;
    cout<<endl;
}
  */
