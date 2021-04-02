#include <iostream>
#include "C_Partie.h"

C_Partie::C_Partie()
{
    Vide= 0;
    Interdit= 99;

    PionBlanc = 11;
    CavalierBlanc = 12;
    FouBlanc = 13;
    TourBlanc = 14;
    DameBlanc =15;
    RoiBlanc =16;

    PionNoir = 1;
    CavalierNoir = 2;
    FouNoir = 3;
    TourNoir = 4;
    DameNoir =5;
    RoiNoir =6;

    Init();
}

//-----------------------------------------------------------------------------------

void C_Partie::Init()
{
    SetPiece();
    Tour = 0;
}
//-----------------------------------------------------------------------------------
void C_Partie::SetPiece()
{
    int x;
    int y;


    // boucle tout vider
    for (x=1;x<9;x++)
    {
         for(y=3;y<7;y++)
        {
            Plateau[x][y] = Vide;
        }
    }


        y = 0;

        //boucle interdit
         for (x=0;x<9;x++)
        {

                Plateau[x][y] = Interdit;

        }

        x=0;
         for (y=0;y<9;y++)
        {

                Plateau[x][y] = Interdit;

        }



    Plateau[1][8] = TourBlanc;
    Plateau[2][8] = CavalierBlanc;
    Plateau[3][8] = FouBlanc;
    Plateau[4][8] = DameBlanc;
    Plateau[5][8] = RoiBlanc;
    Plateau[6][8] = FouBlanc;
    Plateau[7][8] = CavalierBlanc;
    Plateau[8][8] = TourBlanc;

    Plateau[1][7] = PionBlanc;
    Plateau[2][7] = PionBlanc;
    Plateau[3][7] = PionBlanc;
    Plateau[4][7] = PionBlanc;
    Plateau[5][7] = PionBlanc;
    Plateau[6][7] = PionBlanc;
    Plateau[7][7] = PionBlanc;
    Plateau[8][7] = PionBlanc;

//-------------------------------------------
     Plateau[1][1] = TourNoir;
    Plateau[2][1] = CavalierNoir;
    Plateau[3][1] = FouNoir;
    Plateau[4][1] = DameNoir;
    Plateau[5][1] = RoiNoir;
    Plateau[6][1] = FouNoir;
    Plateau[7][1] = CavalierNoir;
    Plateau[8][1] = TourNoir;

    Plateau[1][2] = PionNoir;
    Plateau[2][2] = PionNoir;
    Plateau[3][2] = PionNoir;
    Plateau[4][2] = PionNoir;
    Plateau[5][2] = PionNoir;
    Plateau[6][2] = PionNoir;
    Plateau[7][2] = PionNoir;
    Plateau[8][2] = PionNoir;

}
//-----------------------------------------------------------------------------------
void C_Partie::Deplacer()
{

    SystemeTour();

    // XDepart =0 ,  YDepart =1 ,  XArriver =2 ,  YArriver =3
    Demander();
    int stockage; //utiliser pour le roque ps:fonctionne pas a 100%
    //V�rification

    Manger();


     stockage = Plateau[XArriver][YArriver];

     Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart];

     Plateau[XDepart][YDepart] = stockage;

}
//-----------------------------------------------------------------------------------
void C_Partie::Demander () //param�tre t = tabCordonnees
{
   std::cin>> XDepart >>  YDepart >>  XArriver >>  YArriver;
}
//-----------------------------------------------------------------------------------
void C_Partie::Manger()
{

    Plateau[XArriver][YArriver] = 0 ;

//-------------------------------------------

/*
 if (Plateau[x][y]>=11 || MaCouleur<=16)
    {
        MaCouleur = 0; //Blanc
    }

    if (MaCouleur>=1 || MaCouleur<=6)
    {
        MaCouleur = 1; //Noir
    }
*/
}


//-----------------------------------------------------------------------------------
void C_Partie::SystemeTour()
{
    Tour++;
    if (Tour%2 == 1)
    {
        MaCouleur = 0; //Blanc
        std::cout<<"Au tour des blancs de jouer"<<std::endl;
    }

    if(Tour%2 == 0)
    {
        MaCouleur = 1; //Noir
        std::cout<<"Au tour des noirs de jouer"<<std::endl;
    }
}
//-------------------------------------------