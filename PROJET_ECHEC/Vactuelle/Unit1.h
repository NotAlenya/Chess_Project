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
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
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
