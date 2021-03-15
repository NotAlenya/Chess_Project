#include <iostream>

using namespace std;

#include "C_Partie.h"

//-----------------------------------------------------------------------------------
void C_Partie::Init()
{
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
void C_Partie::Deplacer()
{
    int tabCordonnees[4]; // YDepart =0 ,  XDepart =1 ,  YArriver =2 ,  XArriver =3
    Demander((int*)&tabCordonnees);
    int stockage; //utiliser pour le roque ps:fonctionne pas a 100%


    stockage = Plateau[tabCordonnees[2]][tabCordonnees[3]];                                             // stockage = Plateau[YArriver][XArriver];
    Plateau[tabCordonnees[2]][tabCordonnees[3]] = Plateau[tabCordonnees[0]][tabCordonnees[1]] ;         // Plateau[YArriver][XArriver] = Plateau[YDepart][XDepart]
    Plateau[tabCordonnees[0]][tabCordonnees[1]] = stockage;                                             // Plateau[YDepart][XDepart] = stockage;
    /*
    Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart] ;
    Plateau[XDepart][YDepart] = 0;
    */
}
//-----------------------------------------------------------------------------------
void C_Partie::Demander (int *t) //paramètre t = tabCordonnees
{
   int XDepart , YDepart , XArriver , YArriver;
   cin>> YDepart >>  XDepart >>  YArriver >>  XArriver;
   t[0] = YDepart;
   t[1] = XDepart;
   t[2] = YArriver;
   t[3] = XArriver;
}
//-----------------------------------------------------------------------------------
