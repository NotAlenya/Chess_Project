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

    // l etat actuel de la partie
    int Plateau[9][9];

    // le dernier coup (style E2 E4)
    int XDepart , YDepart , XArriver , YArriver;


    int Pieces_Blancs_Morts[16];
    int NbPiecesBlanchesMangees;

    int Pieces_Noirs_Morts[16];
    int NbPiecesNoirsMangees;

    std::string Historique [30];

    // var qui indique à qui de jouer : 0 veut dire blanc, 1 veut dire noir
    int Tour;


    bool MaCouleur;



    //Méthode
    public:

    C_Partie();
    void Init();
    void SetPiece();
    void Deplacer();
    std::string Convertir();
    void Tranmettre();
    void Demander();
    int Reception();
    void Manger();
    void SystemeTour();

    /*-- Verification --*/

    //Fonction de vérification général

    bool Verification();

    //Pour vérifier si personne est sur le chemin
    bool NoBodyIsHere();

    //Pour vérifier que ce soit bien un déplacement lateral (vertical/horizontal)
    bool LateralMovement();

    //Pour vérifier que ce soit bien un déplacement diagonal
    bool DiagonalMovement();

    //Pour vérifier que ce soit bien un déplacement en L
    bool CavalierMovement();

    //Pour vérifier que ce soit bien un déplacement d'une case
    bool OneCaseMovement();

    //Pour vérifier que ce soit bien un déplacement d'une case
    bool PionMovement();

    //Pour vérifier la couleur du pion sur la case de départ
    bool CouleurPionDepart();

    //Pour vérifier la couleur du pion sur la case de départ
    bool CouleurPionArriver();

    //Pour vérifier si le pion sur la case d'arriver est mangeable
    bool VerifManger();

};

#endif // C_PARTIE_H
