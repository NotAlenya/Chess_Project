#include <iostream>

using namespace std;

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
//-------------------------------------------

    Tour = 0;
    if (Tour == 0)
    {
        MaCouleur = 0; //0 = Blanc
        cout<<"Au tour des blancs de jouer"<<endl;


    }

    if(Tour == 1)
    {
        MaCouleur = 1; //1 = Noir
        cout<<"Au tour des noirs de jouer"<<endl;

    }

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
    int tabCordonnees[4]; // XDepart =0 ,  YDepart =1 ,  XArriver =2 ,  YArriver =3
    Demander((int*)&tabCordonnees);
    int stockage; //utiliser pour le roque ps:fonctionne pas a 100%


    stockage = Plateau[tabCordonnees[2]][tabCordonnees[3]];
    // stockage = Plateau[XArriver][YArriver];

    Plateau[tabCordonnees[2]][tabCordonnees[3]] = Plateau[tabCordonnees[0]][tabCordonnees[1]] ;
    // Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart]

    Plateau[tabCordonnees[0]][tabCordonnees[1]] = stockage;
    // Plateau[XDepart][YDepart] = stockage;

    /*
    Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart] ;
    Plateau[XDepart][YDepart] = 0;
    */
}
//-----------------------------------------------------------------------------------
void C_Partie::Demander (int *t) //paramètre t = tabCordonnees
{
   int XDepart , YDepart , XArriver , YArriver;
   cin>> XDepart >>  YDepart >>  XArriver >>  YArriver;
   t[0] = XDepart;
   t[1] = YDepart;
   t[2] = XArriver;
   t[3] = YArriver;
}
//-----------------------------------------------------------------------------------
void C_Partie::Manger()
{


    int tabCordonnees[4]; // XDepart =0 ,  YDepart =1 ,  XArriver =2 ,  YArriver =3
    Demander((int*)&tabCordonnees);

    Plateau[tabCordonnees[2]][tabCordonnees[3]] = Plateau[tabCordonnees[0]][tabCordonnees[1]] ;
    Plateau[tabCordonnees[0]][tabCordonnees[1]] = 0;
//-------------------------------------------

 if (MaCouleur>=11 || MaCouleur<=16)
    {
        MaCouleur = 0; //Blanc
    }

    if (MaCouleur>=1 || MaCouleur<=6)
    {
        MaCouleur = 1; //Noir
    }

}



/* MODIF PAR KEVIN LE 26/02 */
//-------------------------------------------

std::string C_Partie::GetFileNameImagePiece(int y, int x)
{

        std::string chemin = "../";
        int i;
        int j;
        int token = 0;
        // if piece noire
        if(Plateau[x][y] < 10 && Plateau[x][y] != 0){
              chemin = chemin + "Pieces_noires/";
              token = x;
              if(y%2 == 0){
                token ++;
              }
              if(token%2 == 1){
                chemin = chemin + "Fond_clair/";
              }
               if(token%2 == 0){
                chemin = chemin + "Fond_fonce/";
              }

              if(Plateau[x][y] == 1){
                 chemin = chemin + "PION.bmp";
              }
               if(Plateau[x][y] == 2){
                 chemin = chemin + "CAVALIER.bmp";
              }
               if(Plateau[x][y] == 3){
                  chemin = chemin + "FOU.bmp";
              }
               if(Plateau[x][y] == 4){
                  chemin = chemin + "TOUR.bmp";
              }
               if(Plateau[x][y] == 5){
                 chemin = chemin + "DAME.bmp";
              }
               if(Plateau[x][y] == 6){
                 chemin = chemin + "ROI.bmp";
              }


         }
         else if (Plateau[x][y] > 10){
              chemin = chemin + "Pieces_blanches/";
              token = x;
              if(y%2 == 0){
                token ++;
              }
              if(token%2 == 1){
                chemin = chemin + "Fond_clair/";
              }
               if(token%2 == 0){
                chemin = chemin + "Fond_fonce/";
              }

              if(Plateau[x][y] == 11){
                 chemin = chemin + "PION.bmp";
              }
               if(Plateau[x][y] == 12){
                 chemin = chemin + "CAVALIER.bmp";
              }
               if(Plateau[x][y] == 13){
                  chemin = chemin + "FOU.bmp";
              }
               if(Plateau[x][y] == 14){
                  chemin = chemin + "TOUR.bmp";
              }
               if(Plateau[x][y] == 15){
                 chemin = chemin + "DAME.bmp";
              }
               if(Plateau[x][y] == 16){
                 chemin = chemin + "ROI.bmp";
              }
         }
         else  if(Plateau[x][y] == 0){
                token = x;
               if(y%2 == 0){
                 token ++;
              }
              if(token%2 == 0){
                chemin = chemin + "case_fonce.bmp";
              }
               if(token%2 == 1){
                chemin = chemin + "case_clair.bmp";
              }

         }

   return chemin;
}


// boureau

//-----------------------------------------------------------------------------------
/*void C_Partie::Deplacer(,,,)
{
    int tabCordonnees[4]; // XDepart =0 ,  YDepart =1 ,  XArriver =2 ,  YArriver =3
    //Demander((int*)&tabCordonnees);
    int stockage; //utiliser pour le roque ps:fonctionne pas a 100%


    stockage = Plateau[tabCordonnees[2]][tabCordonnees[3]];
    // stockage = Plateau[XArriver][YArriver];

    Plateau[tabCordonnees[2]][tabCordonnees[3]] = Plateau[tabCordonnees[0]][tabCordonnees[1]] ;
    // Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart]

    Plateau[tabCordonnees[0]][tabCordonnees[1]] = stockage;
    // Plateau[XDepart][YDepart] = stockage;
  */
    /*
    Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart] ;
    Plateau[XDepart][YDepart] = 0;
    */
//}
