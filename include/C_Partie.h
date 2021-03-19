#include <string>
#ifndef C_PARTIE_H
#define C_PARTIE_H

class C_Partie
{
    //Attribut
    public:

    int Vide= 0;

    int PionBlanc = 11;
    int CavalierBlanc = 12;
    int FouBlanc = 13;
    int TourBlanc = 14;
    int DameBlanc =15;
    int RoiBlanc =16;

    int PionNoir = 1;
    int CavalierNoir = 2;
    int FouNoir = 3;
    int TourNoir = 4;
    int DameNoir =5;
    int RoiNoir =6;

    int Plateau[9][9];


    int Pieces_Blanc_Mort[16];
    int Pieces_Noir_Mort[16];

    string Historique [30];

    // var qui indique à qui de jouer : 0 veut dire blanc, 1 veut dire noir
    int Tour;


    bool MaCouleur;



    //Méthode
    public:

    void Init();
    void SetPiece();
    void Deplacer();
    string Convertir();
    void Tranmettre();
    void Verificatoin();
    void Demander(int *);
    int Reception();
};

#endif // C_PARTIE_H
