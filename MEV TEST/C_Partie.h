#include <string>
#ifndef C_PARTIE_H
#define C_PARTIE_H

class C_Partie
{
    //Attribut
    public:

    int Vide;
    int Interdit;

    int PionBlanc;
    int CavalierBlanc;
    int FouBlanc;
    int TourBlanc;
    int DameBlanc;
    int RoiBlanc;

    int PionNoir;
    int CavalierNoir;
    int FouNoir;
    int TourNoir;
    int DameNoir;
    int RoiNoir;

    int Plateau[9][9];


    int Pieces_Blanc_Mort[16];
    int Pieces_Noir_Mort[16];

    string Historique [30];

    // var qui indique à qui de jouer : 0 veut dire blanc, 1 veut dire noir
    int Tour;


    bool MaCouleur;



    //Méthode
    public:

    C_Partie();
    void Init();
    void SetPiece();
    void Deplacer();
    string Convertir();
    void Tranmettre();
    void Verification();
    void Demander(int *);
    int Reception();
    void Manger();

    /*-- Verification --*/

    //Fonction de vérification général
    bool Verification(int*);
    
    //Pour vérifier si personne est sur le chemin
    bool NoBodyIsHere(int*);

    //Pour vérifier que ce soit bien un déplacement lateral (vertical/horizontal)
    bool LateralMovement(int*);

    //Pour vérifier que ce soit bien un déplacement diagonal
    bool DiagonalMovement(int*);

};

#endif // C_PARTIE_H
