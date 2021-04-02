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
    void Verification();
    void Demander();
    int Reception();
    void Manger();
    void SystemeTour();

};

#endif // C_PARTIE_H
