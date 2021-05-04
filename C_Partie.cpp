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
    NbPiecesBlanchesMangees=0;
    NbPiecesNoirsMangees=0;
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

        //boucle interdit
        y = 0;
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
    int stockage;
    //Vérification
    bool DeplacementReussi = false;

    do
    {
        Demander();
        if(Verification()&&VerifManger())
        {
            //deplacement vers une case occupée par l'adversaire donc MANGER !!
            Manger();
            DeplacementReussi = true;

        }
        if(Verification()&&Plateau[XArriver][YArriver]==0)
        {
            // deplacement de la pièce vers une case vide
            stockage = Plateau[XArriver][YArriver];
            Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart];
            Plateau[XDepart][YDepart] = stockage;

            DeplacementReussi = true;

        }
    }
    while(DeplacementReussi == false);




}
//-----------------------------------------------------------------------------------
void C_Partie::Roque()
{
    //Petit roque pour les blancs

    XDepart = 5;
    YDepart = 8;
    XArriver = 7;
    YArriver = 8;
    Deplacer();
    XDepart = 8;
    YDepart = 8;
    XArriver = 6;
    YArriver = 8;
    Deplacer();


    //Grand roque pour les blancs

    XDepart = 5;
    YDepart = 8;
    XArriver = 2;
    YArriver = 8;
    Deplacer();
    XDepart = 1;
    YDepart = 8;
    XArriver = 4;
    YArriver = 8;
    Deplacer();

    //Petit roque pour les noirs
    XDepart = 5;
    YDepart = 1;
    XArriver = 7;
    YArriver = 1;
    Deplacer();
    XDepart = 8;
    YDepart = 1;
    XArriver = 6;
    YArriver = 1;
    Deplacer();

    //Grand roque pour les noirs

    XDepart = 5;
    YDepart = 1;
    XArriver = 3;
    YArriver = 1;
    Deplacer();
    XDepart = 1;
    YDepart = 1;
    XArriver = 4;
    YArriver = 1;
    Deplacer();
}
//-----------------------------------------------------------------------------------
void C_Partie::Promotion ()
{
    int newPion;
    int choix;

    std::cin>> choix;

    if(choix>= 2 && choix<=5)
    {
        newPion = CouleurPionDepart() + choix;
    }
}
//-----------------------------------------------------------------------------------
void C_Partie::Demander ()
{
   std::cin>> XDepart >>  YDepart >>  XArriver >>  YArriver;
}
//-----------------------------------------------------------------------------------
void C_Partie::Manger()
{
    // la piece mangee est placee dans le tab des pieces mangées

    if(CouleurPionArriver()== true)//Blanc
    {
        Pieces_Blancs_Morts[NbPiecesBlanchesMangees] = Plateau[XArriver][YArriver];
        NbPiecesBlanchesMangees++;
    }
    else
    {
        Pieces_Noirs_Morts[NbPiecesNoirsMangees] = Plateau[XArriver][YArriver];
        NbPiecesNoirsMangees++;
    }

    Plateau[XArriver][YArriver] = Plateau[XDepart][YDepart];
    Plateau[XDepart][YDepart] = 0;
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
/*-Fonction Verification-*/

bool C_Partie::Verification() {

    bool check = false ;

    if (XDepart>=0 && XDepart<=8 && YDepart>=0 && YDepart<=8 && XArriver >= 0 && XArriver <= 8 && YArriver >= 0 && YArriver <= 8) {

        int Piece = Plateau[XDepart][YDepart];
        int TypePiece = Piece;

        if (TypePiece > 10) {
            TypePiece -= 10;
        }

        switch (TypePiece) {
            //Pion
        case 1:
            if (PionMovement()) {
                check = true;
            }
            break;
            //Cavalier
        case 2:
            if (CavalierMovement()) {
                check = true;
            }
            break;
            //Fou
        case 3:
            if (DiagonalMovement() && NoBodyIsHere()) {
                check = true;
            }
            break;
            //Tour
        case 4:
            if (LateralMovement() && NoBodyIsHere()) {
                check = true;
            }
            break;
            //Dame
        case 5:
            if (DiagonalMovement() || LateralMovement() && NoBodyIsHere()) {
                check = true;
            }
            //Roi
        case 6:
            if (DiagonalMovement() || LateralMovement() && NoBodyIsHere() && OneCaseMovement()) {
                check = true;
            }
            break;
        }
    }

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction NoBodyIsHere-*/

bool C_Partie::NoBodyIsHere() {

    bool check = true;  //variable qui vérifie la condition NoBodyIsHere

    //Variables x et y pour ne pas modifié xDepart et yDepart
    int x = XDepart;
    int y = YDepart ;

    //Variables x et y pour ne pas modifié XArriver et YArriver
    int xarriver = XArriver;
    int yarriver = YArriver;

    //Pour determiner le sens de déplacement en x et y
    int caseX = XArriver - XDepart;
    int caseY = YArriver - YDepart;

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
            if (x != XArriver || y != YArriver) {
                check = false;
            }
        }
    } while (x != XArriver || y != YArriver);

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction LateralMovement-*/

bool C_Partie::LateralMovement() {

    bool check = true;  //variable qui vérifie la condition LateralMovement

    //si la condition est vrai , alors c'est un déplacement diagonale
    if (XDepart != XArriver && YDepart != YArriver) {
        check = false;
    }

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction DiagonalMovement-*/

bool C_Partie::DiagonalMovement() {
    bool check = false;  //variable qui vérifie la condition DiagonalMovement

    //si la condition est vrai , alors c'est un déplacement diagonale
    if (XDepart != XArriver && YDepart != YArriver) {
        check = true;
    }

    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction CavalierMovement-*/

bool C_Partie::CavalierMovement() {
    bool check = false;

    int caseX = XArriver - XDepart;
    int caseY = YArriver - YDepart;

    //Absolue de caseX
    if (caseX < 0) {
        caseX *= -1;
    }

    //Absolue de caseY
    if (caseY < 0) {
        caseY *= -1;
    }

    if (caseX == 2 && caseY == 1 || caseX == 1 && caseY == 2) {
        check = true;
    }
    return check;
}

//-----------------------------------------------------------------------------------

/*-Fonction OneCaseMovement-*/

bool C_Partie::OneCaseMovement() {
    bool check = false;

    int caseX = XArriver - XDepart;
    int caseY = YArriver - YDepart;

    //Absolue de caseX
    if (caseX < 0) {
        caseX *= -1;
    }

    //Absolue de caseY
    if (caseY < 0) {
        caseY *= -1;
    }

    if (caseX < 2 && caseY < 2) {
        check = true;
    }
    return check;
}

//-----------------------------------------------------------------------------------
/*-Fonction PionMovement-*/


bool C_Partie::PionMovement() {
    bool check = false;

    int caseX = XArriver - XDepart;
    int caseY = YArriver - YDepart;

    int YSpawn;

    //Absolue de caseX
    if (caseX < 0) {
        caseX *= -1;
    }

    //Absolue de caseY
    if (caseY < 0) {
        caseY *= -1;
    }

    if (CouleurPionDepart()) {
        YSpawn = 7;
    }
    else {
        YSpawn = 2;
    }

    if ( caseY <= 2 && caseX==0 && YDepart==YSpawn ||caseY == 1 && caseX == 0 || caseY == 1 && caseX == 1 && Plateau[XArriver][YArriver]!=0 && CouleurPionDepart()!=CouleurPionArriver()) {
        check = true;
    }
    return check;
}

//-----------------------------------------------------------------------------------
/*-Fonction CouleurPionDepart-*/

bool C_Partie::CouleurPionDepart() {

    bool check = false;

    int Piece = Plateau[XDepart][YDepart];

    if (Piece > 10 && Piece < 17) {
        check = true;
    }
    if (Piece > 0 && Piece < 7) {
        check = false;
    }

    return check;
}

//-----------------------------------------------------------------------------------
/*-Fonction CouleurPionArriver-*/

bool C_Partie::CouleurPionArriver() {

    bool check = false;

    int Piece = Plateau[XArriver][YArriver];

    if (Piece > 10 && Piece < 17) {
        check = true;
    }
    if (Piece > 0 && Piece < 7) {
        check = false;
    }

    return check;
}

//-----------------------------------------------------------------------------------
/*-Fonction VerifManger-*/

bool C_Partie::VerifManger() {
    bool check = false;

    if (Plateau[XArriver][YArriver] != 0 && CouleurPionDepart()!= CouleurPionArriver()) {
        check = true;
    }
    return check;
}
