#include <iostream>

/*-Prototypes de fonctions-*/

void Demander();

/*-Main-*/

int main()
{
    Demander();
}

/*-Fonction Demander()-*/
void Demander() {
    int Tab_Coordonnes[4];

    /*--TABLEAU--*/

    int Plateau[9][9];

    int i, j;

    /*-Les cases non utilisés-*/
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            Plateau[i][j] = 0;
        }
    }

    for (i = 0; i < 9; i++) {
        Plateau[0][i] = 99;
        Plateau[i][0] = 99;
    }

    /*--Placer les pions ici*/

    Plateau[4][4] = 01;  //pion qui se déplace soir en 7/4 soit en 8/8 
    Plateau[5][4] = 11;  //pion pour bloquer verticalement
    Plateau[6][6] = 14;   //pion pour bloquer diagonalement

    /*-Affichage du Tableau-*/

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            //std::cout<<Plateau[i][j]<<" ";
            printf("%.2i ", Plateau[i][j]);
        }
        std::cout << std::endl;
    }

    /*----------ZONE DE TEST-------------*/
}