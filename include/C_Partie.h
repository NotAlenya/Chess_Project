#include <string>
#ifndef C_PARTIE_H
#define C_PARTIE_H

class C_Partie
{
    //Attribut
    public:

    int Plateau[9][9] ={
     {99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99},
     {99 , 4 , 2 , 3 , 6 ,5 , 3 , 2 ,4},
     {99 , 1 , 1 , 1 , 1 ,1 , 1 , 1 ,1},
     {99 , 0 , 0 , 0 , 0 ,0 , 0 , 0 ,0},
     {99 , 0 , 0 , 0 , 0 ,0 , 0 , 0 ,0},
     {99 , 0 , 0 , 0 , 0 ,0 , 0 , 0 ,0},
     {99 , 0 , 0 , 0 , 0 ,0 , 0 , 0 ,0},
     {99 , 11 , 11 , 11 , 11 ,11 , 11 , 11 ,11},
     {99 , 14 , 12 , 13 , 15 ,16 , 13 , 12 ,14}
    };
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
