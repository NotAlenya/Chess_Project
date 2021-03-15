#include <iostream>

/*-Prototypes de fonctions-*/

void Deplacer();

void SystemeDeTableau();

/*-Main-*/

int main()
{
    Deplacer();
    SystemeDeTableau();
}

/*-Fonction Deplacer-*/
void Deplacer() {
    int Tab_Coordonnes[4]; // yDepart[0] xDepart[1] yArrive[2] xArrive[3]

    /*-Simulation de la fonction Demander-*/

    Tab_Coordonnes[0] = 1 ; // yDepart
    Tab_Coordonnes[1] = 1 ; // xDepart
    Tab_Coordonnes[2] = 1 ; // yArrive
    Tab_Coordonnes[3] = 1 ; // xArrive

    /*-------------------------------------------------ZONE DE TEST-------------------------------------------------------------*/
}

void SystemeDeTableau() {     
    //NE COPIER SEULEMENT L INTERIEUR DE LA FONCTION ET LA COPIER DANS LA FONCTION A TESTER (fonctionne sans si c'est une  méthode)

    /*-Tableau-*/

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

    /*--Placer les pions ici--*/

    Plateau[4][4] = 01;  //pion qui se déplace soir en 7/4 soit en 8/8 
    Plateau[5][4] = 11;  //pion pour bloquer verticalement
    Plateau[6][6] = 14;  //pion pour bloquer diagonalement

    /*-Affichage du Tableau-*/

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            //std::cout<<Plateau[i][j]<<" ";
            printf("%.2i ", Plateau[i][j]);
        }
        std::cout << std::endl;
    }
}
