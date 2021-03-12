#include <iostream>

/*-Prototype de fonctions-*/

bool noBodyIsHere(int, int, int, int);

/*-Main-*/

int main()
{
    bool test = noBodyIsHere(4,4,8,8);
    std::cout <<std::endl<< "NoBodyIsHere = "<<test<<std::endl;
}

/*-Fonction noBodyIsHere-*/

bool noBodyIsHere(int yDepart, int xDepart, int yArrive, int xArrive) {

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
    
    for (i = 0; i < 9;i++) {
        for (j = 0; j < 9; j++) {
            //std::cout<<Plateau[i][j]<<" ";
            printf("%.2i ", Plateau[i][j]);
        }
        std::cout << std::endl;
    }

    /*-NoBodyIsHere-*/

    bool check = true ;                                         //variable qui vérifie la condition NoBodyIsHere
     
    int y = yDepart, x = xDepart;                               //Variables x et y pour ne pas modifié xDepart et yDepart
    int caseY = yArrive - yDepart, caseX = xArrive - xDepart;   //Pour determiner le sens de déplacement en x et y 
    int deplacementY = 0, deplacementX = 0;                     //Le sens de déplacement de la verification (case par case)

    if (caseY > 0) {                                            //Si CaseY > 0 alors le déplacement en y est positif (monté)
        deplacementY = 1;
    }
    else if (caseY < 0) {                                       //Si CaseY < 0 alors le déplacement en y est négatif (descendre)
        deplacementY = -1;
    }

    if (caseX > 0) {                                            //Si CaseX > 0 alors le déplacement en y est positif (droite)                      
        deplacementX = 1;
    }
    else if (caseX < 0) {                                       //Si CaseX > 0 alors le déplacement en y est négatif (gauche)
        deplacementX = -1;
    }

    while (y != yArrive && x != yArrive) {                      //Tant que toutes les cases ne sons pas testé

        y += deplacementY;                                      //Augmente y en fonction de son sens de déplacement
        x += deplacementX;                                      //Augmente x en fonction de son sens de déplacement

        if (Plateau[y][x] != 0) check = false;                  //Test si la case est vide , si non alors check est faux
    }

    return check;                                               //retourne check
}
