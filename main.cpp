#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include "C_Partie.h"

C_Partie Game;
void Afficher();

int main()
{
    Game.Init();
    while(1)
    {
        Afficher();
        Game.Deplacer();
        std::cout<<"\n"<<std::endl;
        system("cls");
    }
    return 0;
}

void Afficher()
{
    int x;
    int y;

    for(y=1;y<9;y++)
    {
        printf("\n");

        for(x=1;x<9;x++)
        {
            printf("%3d",Game.Plateau[x][y]);
        }
    }
    std::cout<<"\n"<<std::endl;
}