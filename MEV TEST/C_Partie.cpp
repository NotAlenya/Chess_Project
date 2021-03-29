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

    if (NoBodyIsHere((int*)&tabCordonnees) && DiagonalMovement((int*)&tabCordonnees)) {
        stockage = Plateau[tabCordonnees[2]][tabCordonnees[3]];
        // stockage = Plateau[XArriver][YArriver];

        Plateau[tabCordonnees[2]][tabCordonnees[3]] = Plateau[tabCordonnees[0]][tabCordonnees[1]];
        // Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart]

        Plateau[tabCordonnees[0]][tabCordonnees[1]] = stockage;
        // Plateau[XDepart][YDepart] = stockage;

        /*
        Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart] ;
        Plateau[XDepart][YDepart] = 0;
        */
    }
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
/*
 if (MaCouleur>=11 || MaCouleur<=16)
    {
        MaCouleur = Blanc;
    }

    if (MaCouleur>=1 || MaCouleur<=6)
    {
        MaCouleur = Noir;
    }
*/
}

//-----------------------------------------------------------------------------------

/*-Fonction Verification-*/

bool C_Partie::Verification(int* TabCoordonnee) {

    //variable qui vérifie la condition Verification
    bool check = false; 
    
    int xDepart = TabCoordonnee[0];
    int yDepart = TabCoordonnee[1];
    int xArriver = TabCoordonnee[2];
    int yArriver = TabCoordonnee[3];

    int Piece = Plateau[xDepart][yDepart];
    int TypePiece = Piece;

    if (Piece > 10) {
        TypePiece -= 10;
    }

    switch (TypePiece) {
    //Pion
    case 1:
        check = true;
        break;
    //Cavalier
    case 2:
        check = true;
        break;
    //Fou
    case 3:
        if (DiagonalMovement((int*)&TabCoordonnee) && NoBodyIsHere((int*)&TabCoordonnee)) {
            check = true;
        }
        break;
    //Tour
    case 4:
        if (DiagonalMovement((int*)&TabCoordonnee) && NoBodyIsHere((int*)&TabCoordonnee)) {
            check = true;
        }
        break;
    }

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction NoBodyIsHere-*/

bool C_Partie::NoBodyIsHere(int* TabCoordonnee) {

    bool check = true;  //variable qui vérifie la condition NoBodyIsHere

    int xDepart = TabCoordonnee[0];
    int yDepart = TabCoordonnee[1];
    int xArriver = TabCoordonnee[2];
    int yArriver = TabCoordonnee[3];

    //Variables x et y pour ne pas modifié xDepart et yDepart
    int x = xDepart, y = yDepart ;           

    //Pour determiner le sens de déplacement en x et y 
    int caseX = xArriver - xDepart;
    int caseY = yArriver - yDepart;

    //Le sens de déplacement de la verification (case par case)
    int deplacementX = 0 , deplacementY = 0 ;                               

    //Si CaseX > 0 alors le déplacement en x est positif (monter)
    if (caseX > 0) {                                           
        deplacementX = 1;
    }
    //Si CaseX < 0 alors le déplacement en x est négatif (descendre)
    else if (caseX < 0) {                                       
        deplacementX = -1;
    }


    //Si CaseY > 0 alors le déplacement en y est positif (droite)   
    if (caseY > 0) {                                                              
        deplacementY = 1;
    }
    //Si CaseY > 0 alors le déplacement en y est négatif (gauche)
    else if (caseY < 0) {                                      
        deplacementY = -1;
    }

    //Tant que l'on à pas checker toutes les cases entre Départ et Arriver
    do {

        //permet de se déplacer d'une case par case entre Départ et Arriver
        x += deplacementX;
        y += deplacementY;

        //Check la case , si elle est occupé alors check = false
        if (Plateau[x][y] != 0)
        {
            check = false;
        }

    } while (x != TabCoordonnee[2] || y != TabCoordonnee[3]);

    return check;                                               
}

//-----------------------------------------------------------------------------------

/*-Fonction LateralMovement-*/

bool C_Partie::LateralMovement(int* TabCoordonnee) {

    bool check = true;  //variable qui vérifie la condition LateralMovement

    int xDepart = TabCoordonnee[0];
    int yDepart = TabCoordonnee[1];
    int xArriver = TabCoordonnee[2];
    int yArriver = TabCoordonnee[3];

    //si la condition est vrai , alors c'est un déplacement diagonale
    if (xDepart != xArriver && yDepart != yArriver) { 
        check = false;
    }

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction DiagonalMovement-*/

bool C_Partie::DiagonalMovement(int* TabCoordonnee) {
    bool check = false;  //variable qui vérifie la condition DiagonalMovement

    int xDepart = TabCoordonnee[0];
    int yDepart = TabCoordonnee[1];
    int xArriver = TabCoordonnee[2];
    int yArriver = TabCoordonnee[3];

    //si la condition est vrai , alors c'est un déplacement diagonale
    if (xDepart != xArriver && yDepart != yArriver) {
        check = true;
    }

    return check;
}