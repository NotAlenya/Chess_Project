#include <iostream>

/*-Prototype de fonctions-*/

bool noBodyIsHere(int, int, int, int);

/*-Main-*/

int main()
{
    bool test = noBodyIsHere(2,1,2,3);
    std::cout << "NoBodyIsHere = "<<test;
}

/*-Fonction noBodyIsHere-*/

bool noBodyIsHere(int xDepart, int yDepart, int xArrive, int yArrive) {

    bool check = true;
    int Plateau[8][8];

    int i, j;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            Plateau[i][j] = 0;
        }
    }

    Plateau[3][3] = 5;
    Plateau[2][2] = 11;
    
    
    
    for (i = 0; i < 7;i++) {
        for (j = 0; j < 7; j++) {
            //std::cout<<Plateau[i][j]<<" ";
            printf("%.2i ", Plateau[i][j]);
        }
        std::cout << std::endl;
    }
    return check;
}
