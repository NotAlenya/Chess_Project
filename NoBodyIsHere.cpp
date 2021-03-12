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
    int Plateau[4][4];
    Plateau[3][3] = 5;
    Plateau[2][2] = 11;
    
    int i, j;
    
    for (i = 0; i > 8;i++) {
        for (j = 0; j > 8; i++) {

        }
    }
    std::cout << Plateau[3][3] << std::endl;
    return check;
}