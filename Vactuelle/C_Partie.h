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

    int compteur_image;
    std::string GetFileNameImagePiece(int y, int x);
    std::string chemin_image;
    std::string GetBlancMorts(int x);

    // var qui indique � qui de jouer : 0 veut dire blanc, 1 veut dire noir
    int Tour;


    bool MaCouleur;



    //M�thode
    public:

    C_Partie();
    void Init();
    void SetPiece();
    void Deplacer();
    std::string Convertir();
    void Tranmettre();
    void Demander(int,int,int,int);
    int Reception();
    void Manger();
    void SystemeTour();
    int AQuiDeJouer();

    /*-- Verification --*/

    //Fonction de v�rification g�n�ral

    bool Verification();

    //Pour v�rifier si personne est sur le chemin
    bool NoBodyIsHere();

    //Pour v�rifier que ce soit bien un d�placement lateral (vertical/horizontal)
    bool LateralMovement();

    //Pour v�rifier que ce soit bien un d�placement diagonal
    bool DiagonalMovement();

    //Pour v�rifier que ce soit bien un d�placement en L
    bool CavalierMovement();

    //Pour v�rifier que ce soit bien un d�placement d'une case
    bool OneCaseMovement();

    //Pour v�rifier que ce soit bien un d�placement d'une case
    bool PionMovement();

    //Pour v�rifier la couleur du pion sur la case de d�part
    bool CouleurPionDepart();

    //Pour v�rifier la couleur du pion sur la case de d�part
    bool CouleurPionArriver();

    //Pour v�rifier si le pion sur la case d'arriver est mangeable
    bool VerifManger();

};

#endif // C_PARTIE_H
